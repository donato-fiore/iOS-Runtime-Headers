// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSIGNEDCLINICALDATAPARSINGRESULTCLINICALITEM_H
#define HKSIGNEDCLINICALDATAPARSINGRESULTCLINICALITEM_H

@class NSArray, HKVerifiableClinicalRecord;
@protocol NSCopying, NSSecureCoding;


#import "HKSignedClinicalDataParsingResultItem.h"

@interface HKSignedClinicalDataParsingResultClinicalItem : HKSignedClinicalDataParsingResultItem <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *clinicalRecords; // ivar: _clinicalRecords
@property (readonly, copy, nonatomic) NSArray *medicalRecords; // ivar: _medicalRecords
@property (readonly, copy, nonatomic) HKVerifiableClinicalRecord *verifiableClinicalRecord; // ivar: _verifiableClinicalRecord


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithOriginalRecord:(id)arg0 mainRecord:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginalRecord:(id)arg0 mainRecord:(id)arg1 verifiableClinicalRecord:(id)arg2 medicalRecords:(id)arg3 clinicalRecords:(id)arg4 ;
-(id)uniquenessChecksum;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif