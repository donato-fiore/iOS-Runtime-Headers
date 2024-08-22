// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SRSTCALLSERVER_H
#define _SRSTCALLSERVER_H


#import <Foundation/Foundation.h>

#import "_SRSTCallState.h"

@interface _SRSTCallServer : NSObject {
    ? stateMachine;
    ? stateMachineObserver;
}


@property (nonatomic, readonly) _SRSTCallState *currentState;


-(id)init;
-(void)dealloc;


@end


#endif