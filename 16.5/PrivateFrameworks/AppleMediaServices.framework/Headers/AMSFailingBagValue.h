// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFAILINGBAGVALUE_H
#define AMSFAILINGBAGVALUE_H

@class NSError;


#import "AMSFrozenBagValue.h"

@interface AMSFailingBagValue : AMSFrozenBagValue

@property (retain, nonatomic) NSError *error; // ivar: _error


-(id)initWithKey:(id)arg0 valueType:(NSUInteger)arg1 error:(id)arg2 ;
-(void)valueWithCompletion:(id)arg0 ;


@end


#endif