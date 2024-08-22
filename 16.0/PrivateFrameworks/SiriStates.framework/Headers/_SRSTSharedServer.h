// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SRSTSHAREDSERVER_H
#define _SRSTSHAREDSERVER_H


#import <Foundation/Foundation.h>

#import "_SRSTSharedState.h"

@interface _SRSTSharedServer : NSObject {
    ? stateMachine;
    ? stateMachineObserver;
}


@property (nonatomic, readonly) _SRSTSharedState *currentState;


-(id)init;
-(void)dealloc;


@end


#endif