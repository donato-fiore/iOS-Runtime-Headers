// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIBIOMETRICRESOURCE_H
#define SBUIBIOMETRICRESOURCE_H

@class NSHashTable, NSMutableOrderedSet, NSString, SBFMobileKeyBag, MCProfileConnection, SBFCredentialSet;
@protocol BSDescriptionProviding, SBFMobileKeyBagObserver, _SBUIBiometricKitInterfaceDelegate, SBUIBiometricResource, SBUIBiometricAuthenticationPolicy;

#import <Foundation/Foundation.h>

#import "_SBUIBiometricKitInterface.h"

@interface SBUIBiometricResource : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver, _SBUIBiometricKitInterfaceDelegate, SBUIBiometricResource>

 {
    id<SBUIBiometricAuthenticationPolicy> *_authPolicy;
    NSUInteger _lastEvent;
    BOOL _hasMesaHardware;
    BOOL _hasPoseidonMesaTypeHardware;
    BOOL _hasPearlHardware;
    BOOL _isPresenceDetectionAllowed;
    BOOL _isForegroundFingerDetectionEnabled;
    BOOL _isBackgroundFingerDetectionEnabled;
    BOOL _isFingerDetectionEnabledThroughHIDChannel;
    BOOL _isFaceDetectionEnabled;
    BOOL _screenIsOn;
    BOOL _isAuthenticated;
    BOOL _shouldSendFingerOffNotification;
    BOOL _shouldSendFaceOutOfViewNotification;
    BOOL _wasMatchingBeforeKeybagStateChangeOccurred;
    NSHashTable *_observers;
    NSMutableOrderedSet *_matchAssertions;
    NSMutableOrderedSet *_normalFingerDetectAssertions;
    NSMutableOrderedSet *_HIDEventsOnlyFingerDetectAssertions;
    NSMutableOrderedSet *_faceDetectAssertions;
    NSMutableOrderedSet *_simulatedLockoutAssertions;
    Class _bkMatchPearlOperationClass;
}


@property (retain, nonatomic) NSObject<SBUIBiometricAuthenticationPolicy> *authenticationPolicy; // ivar: _authenticationPolicy
@property (retain, nonatomic, getter=_biometricKitInterface, setter=_setBiometricKitInterface:) _SBUIBiometricKitInterface *biometricKitInterface; // ivar: _biometricInterface
@property (readonly, nonatomic) NSUInteger biometricLockoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFingerDetectEnabled) BOOL fingerDetectEnabled;
@property (readonly, nonatomic, getter=isFingerOn) BOOL fingerOn;
@property (readonly, nonatomic) BOOL hasBiometricAuthenticationCapabilityEnabled;
@property (readonly, nonatomic) BOOL hasEnrolledIdentities;
@property (readonly, nonatomic) BOOL hasMesaSupport;
@property (readonly, nonatomic) BOOL hasPearlSupport;
@property (readonly, nonatomic) BOOL hasPoseidonSupport;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_keybagInterface, setter=_setKeybagInterface:) SBFMobileKeyBag *keybagInterface; // ivar: _keybag
@property (readonly, nonatomic, getter=isMatchingAllowed) BOOL matchingAllowed; // ivar: _isMatchingAllowed
@property (readonly, nonatomic, getter=isMatchingEnabled) BOOL matchingEnabled; // ivar: _isMatchingEnabled
@property (readonly, nonatomic, getter=isPearlDetectEnabled) BOOL pearlDetectEnabled;
@property (retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // ivar: _profileConnection
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFCredentialSet *unlockCredentialSet; // ivar: _unlockCredentialSet


+(id)sharedInstance;
-(id)acquireFaceDetectionWantedAssertionForReason:(id)arg0 ;
-(id)acquireFingerDetectionWantedAssertionForReason:(id)arg0 ;
-(id)acquireFingerDetectionWantedAssertionForReason:(id)arg0 HIDEventsOnly:(BOOL)arg1 ;
-(id)acquireMatchingAssertionWithMode:(NSUInteger)arg0 reason:(id)arg1 ;
-(id)acquireSimulatedLockoutAssertionWithLockoutState:(NSUInteger)arg0 forReason:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithBiometricKitInterface:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_activateFaceDetectAssertion:(id)arg0 ;
-(void)_activateFingerDetectAssertion:(id)arg0 ;
-(void)_activateMatchAssertion:(id)arg0 ;
-(void)_addFaceDetectionWantedAssertion:(id)arg0 ;
-(void)_addFingerDetectionWantedAssertion:(id)arg0 HIDEventsOnly:(BOOL)arg1 ;
-(void)_addMatchingAssertion:(id)arg0 ;
-(void)_addSimulatedLockoutAssertion:(id)arg0 ;
-(void)_clearFinishedOperationsIfNeededForAssertion:(id)arg0 ;
-(void)_deactivateAllPearlAssertions;
-(void)_deactivateAssertion:(id)arg0 ;
-(void)_deviceWillWake;
-(void)_forceBioLockout;
-(void)_matchingAllowedStateMayHaveChangedForReason:(id)arg0 ;
-(void)_notifyObserversOfEvent:(NSUInteger)arg0 ;
-(void)_presenceDetectAllowedStateMayHaveChangedForReason:(id)arg0 ;
-(void)_profileSettingsChanged:(id)arg0 ;
-(void)_reallyResumeMatchingForAssertion:(id)arg0 advisory:(BOOL)arg1 ;
-(void)_reallySetAuthenticated:(BOOL)arg0 keybagState:(id)arg1 ;
-(void)_reevaluateFaceDetection;
-(void)_reevaluateFingerDetection;
-(void)_reevaluateMatching;
-(void)_removeFaceDetectionWantedAssertion:(id)arg0 ;
-(void)_removeFingerDetectionWantedAssertion:(id)arg0 HIDEventsOnly:(BOOL)arg1 ;
-(void)_removeMatchingAssertion:(id)arg0 ;
-(void)_removeSimulatedLockoutAssertion:(id)arg0 ;
-(void)_setAuthenticated:(BOOL)arg0 ;
-(void)_updateHandlersForEvent:(NSUInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)biometricKitInterface:(id)arg0 enrolledIdentitiesDidChange:(BOOL)arg1 ;
-(void)biometricKitInterface:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)keybag:(id)arg0 extendedStateDidChange:(id)arg1 ;
-(void)noteScreenDidTurnOff;
-(void)noteScreenWillTurnOff;
-(void)noteScreenWillTurnOn;
-(void)refreshMatchMode;
-(void)removeObserver:(id)arg0 ;
-(void)resumeMatchingAdvisory:(BOOL)arg0 ;
-(void)resumeMatchingForAssertion:(id)arg0 advisory:(BOOL)arg1 ;


@end


#endif