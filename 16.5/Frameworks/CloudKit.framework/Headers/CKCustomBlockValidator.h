// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCUSTOMBLOCKVALIDATOR_H
#define CKCUSTOMBLOCKVALIDATOR_H



#import "CKPredicateValidatorInstance.h"

@interface CKCustomBlockValidator : CKPredicateValidatorInstance

@property (copy, nonatomic) id *block; // ivar: _block


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)initWithBlock:(id)arg0 ;


@end


#endif