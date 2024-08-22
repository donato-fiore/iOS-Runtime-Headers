// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIESTATEMONITOR_H
#define CTSTEWIESTATEMONITOR_H

@protocol CTStewieStateMonitorDelegate, OS_dispatch_queue, OS_nw_path_evaluator;

#import <Foundation/Foundation.h>

#import "CTStewieState.h"

@interface CTStewieStateMonitor : NSObject {
    os_unfair_lock_s fLock;
    CTStewieState *fState;
    id<CTStewieStateMonitorDelegate> *fDelegate;
    NSObject<OS_dispatch_queue> *fDelegateQueue;
    NSObject<OS_nw_path_evaluator> *fPathEvaluator;
    BOOL fStarted;
}




-(BOOL)start;
-(BOOL)startWithEndpoint:(id)arg0 parameters:(id)arg1 ;
-(id)getState;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)stateFromPath:(id)arg0 ;
-(void)dealloc;


@end


#endif