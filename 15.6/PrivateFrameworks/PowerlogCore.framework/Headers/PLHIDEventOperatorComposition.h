// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLHIDEVENTOPERATORCOMPOSITION_H
#define PLHIDEVENTOPERATORCOMPOSITION_H


#import <Foundation/Foundation.h>

#import "PLOperator.h"

@interface PLHIDEventOperatorComposition : NSObject

@property *__IOHIDEventSystemClient eventSystemClient; // ivar: _eventSystemClient
@property (retain) PLOperator *operator; // ivar: _operator
@property (copy, nonatomic) id *operatorBlock; // ivar: _operatorBlock


-(id)initWithOperator:(id)arg0 forUsagePage:(NSUInteger)arg1 andUsage:(NSUInteger)arg2 withBlock:(id)arg3 ;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif