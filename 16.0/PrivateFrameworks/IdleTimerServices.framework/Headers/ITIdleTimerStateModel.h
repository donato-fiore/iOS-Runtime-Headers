// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ITIDLETIMERSTATEMODEL_H
#define ITIDLETIMERSTATEMODEL_H

@class NSMutableDictionary, NSString;
@protocol ITIdleTimerStateRequestDelegate, ITIdleTimerStateRequestHandling, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface ITIdleTimerStateModel : NSObject <ITIdleTimerStateRequestDelegate>

 {
    os_unfair_lock_s _accessLock;
    NSMutableDictionary *_access_idleTimerAssertionsByConfigIdentifier;
    id<ITIdleTimerStateRequestHandling> *_requestHandler;
    id<BSInvalidatable> *_stateCaptureAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isIdleTimerServiceAvailable) BOOL idleTimerServiceAvailable;
@property (readonly) Class superclass;


-(BOOL)handleIdleEvent:(NSUInteger)arg0 usingConfigurationWithIdentifier:(id)arg1 ;
-(id)_access_newIdleTimerAssertionWithConfiguration:(id)arg0 forReason:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)newIdleTimerAssertionWithConfiguration:(id)arg0 forReason:(id)arg1 error:(*id)arg2 ;
-(void)_addStateCaptureHandler;
-(void)dealloc;
-(void)resendIdleTimerAssertions;


@end


#endif