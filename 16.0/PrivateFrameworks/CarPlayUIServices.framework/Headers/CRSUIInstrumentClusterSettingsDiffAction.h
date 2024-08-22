// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSUIINSTRUMENTCLUSTERSETTINGSDIFFACTION_H
#define CRSUIINSTRUMENTCLUSTERSETTINGSDIFFACTION_H

@class NSString;
@protocol _UISceneSettingsDiffAction;

#import <Foundation/Foundation.h>

#import "CRSUIInstrumentClusterSettingsDiffInspector.h"

@interface CRSUIInstrumentClusterSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CRSUIInstrumentClusterSettingsDiffInspector *instrumentClusterSettingsDiffInspector; // ivar: _instrumentClusterSettingsDiffInspector
@property (readonly) Class superclass;


-(id)sceneSettingsGeometryMutationDiffInspector;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;


@end


#endif