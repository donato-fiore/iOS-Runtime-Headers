// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFUNCTIONEXPRESSIONVALIDATOR_H
#define CKFUNCTIONEXPRESSIONVALIDATOR_H

@class NSString, NSArray;


#import "CKPredicateValidatorInstance.h"

@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance {
    NSString *_functionName;
    NSArray *_argumentValidators;
}




-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;


@end


#endif