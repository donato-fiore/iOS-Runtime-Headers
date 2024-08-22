// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKANYPREDICATEVALIDATOR_H
#define CKANYPREDICATEVALIDATOR_H

@class NSArray;


#import "CKPredicateValidatorInstance.h"

@interface CKAnyPredicateValidator : CKPredicateValidatorInstance {
    NSArray *_validators;
}




-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;


@end


#endif