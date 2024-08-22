// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERPRELIMINARYASSESSMENTINSTALLMENTPLAN_H
#define PKPAYLATERPRELIMINARYASSESSMENTINSTALLMENTPLAN_H

@class NSDecimalNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPayLaterFinancingAmount.h"

@interface PKPayLaterPreliminaryAssessmentInstallmentPlan : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL hasAPR; // ivar: _hasAPR
@property (retain, nonatomic) PKPayLaterFinancingAmount *installmentAmount; // ivar: _installmentAmount
@property (nonatomic) NSInteger installmentCount; // ivar: _installmentCount
@property (copy, nonatomic) NSDecimalNumber *maximumAPR; // ivar: _maximumAPR
@property (copy, nonatomic) NSDecimalNumber *minimumAPR; // ivar: _minimumAPR
@property (nonatomic) NSUInteger productType; // ivar: _productType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPreliminaryAssessmentInstallmentPlan:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 productType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif