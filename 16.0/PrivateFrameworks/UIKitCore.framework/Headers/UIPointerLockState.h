// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPOINTERLOCKSTATE_H
#define UIPOINTERLOCKSTATE_H

@class NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"

@interface UIPointerLockState : NSObject <_UISceneComponentProviding>

 {
    NSInteger _status;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly) Class superclass;


-(id)_settingsDiffActionsForScene:(id)arg0 ;
-(id)_windowScene;
-(id)initWithScene:(id)arg0 ;
-(id)windowHostingScene;
-(void)_pointerLockStatusUpdated;
-(void)_preferredPointerLockStatusUpdated;


@end


#endif