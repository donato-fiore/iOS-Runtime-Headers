// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHBACKLIGHTIDLEPROVIDER_H
#define BLSHBACKLIGHTIDLEPROVIDER_H

@class NSString;
@protocol BLSHBacklightHostObserving, BLSHUserIdleProvidingDelegate, BSInvalidatable, BLSHUserIdleProviding, BLSHBacklightHostObservable><BLSBacklightChangeRequestable, BLSHBacklightIdleProviderDelegate;

#import <Foundation/Foundation.h>


@interface BLSHBacklightIdleProvider : NSObject <BLSHBacklightHostObserving, BLSHUserIdleProvidingDelegate, BSInvalidatable>

 {
    id<BLSHUserIdleProviding> *_lock_idleProvider;
    id<BLSHBacklightHostObservable><BLSBacklightChangeRequestable> *_backlightHost;
    os_unfair_lock_s _lock;
    CGFloat _lock_idleTimeout;
    CGFloat _lock_nonInteractiveIdleTimeout;
    NSInteger _lock_previousBacklightState;
    BOOL _lock_started;
    BOOL _lock_active;
    BOOL _lock_suspended;
    BOOL _lock_suppressed;
    BOOL _lock_idle;
    BOOL _lock_pendingIdleInactiveRequest;
    BOOL _lock_didStartTransitionToNewState;
    BOOL _lock_userActivityOccured;
    BOOL _lock_invalidated;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLSHBacklightIdleProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property (nonatomic) CGFloat idleTimeout;
@property (nonatomic) CGFloat nonInteractiveIdleTimeout;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=hasUserActivityOccured) BOOL userActivityOccured;


+(id)createSharedProviderWithLocalAssertionService:(id)arg0 ;
+(id)sharedProvider;
-(id)initWithLocalAssertionService:(id)arg0 idleProvider:(id)arg1 backlightHost:(id)arg2 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)backlightHost:(id)arg0 willTransitionToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)dealloc;
-(void)idleProviderDidIdle:(id)arg0 ;
-(void)idleProviderDidUnidle:(id)arg0 ;
-(void)invalidate;
-(void)reset;
-(void)setSuspended:(BOOL)arg0 ;
-(void)signalUserActivityOccurred;
-(void)start;


@end


#endif