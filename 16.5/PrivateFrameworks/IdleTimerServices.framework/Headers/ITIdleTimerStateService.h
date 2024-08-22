// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ITIDLETIMERSTATESERVICE_H
#define ITIDLETIMERSTATESERVICE_H

@class NSMutableDictionary, NSString;
@protocol ITIdleTimerStateServerDelegate, OS_dispatch_queue, BSInvalidatable, ITIdleTimerStateServiceDelegate;

#import <Foundation/Foundation.h>

#import "ITIdleTimerStateServer.h"

@interface ITIdleTimerStateService : NSObject <ITIdleTimerStateServerDelegate>

 {
    ITIdleTimerStateServer *_server;
    NSObject<OS_dispatch_queue> *_calloutDispatchQueue;
    NSMutableDictionary *_assertionsByReason;
    NSMutableDictionary *_assertionReasonsByClientID;
    id<BSInvalidatable> *_stateCaptureAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ITIdleTimerStateServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addIdleTimerConfiguration:(id)arg0 fromProcess:(id)arg1 forReason:(id)arg2 ;
-(BOOL)clientConfiguration:(id)arg0 handleIdleEvent:(NSUInteger)arg1 ;
-(BOOL)isIdleTimerServiceAvailable;
-(id)_identifierForClientProcess:(id)arg0 ;
-(id)initWithDispatchQueue:(id)arg0 ;
-(id)initWithDispatchQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_addStateCaptureHandler;
-(void)clientDidDisconnect:(id)arg0 ;
-(void)dealloc;
-(void)removeIdleTimerConfigurationFromProcess:(id)arg0 forReason:(id)arg1 ;


@end


#endif