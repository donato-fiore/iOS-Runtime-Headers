// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASREMOTEREQUESTMANAGER_H
#define SASREMOTEREQUESTMANAGER_H

@class INAppIntentDeliverer, AFRequestInfo, CMPocketStateManager, AFRemoteRequestWatcher;

#import <Foundation/Foundation.h>


@interface SASRemoteRequestManager : NSObject

@property (retain, nonatomic) INAppIntentDeliverer *currentAppIntentDeliverer; // ivar: _currentAppIntentDeliverer
@property (nonatomic) NSInteger currentPocketState; // ivar: _currentPocketState
@property (nonatomic) NSUInteger currentVoiceTriggerRestriction; // ivar: _currentVoiceTriggerRestriction
@property (nonatomic) BOOL hasPendingVoiceTriggerActivation; // ivar: _hasPendingVoiceTriggerActivation
@property (retain, nonatomic) AFRequestInfo *pendingVoiceTriggerActivationInfo; // ivar: _pendingVoiceTriggerActivationInfo
@property (nonatomic) NSUInteger pendingVoiceTriggerRestrictionCount; // ivar: _pendingVoiceTriggerRestrictionCount
@property (retain, nonatomic) CMPocketStateManager *pocketStateManager; // ivar: _pocketStateManager
@property (retain, nonatomic) AFRemoteRequestWatcher *remoteRequestWatcher; // ivar: _remoteRequestWatcher


+(id)manager;
+(id)new;
-(BOOL)_requestWatcherVoiceActivationEnabled;
-(NSUInteger)_dismissalReasonForDeactivationReason:(NSInteger)arg0 ;
-(id)_init;
-(id)init;
-(void)_handleNewRemoteRequestWithInfo:(id)arg0 ;
-(void)_handlePendingVoiceTriggerActivationsWithInfo:(id)arg0 ;
-(void)_handleRemotePrewarmWithInfo:(id)arg0 ;
-(void)_handleRemoteRequestDismissalWithReason:(NSInteger)arg0 options:(NSUInteger)arg1 analyticsContext:(id)arg2 ;
-(void)_handleRequestWatcherVoiceTriggerRequestWithInfo:(id)arg0 ;
-(void)_processPendingVoiceTriggerActivationsWithInfo:(id)arg0 delay:(CGFloat)arg1 ;
-(void)_startFetchingPocketStateUpdates;


@end


#endif