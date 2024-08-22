// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSTRINGVALUEVALIDATOR_H
#define CKSTRINGVALUEVALIDATOR_H

@class NSString;


#import "CKPredicateValidatorInstance.h"

@interface CKStringValueValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSString *value; // ivar: _value


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithValue:(id)arg0 ;


@end


#endif