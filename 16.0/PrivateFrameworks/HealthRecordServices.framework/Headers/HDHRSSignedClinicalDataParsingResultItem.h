// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRSSIGNEDCLINICALDATAPARSINGRESULTITEM_H
#define HDHRSSIGNEDCLINICALDATAPARSINGRESULTITEM_H

@class NSArray, HKSignedClinicalDataRecord, NSData, HKVerifiableClinicalRecord;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HDHRSOriginalSignedClinicalDataRecord.h"

@interface HDHRSSignedClinicalDataParsingResultItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *clinicalRecords; // ivar: _clinicalRecords
@property (readonly, copy, nonatomic) HKSignedClinicalDataRecord *mainRecord; // ivar: _mainRecord
@property (readonly, copy, nonatomic) NSArray *medicalRecords; // ivar: _medicalRecords
@property (readonly, copy, nonatomic) HDHRSOriginalSignedClinicalDataRecord *originalRecord; // ivar: _originalRecord
@property (readonly, copy, nonatomic) NSData *uniquenessChecksum;
@property (readonly, copy, nonatomic) HKVerifiableClinicalRecord *verifiableClinicalRecord; // ivar: _verifiableClinicalRecord


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginalRecord:(id)arg0 mainRecord:(id)arg1 verifiableClinicalRecord:(id)arg2 medicalRecords:(id)arg3 clinicalRecords:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif