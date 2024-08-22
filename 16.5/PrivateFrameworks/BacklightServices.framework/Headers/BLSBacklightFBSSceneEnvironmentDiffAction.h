// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSBACKLIGHTFBSSCENEENVIRONMENTDIFFACTION_H
#define BLSBACKLIGHTFBSSCENEENVIRONMENTDIFFACTION_H

@protocol BLSBacklightFBSSceneEnvironmentDiffActionDelegate;

#import <Foundation/Foundation.h>

#import "BLSBacklightSceneSettingsDiffInspector.h"

@interface BLSBacklightFBSSceneEnvironmentDiffAction : NSObject {
    BLSBacklightSceneSettingsDiffInspector *_diffInspector;
}


@property (weak) NSObject<BLSBacklightFBSSceneEnvironmentDiffActionDelegate> *delegate; // ivar: _delegate


-(void)performActionsForUpdatedFBSScene:(id)arg0 settingsDiff:(id)arg1 fromSettings:(id)arg2 transitionContext:(id)arg3 ;


@end


#endif