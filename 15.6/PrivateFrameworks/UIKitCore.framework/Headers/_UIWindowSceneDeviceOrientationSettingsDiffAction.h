// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIWINDOWSCENEDEVICEORIENTATIONSETTINGSDIFFACTION_H
#define _UIWINDOWSCENEDEVICEORIENTATIONSETTINGSDIFFACTION_H

@class NSString, FBSSceneSettingsDiffInspector;
@protocol _UISceneSettingsDiffAction;

#import <Foundation/Foundation.h>

#import "UIApplicationSceneSettingsDiffInspector.h"

@interface _UIWindowSceneDeviceOrientationSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>

 {
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDeviceOrientationDiffInspector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBSSceneSettingsDiffInspector *sceneSettingsDeviceOrientationDiffInspector;
@property (readonly) Class superclass;


-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_updateDeviceOrientationWithSettingObserverContext:(struct ? )arg0 windowScene:(id)arg1 transitionContext:(id)arg2 ;


@end


#endif