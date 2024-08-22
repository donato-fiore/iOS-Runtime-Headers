// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSIGNEDCLINICALDATAGROUP_H
#define HKSIGNEDCLINICALDATAGROUP_H

@class NSArray, HKSignedClinicalDataRecord;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKSignedClinicalDataQRRepresentation.h"

@interface HKSignedClinicalDataGroup : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKSignedClinicalDataQRRepresentation *QRRepresentation; // ivar: _QRRepresentation
@property (readonly, copy, nonatomic) NSArray *clinicalRecords; // ivar: _clinicalRecords
@property (readonly, copy, nonatomic) HKSignedClinicalDataRecord *mainRecord; // ivar: _mainRecord
@property (readonly, copy, nonatomic) NSArray *medicalRecords; // ivar: _medicalRecords
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 mainRecord:(id)arg1 medicalRecords:(id)arg2 clinicalRecords:(id)arg3 QRRepresentation:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif