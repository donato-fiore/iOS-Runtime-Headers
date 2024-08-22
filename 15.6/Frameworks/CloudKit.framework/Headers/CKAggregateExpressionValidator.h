// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKAGGREGATEEXPRESSIONVALIDATOR_H
#define CKAGGREGATEEXPRESSIONVALIDATOR_H

@class NSArray;


#import "CKPredicateValidatorInstance.h"

@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSArray *subExpressionValidators; // ivar: _subExpressionValidators


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithValidators:(id)arg0 ;


@end


#endif