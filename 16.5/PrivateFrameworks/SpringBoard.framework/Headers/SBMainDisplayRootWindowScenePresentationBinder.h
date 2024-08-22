// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMAINDISPLAYROOTWINDOWSCENEPRESENTATIONBINDER_H
#define SBMAINDISPLAYROOTWINDOWSCENEPRESENTATIONBINDER_H

@class NSMutableArray, UIWindowScene;


#import "SBRootWindowScenePresentationBinder.h"
#import "SBRootSceneWindow.h"

@interface SBMainDisplayRootWindowScenePresentationBinder : SBRootWindowScenePresentationBinder {
    NSMutableArray *_disconnectionAssertions;
    UIWindowScene *_disconnectedFromScene;
}


@property (readonly, nonatomic) SBRootSceneWindow *rootWindow; // ivar: _rootWindow


+(id)sharedInstance;
-(id)_init;
-(id)assertDisconnectionFromRenderServerForReason:(id)arg0 ;
-(void)_disconnectFromRenderServer;
-(void)_reconnectToRenderServer;


@end


#endif