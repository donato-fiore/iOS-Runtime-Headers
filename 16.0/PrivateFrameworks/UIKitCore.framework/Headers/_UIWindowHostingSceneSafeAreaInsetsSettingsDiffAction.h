// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIWINDOWHOSTINGSCENESAFEAREAINSETSSETTINGSDIFFACTION_H
#define _UIWINDOWHOSTINGSCENESAFEAREAINSETSSETTINGSDIFFACTION_H

@class NSString;
@protocol _UISceneSettingsDiffAction;

#import <Foundation/Foundation.h>

#import "UIApplicationSceneSettingsDiffInspector.h"

@interface _UIWindowHostingSceneSafeAreaInsetsSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>

 {
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsSafeAreaInsetsDiffInspector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)sceneSettingsSafeAreaInsetsDiffInspector;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
// -(void)_updateSafeAreaInsetsWithSettingsObserverContext:(unk)arg0 windowHostingScene:(unsigned char)arg1 transitionContext:(struct ? )arg2  ;


@end


#endif