// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCOMPARISONMODIFIERVALIDATOR_H
#define CKCOMPARISONMODIFIERVALIDATOR_H



#import "CKPredicateValidatorInstance.h"

@interface CKComparisonModifierValidator : CKPredicateValidatorInstance

@property (nonatomic) NSUInteger modifier; // ivar: _modifier


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithModifier:(NSUInteger)arg0 ;


@end


#endif