// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FBSYSTEMAPPSCENEINFO_H
#define _FBSYSTEMAPPSCENEINFO_H

@class FBSScene, FBSSceneTransitionContext;

#import <Foundation/Foundation.h>


@interface _FBSystemAppSceneInfo : NSObject

@property (retain, nonatomic) FBSScene *FBSScene; // ivar: _FBSScene
@property (nonatomic) BOOL hasSentFBSWorkspaceDelegateSceneCreate; // ivar: _hasSentFBSWorkspaceDelegateSceneCreate
@property (retain, nonatomic) FBSSceneTransitionContext *pendingTransitionContext; // ivar: _pendingTransitionContext




@end


#endif