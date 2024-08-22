// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRUICONTROLPANELVIEWCONTROLLER_H
#define TVRUICONTROLPANELVIEWCONTROLLER_H

@class UIViewController, UIView, NSString;
@protocol _TVRUIEventDelegate, TVRUIRemoteViewProvider, TVRUIDevice, TVRUIStyleProvider;


#import "_TVRUIButtonPanelView.h"

@interface TVRUIControlPanelViewController : UIViewController <_TVRUIEventDelegate, TVRUIRemoteViewProvider>



@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *buttonActionsDelegate; // ivar: _buttonActionsDelegate
@property (retain, nonatomic) _TVRUIButtonPanelView *currentButtonPanel; // ivar: _currentButtonPanel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _TVRUIButtonPanelView *genericButtonPanel; // ivar: _genericButtonPanel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _TVRUIButtonPanelView *legacyButtonPanel; // ivar: _legacyButtonPanel
@property (retain, nonatomic) _TVRUIButtonPanelView *legacyPanelWithKeyboardButton; // ivar: _legacyPanelWithKeyboardButton
@property (retain, nonatomic) _TVRUIButtonPanelView *panelWithKeyboardButton; // ivar: _panelWithKeyboardButton
@property (retain, nonatomic) NSObject<TVRUIDevice> *remoteDevice; // ivar: _remoteDevice
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) _TVRUIButtonPanelView *touchpadButtonPanel; // ivar: _touchpadButtonPanel


-(BOOL)_canShowWhileLocked;
-(id)_createPagedViewWithPrimaryButtonType:(NSInteger)arg0 leftButtonTypes:(id)arg1 ;
-(id)_createViewWithPrimaryButtonType:(NSInteger)arg0 leftButtonTypes:(id)arg1 rightButtonTypes:(id)arg2 ;
-(void)_createButtonPanelWithKeyboard;
-(void)_createGenericControlButtonPanel;
-(void)_createLegacyButtonPanel;
-(void)_createLegacyPanelWithkeyboard;
-(void)_createTouchpadButtonPanel;
-(void)_transitionToButtonPanelAndCreateIfNeeded;
-(void)_transitionToPanelView:(id)arg0 ;
-(void)_transitionToTouchpadPanelAndCreateIfNeeded;
-(void)disableControls;
-(void)disableSearchButton;
-(void)enableControls;
-(void)enableSearchButton;
-(void)hideKeyboardButton;
-(void)setDevice:(id)arg0 ;
-(void)showKeyboardButton;
-(void)transitonToViewForDeviceType:(NSInteger)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif