// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUSERNOTIFICATIONALERT_H
#define SBUSERNOTIFICATIONALERT_H

@class SBAlertItem, NSString, NSTimer, NSArray, SBUISound, BKSProcessAssertion, NSMapTable, UIAlertControllerVisualStyle, SBSUserNotificationImageDefinition, NSURL, SBSUserNotificationSystemApertureContentDefinition, NSDictionary;
@protocol UITextFieldDelegate, OS_dispatch_source, BSInvalidatable;


#import "_SBSUICFUserNotificationContentHostViewController.h"
#import "_SBLegacyRemoteAlertContentHostViewController.h"

@interface SBUserNotificationAlert : SBAlertItem <UITextFieldDelegate>

 {
    NSString *_alertSource;
    int _originatingPID;
    unsigned int _replyPort;
    NSObject<OS_dispatch_source> *_portWatcher;
    NSObject<OS_dispatch_source> *_expirationTimer;
    BOOL _sentResponse;
    BOOL _cleanedUp;
    int _token;
    int _timeout;
    NSUInteger _requestFlags;
    CGFloat _soundRepeatDuration;
    NSTimer *_soundStopTimer;
    CGFloat _creationTime;
    int _defaultButtonTag;
    int _unlockActionButtonTag;
    unsigned int _replyFlags;
    _SBSUICFUserNotificationContentHostViewController *_extensionContentViewController;
    _SBLegacyRemoteAlertContentHostViewController *_viewServiceContentViewController;
    NSArray *_textFieldDefinitions;
    NSArray *_customButtonDefinitions;
    NSInteger _defaultButtonActionStyle;
    NSInteger _alternateButtonActionStyle;
    NSInteger _otherButtonActionStyle;
    BOOL _allowedInLoginWindow;
    BOOL _canceled;
    BOOL _isActivated;
    BOOL _aboveLock;
    BOOL _displayActionButtonOnLockScreen;
    BOOL _dismissOnLock;
    BOOL _dontDismissOnUnlock;
    BOOL _behavesSuperModally;
    BOOL _allowMenuButtonDismissal;
    BOOL _wakeDisplay;
    BOOL _forcesModalAlertAppearance;
    BOOL _dismissesOverlaysOnLockScreen;
    BOOL _disableIdleSleepWhileVisible;
    BOOL _hideOnClonedDisplay;
    BOOL _configuredLocked;
    BOOL _configuredNeedsPasscode;
    BOOL _defaultResponseAppLaunchWaitingForPasscode;
    BOOL _deactivatingForPresentationUpdate;
    SBUISound *_sound;
    BKSProcessAssertion *_processAssertion;
    BOOL _allowLockscreenDismissal;
    id<BSInvalidatable> *_idleTimerDisableAssertion;
    NSMapTable *_imagesByDefinition;
    UIAlertControllerVisualStyle *_visualStyle;
}


@property (retain) NSString *alertHeader; // ivar: _alertHeader
@property (retain) NSString *alertMessage; // ivar: _alertMessage
@property (retain) NSString *alertMessageDelimiter; // ivar: _alertMessageDelimiter
@property (retain) NSString *alternateButtonTitle; // ivar: _alternateButtonTitle
@property (retain) SBSUserNotificationImageDefinition *attachmentImageDefinition; // ivar: _attachmentImageDefinition
@property (retain) id *autocapitalizationTypes; // ivar: _autocapitalizationTypes
@property (retain) id *autocorrectionTypes; // ivar: _autocorrectionTypes
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *defaultButtonTitle; // ivar: _defaultButtonTitle
@property (retain) NSString *defaultResponseLaunchBundleID; // ivar: _defaultResponseLaunchBundleID
@property (retain) NSURL *defaultResponseLaunchURL; // ivar: _defaultResponseLaunchURL
@property (readonly, copy) NSString *description;
@property (retain) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly) NSUInteger hash;
@property (retain) SBSUserNotificationImageDefinition *headerImageDefinition; // ivar: _headerImageDefinition
@property (retain) SBSUserNotificationImageDefinition *iconImageDefinition; // ivar: _iconImageDefinition
@property (retain) id *keyboardTypes; // ivar: _keyboardTypes
@property (retain) NSString *lockScreenAlertHeader; // ivar: _lockScreenAlertHeader
@property (retain) NSString *lockScreenAlertMessage; // ivar: _lockScreenAlertMessage
@property (retain) NSString *lockScreenAlertMessageDelimiter; // ivar: _lockScreenAlertMessageDelimiter
@property (retain) NSString *otherButtonTitle; // ivar: _otherButtonTitle
@property BOOL prefersSystemAperturePresentation; // ivar: _prefersSystemAperturePresentation
@property (retain) NSString *remoteServiceBundleIdentifier; // ivar: _remoteServiceBundleIdentifier
@property (retain) NSString *remoteViewControllerClassName; // ivar: _remoteViewControllerClassName
@property (retain) NSString *soundAlertTopic; // ivar: _soundAlertTopic
@property NSInteger soundAlertType; // ivar: _soundAlertType
@property unsigned int soundID; // ivar: _soundID
@property unsigned int soundIDBehavior; // ivar: _soundIDBehavior
@property (retain) NSString *soundPath; // ivar: _soundPath
@property (readonly) Class superclass;
@property (retain) SBSUserNotificationSystemApertureContentDefinition *systemApertureContentDefinition; // ivar: _systemApertureContentDefinition
@property (retain) id *textFieldTitles; // ivar: _textFieldTitles
@property (retain) id *textFieldValues; // ivar: _textFieldValues
@property (retain) NSDictionary *vibrationPattern; // ivar: _vibrationPattern


-(BOOL)_displayActionButtonOnLockScreen;
-(BOOL)allowInLoginWindow;
-(BOOL)allowLockScreenDismissal;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)behavesSuperModally;
-(BOOL)dismissOnLock;
-(BOOL)dismissesOverlaysOnLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)hideOnClonedDisplay;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)shouldShowInLockScreen;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)wakeDisplay;
-(NSInteger)_uiAlertActionLayoutDirectionFromSBUserNotificationButtonLayoutDirection:(unsigned int)arg0 ;
-(NSInteger)_uiAlertActionStyleFromSBUserNotificationButtonPresentationStyle:(int)arg0 ;
-(id)_attachmentImage;
-(id)_createSystemApertureElement;
-(id)_headerImage;
-(id)_imageDefinitionForPath:(id)arg0 catalogPath:(id)arg1 catalogImageKey:(id)arg2 ;
-(id)_imageForDefinition:(id)arg0 ;
-(id)_parseAssetDefinition:(id)arg0 ;
-(id)_parseCustomButtonDefinitions:(id)arg0 locBundle:(id)arg1 ;
-(id)_parseLegacyTextFieldDefinitions:(id)arg0 locBundle:(id)arg1 ;
-(id)_parseSystemApertureContentDefinition:(id)arg0 ;
-(id)_parseTextFieldDefinitions:(id)arg0 locBundle:(id)arg1 ;
-(id)_prepareNewAlertControllerWithLockedState:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(id)_publicDescription;
-(id)_safeLocalizedValue:(id)arg0 withBundle:(id)arg1 ;
-(id)clientIdentifier;
-(id)elementIdentifier;
-(id)iconImage;
-(id)initWithMessage:(id)arg0 replyPort:(unsigned int)arg1 requestFlags:(int)arg2 auditToken:(id)arg3 ;
-(id)parseVisualStyleForMessage:(id)arg0 ;
-(id)sound;
-(id)visualStyleForAlertControllerStyle:(NSInteger)arg0 traitCollection:(id)arg1 descriptor:(id)arg2 ;
-(int)token;
-(void)_activateApplication:(id)arg0 withURL:(id)arg1 ;
-(void)_cleanup;
-(void)_cleanupCustomContentViewControllers;
-(void)_clearRemoteViewControllerIfPresent;
-(void)_noteVolumeOrLockPressed;
-(void)_sendResponseAndCleanUp:(int)arg0 ;
-(void)_sendResponseAndCleanUp:(int)arg0 customButtonResponse:(int)arg1 ;
-(void)_setActivated:(BOOL)arg0 ;
-(void)cancel;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)dealloc;
-(void)didDeactivateForReason:(int)arg0 ;
-(void)didFailToActivate;
-(void)dismissIfNecessaryWithResponse:(int)arg0 ;
-(void)dismissIfNecessaryWithResponse:(int)arg0 customButtonResponse:(int)arg1 ;
-(void)doCleanupAfterDeactivationAnimation;
-(void)performUnlockAction;
-(void)presentationStateDidChangeFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
-(void)updateWithMessage:(id)arg0 requestFlags:(int)arg1 ;
-(void)willActivate;
-(void)willDeactivateForReason:(int)arg0 ;


@end


#endif