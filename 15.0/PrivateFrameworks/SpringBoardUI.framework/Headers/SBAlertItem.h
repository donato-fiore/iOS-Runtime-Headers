// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBALERTITEM_H
#define SBALERTITEM_H

@class UIImage, NSArray, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "_SBAlertController.h"

@interface SBAlertItem : NSObject <BSDescriptionProviding>

 {
    _SBAlertController *_alertController;
    BOOL _didEverActivate;
    BOOL _didEverDeactivate;
    BOOL _didPlayPresentationSound;
}


@property (retain, nonatomic, setter=_setAttachmentImage:) UIImage *_attachmentImage; // ivar: _attachmentImage
@property (retain, nonatomic, setter=_setHeaderImage:) UIImage *_headerImage; // ivar: _headerImage
@property (nonatomic, setter=_setIgnoresQuietMode:) BOOL _ignoresQuietMode; // ivar: _ignoresQuietMode
@property (nonatomic, setter=_setPresentationState:) NSUInteger _presentationState; // ivar: _presentationState
@property (nonatomic) BOOL allowInCar; // ivar: _allowInCar
@property (nonatomic) BOOL allowInSetup; // ivar: _allowInSetup
@property (nonatomic) BOOL allowMessageInCar; // ivar: _allowMessageInCar
@property (retain, nonatomic) NSArray *allowedBundleIDs; // ivar: _allowedBundleIDs
@property (retain, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (retain, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=setIconImage:) UIImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic, getter=_iconImagePath) NSString *iconImagePath; // ivar: _iconImagePath
@property (nonatomic) BOOL ignoreIfAlreadyDisplaying; // ivar: _ignoreIfAlreadyDisplaying
@property (nonatomic) BOOL pendInSetupIfNotAllowed; // ivar: _pendInSetupIfNotAllowed
@property (nonatomic) BOOL pendWhileKeyBagLocked; // ivar: _pendWhileKeyBagLocked
@property (nonatomic, getter=_isPresented, setter=_setPresented:) BOOL presented; // ivar: _presented
@property (nonatomic) BOOL shouldMaskIcon; // ivar: _shouldMaskIcon
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressForKeynote; // ivar: _suppressForKeynote


+(id)_alertItemsController;
+(void)activateAlertItem:(id)arg0 ;
-(BOOL)_didEverActivate;
-(BOOL)_displayActionButtonOnLockScreen;
-(BOOL)_hasActiveKeyboardOnScreen;
-(BOOL)allowInLoginWindow;
-(BOOL)allowLockScreenDismissal;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)behavesSuperModally;
-(BOOL)didPlayPresentationSound;
-(BOOL)dismissOnLock;
-(BOOL)dismissesOverlaysOnLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)hideOnClonedDisplay;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
-(BOOL)undimsScreen;
-(BOOL)unlocksScreen;
-(BOOL)wakeDisplay;
-(id)_alertController;
-(id)_prepareNewAlertControllerWithLockedState:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(id)_publicDescription;
-(id)alertController;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)lockLabel;
-(id)shortLockLabel;
-(id)sound;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)visualStyleForAlertControllerStyle:(NSInteger)arg0 traitCollection:(id)arg1 descriptor:(id)arg2 ;
-(int)alertPriority;
-(void)_clearAlertController;
-(void)_deactivationCompleted;
-(void)_noteVolumeOrLockPressed;
-(void)alertItemDidAppear;
-(void)alertItemDidDisappear;
-(void)buttonDismissed;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)deactivate;
-(void)deactivateForButton;
-(void)deactivateForReason:(int)arg0 ;
-(void)didActivate;
-(void)didDeactivateForReason:(int)arg0 ;
-(void)didFailToActivate;
-(void)dismiss;
-(void)dismiss:(int)arg0 ;
-(void)doCleanupAfterDeactivationAnimation;
-(void)performUnlockAction;
-(void)playPresentationSound;
-(void)presentationStateDidChangeFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
-(void)willActivate;
-(void)willDeactivateForReason:(int)arg0 ;
-(void)willRelockForButtonPress:(BOOL)arg0 ;


@end


#endif