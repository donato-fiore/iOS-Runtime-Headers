// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSBLOCKVALIDATION_H
#define TPSBLOCKVALIDATION_H



#import "TPSTargetingValidation.h"

@interface TPSBlockValidation : TPSTargetingValidation

@property (copy, nonatomic) id *validationBlock; // ivar: _validationBlock


+(id)blockValidationWithBlock:(id)arg0 ;
-(id)initWithValidationBlock:(id)arg0 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif