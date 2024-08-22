// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCENECANVASSETTINGSDIFFACTION_H
#define _UISCENECANVASSETTINGSDIFFACTION_H

@class NSString;
@protocol _UISceneSettingsDiffAction, _UICanvasSettingsDiffAction;

#import <Foundation/Foundation.h>


@interface _UISceneCanvasSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>

 {
    id<_UICanvasSettingsDiffAction> *_canvasDiffAction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sceneArrayFromCanvasArray:(id)arg0 ;
-(id)initWithCanvasDiffAction:(id)arg0 ;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;


@end


#endif