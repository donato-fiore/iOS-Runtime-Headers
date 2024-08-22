// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKRECURSIVEPREDICATEVALIDATOR_H
#define CKRECURSIVEPREDICATEVALIDATOR_H

@protocol CKObjectValidating;


#import "CKPredicateValidatorInstance.h"

@interface CKRecursivePredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSObject<CKObjectValidating> *validator; // ivar: _validator


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithValidator:(id)arg0 ;


@end


#endif