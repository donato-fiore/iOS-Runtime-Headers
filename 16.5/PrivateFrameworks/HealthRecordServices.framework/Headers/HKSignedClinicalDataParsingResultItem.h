// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSIGNEDCLINICALDATAPARSINGRESULTITEM_H
#define HKSIGNEDCLINICALDATAPARSINGRESULTITEM_H

@class HKSignedClinicalDataRecord, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HDHRSOriginalSignedClinicalDataRecord.h"

@interface HKSignedClinicalDataParsingResultItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKSignedClinicalDataRecord *mainRecord; // ivar: _mainRecord
@property (readonly, copy, nonatomic) HDHRSOriginalSignedClinicalDataRecord *originalRecord; // ivar: _originalRecord
@property (readonly, copy, nonatomic) NSData *uniquenessChecksum;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithOriginalRecord:(id)arg0 mainRecord:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginalRecord:(id)arg0 mainRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif