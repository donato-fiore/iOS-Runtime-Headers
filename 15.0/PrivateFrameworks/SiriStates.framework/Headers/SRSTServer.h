// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRSTSERVER_H
#define SRSTSERVER_H


#import <Foundation/Foundation.h>

#import "SRSTState.h"

@interface SRSTServer : NSObject {
    ? stateMachine;
    ? stateMachineObserver;
}


@property (nonatomic, readonly) SRSTState *currentState;


-(id)init;
-(void)dealloc;


@end


#endif