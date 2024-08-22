// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTPRIVACYCONTROLLER_H
#define PXCONTENTPRIVACYCONTROLLER_H

@class NSMutableArray, NSTimer, NSNumber, LAContext, NSString, NSMutableSet;
@protocol PXChangeObserver, PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver, PXDisplayCollection;


#import "PXObservable.h"
#import "PXSystemAuthenticationTypeObserver.h"

@interface PXContentPrivacyController : PXObservable <PXChangeObserver, PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver>



@property (retain, nonatomic) NSObject<PXDisplayCollection> *assetCollectionToObserve; // ivar: _assetCollectionToObserve
@property (copy, nonatomic) id *authChallengeHandlerForTesting; // ivar: _authChallengeHandlerForTesting
@property (nonatomic) BOOL authenticationAttemptDidFailOrWasCancelled; // ivar: _authenticationAttemptDidFailOrWasCancelled
@property (readonly, nonatomic) NSMutableArray *authenticationStack; // ivar: _authenticationStack
@property (readonly, nonatomic) NSInteger authenticationType; // ivar: _authenticationType
@property (readonly, nonatomic) PXSystemAuthenticationTypeObserver *authenticationTypeObserver; // ivar: _authenticationTypeObserver
@property (nonatomic) NSUInteger autolockReason; // ivar: _autolockReason
@property (retain, nonatomic) NSTimer *autolockTimer; // ivar: _autolockTimer
@property (nonatomic) NSUInteger cachedAuthenticationStackCount; // ivar: _cachedAuthenticationStackCount
@property (readonly, nonatomic, getter=isContentPrivacyEnabled) BOOL contentPrivacyEnabled; // ivar: _contentPrivacyEnabled
@property (retain, nonatomic) NSNumber *contentPrivacyEnabledNumberForTesting; // ivar: _contentPrivacyEnabledNumberForTesting
@property (retain, nonatomic) LAContext *currentAuthenticationContext; // ivar: _currentAuthenticationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDelayedLockScheduled) BOOL delayedLockScheduled;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasPerformedAuthenticationInStack; // ivar: _hasPerformedAuthenticationInStack
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (readonly, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (readonly, nonatomic, getter=isPerformingAuthentication) BOOL performingAuthentication;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *testingOverride_authenticationType; // ivar: _testingOverride_authenticationType
@property (retain, nonatomic) NSNumber *testingOverride_autolockTimeout; // ivar: _testingOverride_autolockTimeout
@property (retain, nonatomic) NSNumber *testingOverride_shouldLockAfterDelayWhenLeavingViewHierarchy; // ivar: _testingOverride_shouldLockAfterDelayWhenLeavingViewHierarchy
@property (retain, nonatomic) NSNumber *testingOverride_shouldOnlyPerformAutomaticAuthenticationOnce; // ivar: _testingOverride_shouldOnlyPerformAutomaticAuthenticationOnce
@property (retain, nonatomic) NSNumber *testingOverride_shouldPerformAuthenticationOnAppearing; // ivar: _testingOverride_shouldPerformAuthenticationOnAppearing
@property (readonly, nonatomic) BOOL willPerformAuthenticationAutomatically; // ivar: _willPerformAuthenticationAutomatically


+(id)privacyControllerForCollection:(id)arg0 ;
+(void)tearDownPrivacyControllersIfNeeded;
-(BOOL)_isContentPrivacyPrefEnabled;
-(BOOL)shouldLockAfterDelayWhenLeavingViewHierarchy;
-(BOOL)shouldOnlyPerformAutomaticAuthenticationOnceInStack;
-(BOOL)shouldPerformAuthenticationUponAppearing;
-(CGFloat)autolockTimeout;
-(NSInteger)_calculateAuthenticationTypeWithForcedUpdate:(BOOL)arg0 ;
-(NSInteger)_currentlyAvailableBiometryType;
-(id)initWithAssetCollectionToObserve:(id)arg0 logIdentifier:(id)arg1 ;
-(id)initWithContentPrivacyEnabledForTesting:(id)arg0 availableAuthenticationTypeForTesting:(id)arg1 assetCollectionToObserveForTesting:(id)arg2 ;
-(id)initWithLogIdentifier:(id)arg0 ;
-(void)_beginObservingApplicationStateChangesAndSystemEvents;
-(void)_beginObservingAssetCollectionChanges;
-(void)_beginObservingContentPrivacyPrefs;
-(void)_cancelAuthentication;
-(void)_cancelDelayedLockIfNeededWithReason:(id)arg0 ;
// -(void)_finishAuthenticationChallengeWithCompletionHandler:(id)arg0 success:(unk)arg1 error:(BOOL)arg2  ;
-(void)_lockOrCancelAuthenticationIfNeeded;
-(void)_lockWithReasonForLogging:(id)arg0 ;
-(void)_logCurrentAuthenticationStack;
-(void)_performDelayedAuthenticationTypeUpdate;
-(void)_performUserAuthenticationIfNeededAfterForegrounding;
-(void)_performUserAuthenticationWithTitle:(id)arg0 passcodeTitle:(id)arg1 passcodeSubtitle:(id)arg2 reason:(id)arg3 completion:(id)arg4 ;
-(void)_preferencesDidChange;
-(void)_startAutolockTimerForReason:(NSUInteger)arg0 resetIfActive:(BOOL)arg1 ;
-(void)_stopAutolockTimer;
-(void)_stopObservingApplicationStateChanges;
-(void)_stopObservingAssetCollectionChanges;
-(void)_stopObservingContentPrivacyPrefs;
-(void)_updateAuthenticationType;
-(void)_updateCachedAuthenticationStackCount;
-(void)_updateContentPrivacyEnabled;
-(void)_updateWillPerformAuthenticationAutomatically;
-(void)addContextToStack:(id)arg0 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)cancelAuthentication;
-(void)cancelDelayedLockIfNeeded;
-(void)clearAuthenticationStack;
-(void)commonInitWithLogIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)hostApplicationDidBecomeActive;
-(void)hostApplicationWillResignActive;
-(void)lockImmediately;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performUserAuthenticationIfNeededFromContext:(id)arg0 ;
-(void)performUserAuthenticationIfNeededWithLocalizedReason:(id)arg0 completion:(id)arg1 ;
-(void)performUserAuthenticationIfNeededWithTitle:(id)arg0 passcodeTitle:(id)arg1 passcodeSubtitle:(id)arg2 completion:(id)arg3 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)removeContextFromStack:(id)arg0 ;
-(void)scheduleAuthenticationStackCountUpdate;
-(void)scheduleDelayedLock;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)unlock;
-(void)updateAuthenticationTypeImmediately;
-(void)viewDidAppearForAuthenticationContext:(id)arg0 ;
-(void)viewDidDisappearForAuthenticationContext:(id)arg0 withNavigationState:(NSUInteger)arg1 ;


@end


#endif