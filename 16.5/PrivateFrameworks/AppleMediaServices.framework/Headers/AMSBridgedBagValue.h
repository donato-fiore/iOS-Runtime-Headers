// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBRIDGEDBAGVALUE_H
#define AMSBRIDGEDBAGVALUE_H



#import "AMSFrozenBagValue.h"
#import "AMSPromise.h"

@interface AMSBridgedBagValue : AMSFrozenBagValue

@property (retain, nonatomic) AMSPromise *valuePromise; // ivar: _valuePromise


-(id)initWithKey:(id)arg0 valueType:(NSUInteger)arg1 valuePromise:(id)arg2 ;
-(void)valueWithCompletion:(id)arg0 ;


@end


#endif