// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCOMPOUNDTYPEPREDICATEVALIDATOR_H
#define CKCOMPOUNDTYPEPREDICATEVALIDATOR_H



#import "CKPredicateValidatorInstance.h"

@interface CKCompoundTypePredicateValidator : CKPredicateValidatorInstance

@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif