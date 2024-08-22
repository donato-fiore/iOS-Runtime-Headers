// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBUIAPPLICATIONWORKSPACESCENE_H
#define FBUIAPPLICATIONWORKSPACESCENE_H

@class NSMutableSet, NSMutableArray;


#import "FBWorkspaceScene.h"

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {
    NSMutableSet *_allWatchdogs;
    NSMutableArray *_watchdogStack;
    BOOL _sentSceneCreate;
}




-(id)_workspaceQueue_createWatchdogForSceneAction:(unsigned char)arg0 transitionContext:(id)arg1 ;
-(id)initWithWorkspace:(id)arg0 host:(id)arg1 settings:(id)arg2 clientSettings:(id)arg3 fromRemnant:(BOOL)arg4 ;
-(void)_workspaceQueue_cancelWatchdogTimer:(id)arg0 ;
-(void)_workspaceQueue_invalidate;


@end


#endif