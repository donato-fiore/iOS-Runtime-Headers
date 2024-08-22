// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPLAYBACKCONTROLSSTATEMANAGER_H
#define _UIPLAYBACKCONTROLSSTATEMANAGER_H

@class NSHashTable, NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"

@interface _UIPlaybackControlsStateManager : NSObject <_UISceneComponentProviding>

 {
    NSHashTable *_fullscreenPlaybackAssertions;
    NSHashTable *_controlsPresentedAssertions;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_beginFullscreenPlaybackSession;
-(id)_beginPresentingPlaybackControls;
-(id)initWithScene:(id)arg0 ;


@end


#endif