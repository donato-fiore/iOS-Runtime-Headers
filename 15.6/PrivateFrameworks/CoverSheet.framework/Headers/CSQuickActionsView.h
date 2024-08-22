// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSQUICKACTIONSVIEW_H
#define CSQUICKACTIONSVIEW_H

@class SBFTouchPassThroughView, NSString, _UILegibilitySettings;
@protocol PTSettingsKeyObserver, CSQuickActionsDelegate;


#import "CSQuickActionsButton.h"
#import "CSDashBoardQuickActionsButtonSettings.h"

@interface CSQuickActionsView : SBFTouchPassThroughView <PTSettingsKeyObserver>



@property (retain, nonatomic) CSQuickActionsButton *cameraButton; // ivar: _cameraButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSQuickActionsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CSQuickActionsButton *flashlightButton; // ivar: _flashlightButton
@property (nonatomic) BOOL flashlightOn; // ivar: _flashlightOn
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) CSDashBoardQuickActionsButtonSettings *quickActionsSettings; // ivar: _quickActionsSettings
@property (readonly) Class superclass;


-(BOOL)_prototypingAllowsButtons;
-(CGFloat)_insetX;
-(CGFloat)_insetY;
-(id)_buttonGroupName;
-(id)initWithFrame:(struct CGRect )arg0 delegate:(id)arg1 ;
-(struct UIEdgeInsets )_buttonOutsets;
-(void)_addOrRemoveCameraButtonIfNecessary;
-(void)_addOrRemoveFlashlightButtonIfNecessary;
-(void)_addTargetsToButton:(id)arg0 ;
-(void)_layoutQuickActionButtons;
-(void)_removeTargetsFromButton:(id)arg0 ;
-(void)_setButtonBackgroundVisible:(BOOL)arg0 ;
-(void)_updateButtonBackgroundVisible;
-(void)handleButtonPress:(id)arg0 ;
-(void)handleButtonTouchBegan:(id)arg0 ;
-(void)handleButtonTouchEnded:(id)arg0 ;
-(void)layoutSubviews;
-(void)refreshFlashlightAvailability;
-(void)refreshSupportedButtons;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif