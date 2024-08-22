// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCOMPARISONOPTIONSVALIDATOR_H
#define CKCOMPARISONOPTIONSVALIDATOR_H



#import "CKPredicateValidatorInstance.h"

@interface CKComparisonOptionsValidator : CKPredicateValidatorInstance {
    NSUInteger _options;
}




-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;


@end


#endif