// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONUISERVICES14SETTINGSDIFFER_H
#define _TTC17SESSIONUISERVICES14SETTINGSDIFFER_H

@class UIApplicationSceneSettingsDiffInspector;
@protocol _UISceneSettingsDiffAction;



@interface _TtC17SessionUIServices14SettingsDiffer : UIApplicationSceneSettingsDiffInspector <_UISceneSettingsDiffAction>

 {
    ? subjects;
}




-(id)init;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;


@end


#endif