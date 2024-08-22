// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSUIWINDOW_H
#define CRSUIWINDOW_H

@class UIWindow, NSString, NSLayoutConstraint, UILayoutGuide;
@protocol _UISceneSettingsDiffAction;


#import "CRSUIApplicationSceneSettingsDiffInspector.h"

@interface CRSUIWindow : UIWindow <_UISceneSettingsDiffAction>



@property (nonatomic) CGFloat bannerHeight; // ivar: _bannerHeight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (readonly, nonatomic) UILayoutGuide *notificationLayoutGuide; // ivar: _notificationLayoutGuide
@property (retain, nonatomic) CRSUIApplicationSceneSettingsDiffInspector *settingsDiffInspector; // ivar: _settingsDiffInspector
@property (readonly) Class superclass;


+(id)_stringForStyle:(NSInteger)arg0 ;
-(id)_mapSettings;
-(id)_settings;
-(id)initWithWindowScene:(id)arg0 ;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_setMapStyle:(NSInteger)arg0 ;
-(void)_updateMapStyleTrait;
-(void)commonInit;


@end


#endif