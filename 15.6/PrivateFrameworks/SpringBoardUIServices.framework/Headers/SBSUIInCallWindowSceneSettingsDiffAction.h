// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSUIINCALLWINDOWSCENESETTINGSDIFFACTION_H
#define SBSUIINCALLWINDOWSCENESETTINGSDIFFACTION_H

@class NSString;
@protocol _UISceneSettingsDiffAction;

#import <Foundation/Foundation.h>

#import "SBSUIInCallSceneSettingsDiffInspector.h"

@interface SBSUIInCallWindowSceneSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>

 {
    SBSUIInCallSceneSettingsDiffInspector *_inCallSceneSettingsDiffInspector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_inCallSceneSettingsDiffInspector;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;


@end


#endif