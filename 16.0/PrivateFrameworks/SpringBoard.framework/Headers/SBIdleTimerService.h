// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBIDLETIMERSERVICE_H
#define SBIDLETIMERSERVICE_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol ITIdleTimerStateServiceDelegate, SBIdleTimerIdleEventHandler, BSInvalidatable, SBIdleTimerServiceDelegate;

#import <Foundation/Foundation.h>

#import "SBIdleTimerAggregateClientConfiguration.h"

@interface SBIdleTimerService : NSObject <ITIdleTimerStateServiceDelegate, SBIdleTimerIdleEventHandler>

 {
    os_unfair_lock_s _accessLock;
    NSMutableArray *_access_idleExpirationHandlers;
    NSMutableArray *_access_idleWarnHandlers;
    NSMutableArray *_access_idleUserAttentionResetHandlers;
    NSMutableDictionary *_disableTimerConfigurations;
    NSMutableDictionary *_minExpirationConfigurations;
    NSMutableDictionary *_maxEpirationConfigurations;
    id<BSInvalidatable> *_stateCaptureAssertion;
}


@property (readonly, nonatomic) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration; // ivar: _aggregateClientConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBIdleTimerServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_sharedIdleTimerStateServiceCreatingIfNeeded:(BOOL)arg0 ;
+(id)_sharedIdleTimerStateServiceIfExists;
+(id)sharedInstance;
+(void)registerServices;
-(BOOL)handleIdleTimerDidExpire;
-(BOOL)handleIdleTimerDidWarn;
-(BOOL)handleIdleTimerUserAttentionDidReset;
-(id)_acquireIdleTimerDisableAssertionForReason:(id)arg0 ;
-(id)_init;
-(id)_stateCaptureDescription;
-(id)acquireIdleTimerAssertionWithConfiguration:(id)arg0 fromClient:(id)arg1 forReason:(id)arg2 ;
-(void)_addConfigurationInfo:(id)arg0 toSortedArray:(id)arg1 ;
-(void)_addStateCaptureHandlers;
-(void)_aggregateConfigurations;
-(void)_removeAssertionsForReason:(id)arg0 ;
-(void)_removeConfigurationInfoForReason:(id)arg0 fromArray:(id)arg1 ;
-(void)dealloc;


@end


#endif