// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICONTEXTMENUDISMISSTOWINDOWSCENEACTIVATIONANIMATION_H
#define _UICONTEXTMENUDISMISSTOWINDOWSCENEACTIVATIONANIMATION_H


#import <Foundation/Foundation.h>

#import "_UIContextMenuPresentationController.h"

@interface _UIContextMenuDismissToWindowSceneActivationAnimation : NSObject

@property (retain, nonatomic) _UIContextMenuPresentationController *controller; // ivar: _controller


+(id)animationWithPresentationController:(id)arg0 ;
-(void)animateAlongsideScenePlatter:(id)arg0 ;
-(void)completeAnimation;


@end


#endif