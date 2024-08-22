// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUIHINTSVIEWCONTROLLER_H
#define TVRUIHINTSVIEWCONTROLLER_H

@class UIViewController, NSString, UIViewPropertyAnimator, TPKContent, TPKContentController, TPKContentPopoverViewController;
@protocol TPKContentControllerDelegate, TVRUIRemoteViewControllerDelegate, TVRUIContentPresenter, TVRUIHintsStyleProvider;


#import "TVRUIDeviceHardwareInfo.h"
#import "TVRUIHintsGlyphView.h"
#import "TVRUIHintsUserIntentButtonView.h"
#import "TVRUIHintsVolumeButtonsView.h"

@interface TVRUIHintsViewController : UIViewController <TPKContentControllerDelegate, TVRUIRemoteViewControllerDelegate, TVRUIContentPresenter>



@property (nonatomic) BOOL allowSiriHint; // ivar: _allowSiriHint
@property (nonatomic) BOOL allowTips; // ivar: _allowTips
@property (nonatomic) BOOL allowVolumeHint; // ivar: _allowVolumeHint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIViewPropertyAnimator *dismissalAnimator; // ivar: _dismissalAnimator
@property (retain, nonatomic) TVRUIDeviceHardwareInfo *hardwareInfo; // ivar: _hardwareInfo
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastSeenDeviceName; // ivar: _lastSeenDeviceName
@property (retain, nonatomic) UIViewPropertyAnimator *presentationAnimator; // ivar: _presentationAnimator
@property (nonatomic, getter=isPresentingTip) BOOL presentingTip; // ivar: _presentingTip
@property (retain, nonatomic) TVRUIHintsGlyphView *siriGlyphView; // ivar: _siriGlyphView
@property (retain, nonatomic) NSObject<TVRUIHintsStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSiri; // ivar: _supportsSiri
@property (nonatomic) BOOL supportsVolume; // ivar: _supportsVolume
@property (retain, nonatomic) TPKContent *tipContent; // ivar: _tipContent
@property (retain, nonatomic) TPKContentController *tipContentController; // ivar: _tipContentController
@property (retain, nonatomic) TPKContentPopoverViewController *tipContentViewController; // ivar: _tipContentViewController
@property (retain, nonatomic) TVRUIHintsUserIntentButtonView *userIntentButtonHint; // ivar: _userIntentButtonHint
@property (retain, nonatomic) TVRUIHintsVolumeButtonsView *volumeButtonsHint; // ivar: _volumeButtonsHint
@property (retain, nonatomic) TVRUIHintsGlyphView *volumeGlyphView; // ivar: _volumeGlyphView


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldAllowHintsToPresent;
-(BOOL)_siriHintEnabled;
-(BOOL)_volumeHintEnabled;
-(BOOL)hasPresentedContent;
-(NSInteger)currentInterfaceOrientation;
-(NSUInteger)_permittedArrowDirectionsForDevice:(id)arg0 ;
-(id)contentController:(id)arg0 contentView:(id)arg1 iconForCustomizationID:(NSInteger)arg2 ;
-(id)init;
-(struct CGAffineTransform )_gylphTransformForOrientation:(NSInteger)arg0 ;
-(struct CGRect )_frameForUserIntentButtonPresented:(BOOL)arg0 ;
-(struct CGRect )_frameForVolumeButtonsPresented:(BOOL)arg0 ;
-(void)_applyTransformForOrientation:(NSInteger)arg0 ;
-(void)_cleanupHints;
-(void)_dismissHintsWithCompletion:(id)arg0 ;
-(void)_largeTextEnabledStatusChanged:(id)arg0 ;
-(void)_presentTipContentViewControllerAnimated:(BOOL)arg0 ;
-(void)_presentVolumeButtonPressWithPresentation:(NSUInteger)arg0 ;
-(void)_setupDebugUIIfEnabled;
-(void)_setupTipsControllerIfNeeded;
-(void)_setupUserIntentButtonHintWithPresentation:(NSUInteger)arg0 ;
-(void)_setupVolumeButtonsHintWithPresentation:(NSUInteger)arg0 ;
-(void)_siriActivated:(id)arg0 ;
-(void)_siriDeactivated:(id)arg0 ;
-(void)_updateUserIntentButtonHintFrameForPresentation:(NSUInteger)arg0 ;
-(void)_updateVolumeButtonsHintFrameWithPresentation:(NSUInteger)arg0 ;
-(void)_volumeDownButtonPressed:(id)arg0 ;
-(void)_volumeUpButtonPressed:(id)arg0 ;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)device:(id)arg0 supportsSiri:(BOOL)arg1 volume:(BOOL)arg2 ;
-(void)devicePickerWillExpand;
-(void)dismissHints;
-(void)dismissPresentedContentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)remoteWillBeDismissed;
-(void)replayHints;
-(void)requestHintsForSiri:(BOOL)arg0 volume:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif