// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERPRODUCTASSESSMENT_H
#define PKPAYLATERPRODUCTASSESSMENT_H

@class NSDictionary, NSDecimalNumber, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPayLaterProductAssessmentInstallmentSummary.h"
#import "PKPayLaterPreliminaryAssessment.h"

@interface PKPayLaterProductAssessment : NSObject <NSSecureCoding, NSCopying>

 {
    NSDictionary *_financingOptionIdentifierMap;
    PKPayLaterProductAssessmentInstallmentSummary *_lowestPossibleInstallmentSummary;
    NSDecimalNumber *_minimumAPR;
    NSDecimalNumber *_maximumAPR;
}


@property (readonly, nonatomic) NSUInteger financingEligibility; // ivar: _financingEligibility
@property (readonly, copy, nonatomic) NSArray *financingOptions; // ivar: _financingOptions
@property (readonly, nonatomic) PKPayLaterPreliminaryAssessment *preliminaryAssessment; // ivar: _preliminaryAssessment
@property (readonly, nonatomic) NSUInteger productType; // ivar: _productType


+(BOOL)supportsSecureCoding;
-(BOOL)isEligible;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)financingOptionWithIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif