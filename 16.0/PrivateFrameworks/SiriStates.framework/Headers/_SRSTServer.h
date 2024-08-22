// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SRSTSERVER_H
#define _SRSTSERVER_H


#import <Foundation/Foundation.h>

#import "_SRSTState.h"

@interface _SRSTServer : NSObject {
    ? stateMachine;
    ? stateMachineObserver;
}


@property (nonatomic, readonly) _SRSTState *currentState;


-(id)init;
-(void)dealloc;


@end


#endif