// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HACCSHORTCUTVIEWCONTROLLER_H
#define HACCSHORTCUTVIEWCONTROLLER_H

@class UIViewController, CCUIContentModuleDetailTransitioningDelegate, AXDispatchTimer, MediaControlsBluetoothListeningModeButton, CCUIContentModuleContext, AXRemoteHearingAidDevice, NSString, NSMutableDictionary, CCUILabeledRoundButtonViewController, UIView, UIScrollView;
@protocol UIGestureRecognizerDelegate, HACCShortcutViewBackgroundDelegate, HACCContentModuleDelegate, AXHAShortcutUpdateProtocol;


#import "HACCShortcutViewBackgroundController.h"
#import "HACCContentViewController.h"
#import "HACCStackView.h"

@interface HACCShortcutViewController : UIViewController <UIGestureRecognizerDelegate, HACCShortcutViewBackgroundDelegate, HACCContentModuleDelegate>

 {
    CGFloat _moduleHeight;
    CGFloat _dismissalGestureYOffset;
    CGPoint _backgroundViewDismissalOrigin;
    CGPoint _mainModuleOrigin;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    AXDispatchTimer *_bluetoothAvailabilityTimer;
    AXDispatchTimer *_noiseControlUpdateTimer;
    MediaControlsBluetoothListeningModeButton *_listeningModeButton;
    BOOL _mediaIsPlaying;
}


@property (retain, nonatomic) HACCShortcutViewBackgroundController *backgroundController; // ivar: _backgroundController
@property (nonatomic) BOOL bluetoothAvailable; // ivar: _bluetoothAvailable
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext; // ivar: _contentModuleContext
@property (retain, nonatomic) AXRemoteHearingAidDevice *currentHearingDevice; // ivar: _currentHearingDevice
@property (retain, nonatomic) NSString *currentOtherDeviceName; // ivar: _currentOtherDeviceName
@property (retain, nonatomic) NSString *currentOtherDeviceType; // ivar: _currentOtherDeviceType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXHAShortcutUpdateProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HACCContentViewController *expandedController; // ivar: _expandedController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL headphoneAudioAvailable; // ivar: _headphoneAudioAvailable
@property (nonatomic) BOOL listeningForHeadphoneUpdates; // ivar: _listeningForHeadphoneUpdates
@property (nonatomic) BOOL listeningForHearingAidUpdates; // ivar: _listeningForHearingAidUpdates
@property (retain, nonatomic) NSMutableDictionary *moduleToViewControllerMap; // ivar: _moduleToViewControllerMap
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *otherDevicesButtonViewController; // ivar: _otherDevicesButtonViewController
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL shouldDisplayOtherDevice; // ivar: _shouldDisplayOtherDevice
@property (retain, nonatomic) HACCStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)addPartialSeparatorAboveModule:(NSUInteger)arg0 ;
-(BOOL)addSeparatorAboveModule:(NSUInteger)arg0 ;
-(BOOL)isExpanded;
-(BOOL)setListeningMode:(id)arg0 ;
-(BOOL)shouldDisplayControlForModule:(NSUInteger)arg0 ;
-(BOOL)shouldDisplayDeviceToggle;
-(BOOL)shouldDisplayQuickToggleFor:(NSUInteger)arg0 ;
-(BOOL)shouldShowNoiseControl;
-(CGFloat)moduleHeight;
-(CGFloat)preferredContentWidth;
-(CGFloat)preferredExpandedContentHeight;
-(id)backgroundUpdateQueue;
-(id)initWithDelegate:(id)arg0 ;
-(id)listeningMode;
-(void)_logLiveListenAnalytics;
-(void)bluetoothAvailabilityDidChange:(id)arg0 ;
-(void)contentCategoryDidChange:(id)arg0 ;
-(void)controlDidActivate:(id)arg0 ;
-(void)listenForHearingAidUpdates;
-(void)listeningModeButtonDidUpdateValue:(id)arg0 ;
-(void)mediaPlaybackDidChange:(id)arg0 ;
-(void)mediaServerDied;
-(void)otherDeviceButtonTapped:(id)arg0 ;
-(void)quickToggle:(NSUInteger)arg0 stateChanged:(BOOL)arg1 ;
-(void)registerNotifications;
-(void)startListeningForHeadphoneUpdates;
-(void)stopListeningForHeadphoneUpdates;
-(void)updateAvailableControls;
-(void)updateNoiseControl:(id)arg0 ;
-(void)updateRoutes;
-(void)updateView;
-(void)updateViewForModule:(NSUInteger)arg0 ;
-(void)updateViewForProperties:(id)arg0 ;
-(void)viewController:(id)arg0 didExpand:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif