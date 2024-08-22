// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPARISONPREDICATEVALIDATOR_H
#define CKCOMPARISONPREDICATEVALIDATOR_H

@protocol CKObjectValidating;


#import "CKPredicateValidatorInstance.h"

@interface CKComparisonPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSObject<CKObjectValidating> *leftExpressionValidator; // ivar: _leftExpressionValidator
@property (retain, nonatomic) NSObject<CKObjectValidating> *modifierValidator; // ivar: _modifierValidator
@property (retain, nonatomic) NSObject<CKObjectValidating> *operatorValidator; // ivar: _operatorValidator
@property (retain, nonatomic) NSObject<CKObjectValidating> *optionsValidator; // ivar: _optionsValidator
@property (retain, nonatomic) NSObject<CKObjectValidating> *rightExpressionValidator; // ivar: _rightExpressionValidator


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;


@end


#endif