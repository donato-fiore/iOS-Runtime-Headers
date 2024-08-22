// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ITIDLETIMERSTATE_H
#define ITIDLETIMERSTATE_H

@protocol ITIdleTimerStateRequestHandling;

#import <Foundation/Foundation.h>

#import "ITIdleTimerStateModel.h"

@interface ITIdleTimerState : NSObject {
    os_unfair_lock_s _accessLock;
    ITIdleTimerStateModel *_model;
    id<ITIdleTimerStateRequestHandling> *_requestHandler;
}




+(BOOL)isIdleTimerServiceAvailable;
+(id)sharedInstance;
-(BOOL)isIdleTimerServiceAvailable;
-(id)_init;
-(id)_initWithModel:(id)arg0 ;
-(id)newAssertionToDisableIdleTimerForReason:(id)arg0 ;
-(id)newAssertionToDisableIdleTimerForReason:(id)arg0 error:(*id)arg1 ;
-(id)newIdleTimerAssertionWithConfiguration:(id)arg0 forReason:(id)arg1 ;
-(id)newIdleTimerAssertionWithConfiguration:(id)arg0 forReason:(id)arg1 error:(*id)arg2 ;


@end


#endif