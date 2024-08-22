// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDECLARATIVEPREDICATEVALIDATOR_H
#define CKDECLARATIVEPREDICATEVALIDATOR_H

@protocol CKObjectValidating;


#import "CKPredicateValidator.h"

@interface CKDeclarativePredicateValidator : CKPredicateValidator {
    id<CKObjectValidating> *_validator;
}




-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif