// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPARISONOPERATORVALIDATOR_H
#define CKCOMPARISONOPERATORVALIDATOR_H



#import "CKPredicateValidatorInstance.h"

@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance

@property (nonatomic) NSUInteger operatorType; // ivar: _operatorType


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithOperatorType:(NSUInteger)arg0 ;


@end


#endif