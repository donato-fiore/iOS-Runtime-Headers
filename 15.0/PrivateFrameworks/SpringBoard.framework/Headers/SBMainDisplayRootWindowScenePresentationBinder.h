// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINDISPLAYROOTWINDOWSCENEPRESENTATIONBINDER_H
#define SBMAINDISPLAYROOTWINDOWSCENEPRESENTATIONBINDER_H

@class UIRootWindowScenePresentationBinder, NSMutableArray, UIWindowScene;


#import "SBRootSceneWindow.h"

@interface SBMainDisplayRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder {
    NSMutableArray *_disconnectionAssertions;
    UIWindowScene *_disconnectedFromScene;
}


@property (readonly, nonatomic) SBRootSceneWindow *rootWindow; // ivar: _rootWindow


+(id)sharedInstance;
-(id)assertDisconnectionFromRenderServerForReason:(id)arg0 ;
-(id)init;
-(void)_disconnectFromRenderServer;
-(void)_reconnectToRenderServer;


@end


#endif