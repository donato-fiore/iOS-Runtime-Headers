// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSSCENEACTION_H
#define FBSSCENEACTION_H

@class BSAction;


#import "FBSSerialQueue.h"
#import "FBSScene.h"

@interface FBSSceneAction : BSAction

@property (retain, nonatomic) FBSSerialQueue *callOutQueue; // ivar: _callOutQueue
@property (retain, nonatomic) FBSScene *scene; // ivar: _scene




@end


#endif