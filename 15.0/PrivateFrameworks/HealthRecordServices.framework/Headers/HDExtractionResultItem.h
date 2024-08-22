// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDEXTRACTIONRESULTITEM_H
#define HDEXTRACTIONRESULTITEM_H

@class HKClinicalRecord, HKMedicalRecord, HKFHIRIdentifier;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKClinicalRecord *clinicalRecord; // ivar: _clinicalRecord
@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (readonly, copy, nonatomic) HKFHIRIdentifier *resourceIdentifier; // ivar: _resourceIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResourceIdentifier:(id)arg0 medicalRecord:(id)arg1 clinicalRecord:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif