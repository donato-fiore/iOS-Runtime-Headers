// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFLIPFLOPPREDICATEVALIDATOR_H
#define CKFLIPFLOPPREDICATEVALIDATOR_H

@protocol CKObjectValidating;


#import "CKPredicateValidatorInstance.h"

@interface CKFlipFlopPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSObject<CKObjectValidating> *validator; // ivar: _validator


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithValidator:(id)arg0 ;


@end


#endif