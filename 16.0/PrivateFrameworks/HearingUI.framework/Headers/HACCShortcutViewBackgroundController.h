// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HACCSHORTCUTVIEWBACKGROUNDCONTROLLER_H
#define HACCSHORTCUTVIEWBACKGROUNDCONTROLLER_H

@class CCUICustomContentModuleBackgroundViewController, AXDispatchTimer, CCUILabeledRoundButtonViewController, NSMutableArray, MediaControlsBluetoothListeningModeButton;
@protocol HACCShortcutViewBackgroundDelegate;



@interface HACCShortcutViewBackgroundController : CCUICustomContentModuleBackgroundViewController {
    AXDispatchTimer *_noiseControlUpdateTimer;
}


@property (retain, nonatomic) CCUILabeledRoundButtonViewController *comfortSoundsButtonController; // ivar: _comfortSoundsButtonController
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (retain, nonatomic) NSMutableArray *controls; // ivar: _controls
@property (weak, nonatomic) NSObject<HACCShortcutViewBackgroundDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *deviceToggleButtonController; // ivar: _deviceToggleButtonController
@property (retain, nonatomic) MediaControlsBluetoothListeningModeButton *listeningModeButton; // ivar: _listeningModeButton
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *listeningModeButtonController; // ivar: _listeningModeButtonController
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *liveListenButtonController; // ivar: _liveListenButtonController


-(BOOL)_canShowWhileLocked;
-(BOOL)setListeningMode:(id)arg0 ;
-(CGFloat)footerHeight;
-(id)init;
-(id)listeningMode;
-(void)comfortSoundsButtonTapped:(id)arg0 ;
-(void)listeningModeButtonDidUpdateValue:(id)arg0 ;
-(void)liveListenButtonTapped:(id)arg0 ;
-(void)otherDeviceButtonTapped:(id)arg0 ;
-(void)reset;
-(void)update;
-(void)updateComfortSoundsButtonStatus;
-(void)updateFooterLayout;
-(void)updateNoiseControl:(id)arg0 ;


@end


#endif