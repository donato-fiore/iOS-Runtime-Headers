// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHXPCBACKLIGHTPROXYHOST_H
#define BLSHXPCBACKLIGHTPROXYHOST_H

@class RBSProcessMonitor, NSString;
@protocol BLSBacklightStateObserving, BLSXPCBacklightProxyHostInterface, BSInvalidatable, BLSBacklightProxy, BLSXPCBacklightProxyClientInterface;

#import <Foundation/Foundation.h>


@interface BLSHXPCBacklightProxyHost : NSObject <BLSBacklightStateObserving, BLSXPCBacklightProxyHostInterface, BSInvalidatable>

 {
    id<BLSBacklightProxy> *_localBacklightProxy;
    id<BLSXPCBacklightProxyClientInterface> *_observingClient;
    RBSProcessMonitor *_processMonitor;
    os_unfair_lock_s _lock;
    int _clientPid;
    BOOL _clientIsTaskScheduled;
    BOOL _stateIsStale;
    BOOL _valid;
    unsigned int _entitlements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAlwaysOnEnabled;
-(BOOL)isTransitioning;
-(id)getBacklightState;
-(id)getFlipbookState;
-(id)initWithLocalBacklightProxy:(id)arg0 peer:(id)arg1 ;
-(id)performChangeRequest:(id)arg0 ;
-(void)backlight:(id)arg0 didChangeAlwaysOnEnabled:(BOOL)arg1 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)beginObservation;
-(void)dealloc;
-(void)endObservation;
-(void)invalidate;


@end


#endif