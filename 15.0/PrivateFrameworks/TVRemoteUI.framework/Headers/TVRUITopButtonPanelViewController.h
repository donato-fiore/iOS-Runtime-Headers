// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRUITOPBUTTONPANELVIEWCONTROLLER_H
#define TVRUITOPBUTTONPANELVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString;
@protocol TVRUIRemoteViewProvider, _TVRUIEventDelegate, TVRUIDevice, TVRUIStyleProvider;


#import "TVRUIButton.h"

@interface TVRUITopButtonPanelViewController : UIViewController <TVRUIRemoteViewProvider>



@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *buttonEventDelegate; // ivar: _buttonEventDelegate
@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<TVRUIDevice> *device; // ivar: _device
@property (retain, nonatomic) TVRUIButton *guideButton; // ivar: _guideButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVRUIButton *muteButton; // ivar: _muteButton
@property (retain, nonatomic) TVRUIButton *powerButton; // ivar: _powerButton
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(void)_buttonPressed:(id)arg0 ;
-(void)_buttonReleased:(id)arg0 ;
-(void)_updateButtonsShapes;
-(void)setVolumeControlAvailable:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif