// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPRESENTATIONMANAGER_H
#define SASPRESENTATIONMANAGER_H

@class NSMutableDictionary;
@protocol SASPresentationManagerDelegate;

#import <Foundation/Foundation.h>


@interface SASPresentationManager : NSObject {
    BOOL _lastReportedShouldRejectNewActivations;
    id<SASPresentationManagerDelegate> *_presentationManagerDelegate;
}


@property (retain, nonatomic) NSMutableDictionary *presentations; // ivar: _presentations


+(BOOL)_canTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
+(BOOL)_canTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 presentationIdentifier:(NSInteger)arg2 ;
+(BOOL)_canTransitionToActiveFromState:(NSInteger)arg0 presentationIdentifier:(NSInteger)arg1 ;
+(BOOL)_canTransitionToHeatedFromState:(NSInteger)arg0 ;
+(BOOL)_canTransitionToOffFromState:(NSInteger)arg0 ;
+(BOOL)_canTransitionToStartingFromState:(NSInteger)arg0 ;
+(BOOL)_canTransitionToStoppingFromState:(NSInteger)arg0 ;
+(BOOL)_shouldKeepPingingForRequestState:(NSInteger)arg0 ;
-(BOOL)_shouldRejectNewActivations;
-(BOOL)activePresentationsAreIdleAndQuiet;
-(NSInteger)nextPresentationToActivate;
-(NSInteger)requestState;
-(id)init;
-(void)_forceAllPresentationsOff;
-(void)_notifyDelegateOfShouldRejectNewActivationsChangeIfNecessary;
// -(void)_sendBlock:(id)arg0 toPresentationWithPresentationIdentifier:(unk)arg1  ;
-(void)_sendBlockToActivePresentations:(id)arg0 ;
-(void)_sendBlockToStartingPresentations:(id)arg0 ;
-(void)_sendBlockToStoppingPresentations:(id)arg0 ;
-(void)_setupPingTimerForPresentationIdentifier:(NSInteger)arg0 ;
-(void)_teardownPingTimerForPresentationIdentifier:(NSInteger)arg0 ;
-(void)_transitionPresentationWithPresentationIdentifier:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)_waitForPongFromPresentationWithPresentationIdentifier:(NSInteger)arg0 ;
-(void)activeAndStartingPresentations_updateCurrentLockState:(NSUInteger)arg0 ;
-(void)activePresentations_bulletinManagerDidChangeBulletins;
-(void)activePresentations_deviceWonMyriadElection;
-(void)activePresentations_handleRequestWithOptions:(id)arg0 ;
-(void)cancelAllPreheatedPresentations;
-(void)pongWithPresentationIdentifier:(NSInteger)arg0 ;
-(void)preheatNextPresentationToActivate;
-(void)presentationRequestedWithPresentationIdentifier:(NSInteger)arg0 presentationOptions:(id)arg1 requestOptions:(id)arg2 ;
-(void)presentationWithPresentationIdentifier:(NSInteger)arg0 activationDeterminedShouldDeferWake:(BOOL)arg1 ;
-(void)presentationWithPresentationIdentifierBecameActive:(NSInteger)arg0 ;
-(void)presentationWithPresentationIdentifierBecameOff:(NSInteger)arg0 ;
-(void)presentationWithPresentationIdentifierBeganStarting:(NSInteger)arg0 ;
-(void)presentationWithPresentationIdentifierBeganStopping:(NSInteger)arg0 ;
-(void)presentationWithPresentationIdentifierWakeScreenAfterActivation:(NSInteger)arg0 reason:(id)arg1 ;
-(void)registerSiriPresentation:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(void)sendButtonEventCompletionToPresentations:(id)arg0 ;
-(void)setPresentationManagerDelegate:(id)arg0 ;
-(void)startingAndActiveAndStoppingPresentations_presentationDismissalRequestedWithOptions:(id)arg0 ;
-(void)startingPresentations_cancelPendingActivationWithReason:(NSUInteger)arg0 ;
-(void)unregisterSiriPresentationWithIdentifier:(NSInteger)arg0 ;


@end


#endif