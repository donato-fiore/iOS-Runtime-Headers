// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPTEMPLATEAPPLICATIONSCENEGEOMETRYSETTINGSDIFFACTION_H
#define CPTEMPLATEAPPLICATIONSCENEGEOMETRYSETTINGSDIFFACTION_H

@class NSString, UIApplicationSceneSettingsDiffInspector;
@protocol _UISceneSettingsDiffAction;

#import <Foundation/Foundation.h>


@interface CPTemplateApplicationSceneGeometrySettingsDiffAction : NSObject <_UISceneSettingsDiffAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsGeometryMutationDiffInspector; // ivar: _sceneSettingsGeometryMutationDiffInspector
@property (readonly) Class superclass;


-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_updateSceneGeometryWithSettingObserverContext:(struct ? )arg0 windowScene:(id)arg1 transitionContext:(id)arg2 ;


@end


#endif