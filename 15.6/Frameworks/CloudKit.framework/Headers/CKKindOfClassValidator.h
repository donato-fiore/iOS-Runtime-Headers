// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKKINDOFCLASSVALIDATOR_H
#define CKKINDOFCLASSVALIDATOR_H



#import "CKPredicateValidatorInstance.h"

@interface CKKindOfClassValidator : CKPredicateValidatorInstance {
    Class _parentClass;
}




-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;


@end


#endif