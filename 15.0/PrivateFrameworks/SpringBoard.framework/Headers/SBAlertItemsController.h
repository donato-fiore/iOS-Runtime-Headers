// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBALERTITEMSCONTROLLER_H
#define SBALERTITEMSCONTROLLER_H

@class NSMutableSet, NSMutableOrderedSet, NSMapTable, NSHashTable, NSString;
@protocol BSDescriptionProviding, BSInvalidatable, SBAlertItemPresenter><SBLockScreenActionProvider, SBAlertItemPresenter;

#import <Foundation/Foundation.h>

#import "SBUserSessionController.h"
#import "SBAlertItemsObjectQueue.h"
#import "SBModalAlertPresenter.h"

@interface SBAlertItemsController : NSObject <BSDescriptionProviding>

 {
    SBUserSessionController *_userSessionController;
    SBAlertItemsObjectQueue *_alertItemsQueue;
    SBAlertItemsObjectQueue *_superModalItemsQueue;
    NSMutableSet *_pendedAlertsToReenqueuePostDismissal;
    NSMutableOrderedSet *_alertItemPresentations;
    NSMutableOrderedSet *_superModalAlertItemPresentations;
    NSMutableSet *_activePresenters;
    NSMutableSet *_forceAlertsToPendReasons;
    NSMapTable *_suppressionAssertionReasons;
    NSHashTable *_observers;
    BOOL _inUILockedMode;
    BOOL _isProcessingQueue;
    BOOL _delayProcessingQueue;
    BOOL _suppressAlertsForKeynote;
    id<BSInvalidatable> *_stateCaptureBlock;
    id<BSInvalidatable> *_systemModalAlertVisibleAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBAlertItemPresenter><SBLockScreenActionProvider> *lockScreenModalAlertItemPresenter; // ivar: _lockScreenModalAlertItemPresenter
@property (retain, nonatomic) NSObject<SBAlertItemPresenter> *lockScreenNotificationsAlertItemPresenter; // ivar: _lockScreenNotificationsAlertItemPresenter
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_systemModalAlertPresenter, setter=_setSystemModalAlertPresenter:) SBModalAlertPresenter *systemModalAlertPresenter; // ivar: _systemModalAlertPresenter
@property (retain, nonatomic) NSObject<SBAlertItemPresenter> *unlockedAlertItemPresenter; // ivar: _unlockedAlertItemPresenter


+(id)sharedInstance;
-(BOOL)_hasActivePresentationsThatPresentModally;
-(BOOL)_hasPresentationForPresenter:(id)arg0 ;
-(BOOL)_hasVisibleModalAlertOfType:(NSUInteger)arg0 ;
-(BOOL)_isAlertItemPresentable:(id)arg0 outReasonsNotPresentable:(*id)arg1 ;
-(BOOL)_shouldPendAlertItem:(id)arg0 outReasonsPended:(*id)arg1 ;
-(BOOL)canDeactivateAlertForMenuClickOrSystemGesture;
-(BOOL)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(BOOL)arg0 ;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg0 ;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg0 reason:(int)arg1 ;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg0 reason:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasAlertOfClass:(Class)arg0 ;
-(BOOL)hasAlerts;
-(BOOL)hasLockScreenModalAlert;
-(BOOL)hasVisibleAlert;
-(BOOL)hasVisibleModalAlert;
-(BOOL)hasVisibleSuperModalAlert;
-(id)_activePresenterForAlertItem:(id)arg0 ;
-(id)_initWithUserSessionController:(id)arg0 ;
-(id)_presentationForAlertItem:(id)arg0 ;
-(id)_presentedAlertItemForPresenter:(id)arg0 ;
-(id)_presenterForAlertItem:(id)arg0 ;
-(id)alertItemsOfClass:(Class)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)visibleAlertItem;
-(void)_activeCallStateDidChange:(id)arg0 ;
-(void)_buddyDidExit;
-(void)_clearAllQueuedAlertItems;
-(void)_deactivateAlertItem:(id)arg0 reason:(int)arg1 animated:(BOOL)arg2 ;
-(void)_deactivateAlertItem:(id)arg0 reason:(int)arg1 animated:(BOOL)arg2 alertDismissCompletion:(id)arg3 ;
-(void)_dismissAlertItem:(id)arg0 fromPresenter:(id)arg1 forReason:(int)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)_enumeratePresentationsWithType:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)_enumerateWithDirection:(NSUInteger)arg0 presentationsWithType:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)_notifyObservers:(id)arg0 ;
// -(void)_performBatchActions:(id)arg0 animated:(unk)arg1 processQueue:(BOOL)arg2  ;
-(void)_presentAlertItem:(id)arg0 withPresenter:(id)arg1 animated:(BOOL)arg2 ;
-(void)_processAlertItemQueuesAnimated:(BOOL)arg0 ;
-(void)_processAlertItemsFromQueue:(id)arg0 animated:(BOOL)arg1 ;
-(void)_reallyDeactivateAlertItem:(id)arg0 forReason:(int)arg1 deactivateBlock:(id)arg2 ;
-(void)_updateActiveDestinations;
-(void)activateAlertItem:(id)arg0 ;
-(void)activateAlertItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)activatePendedAlertsIfNecessary;
-(void)addObserver:(id)arg0 ;
-(void)captureSuppressionAssertion:(id)arg0 reason:(id)arg1 ;
-(void)convertLockedAlertsToUnlockedAlerts;
-(void)convertUnlockedAlertsToLockedAlerts;
-(void)deactivateAlertItem:(id)arg0 ;
-(void)deactivateAlertItem:(id)arg0 reason:(int)arg1 ;
-(void)deactivateAlertItem:(id)arg0 reason:(int)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)moveActiveUnlockedAlertsToPendingWithAnimation:(BOOL)arg0 completion:(id)arg1 ;
-(void)noteVolumeOrLockPressedOverLockedAlerts;
-(void)removeObserver:(id)arg0 ;
-(void)setForceAlertsToPend:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setInUILockedMode:(BOOL)arg0 ;


@end


#endif