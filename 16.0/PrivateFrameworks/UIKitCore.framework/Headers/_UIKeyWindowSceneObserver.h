// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYWINDOWSCENEOBSERVER_H
#define _UIKEYWINDOWSCENEOBSERVER_H

@class NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"

@interface _UIKeyWindowSceneObserver : NSObject <_UISceneComponentProviding>

 {
    ? _observerFlags;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_settingsDiffActionsForScene:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(void)_scene:(id)arg0 willTransitionToActivationState:(NSInteger)arg1 withReasonsMask:(NSUInteger)arg2 ;
-(void)_sceneWillInvalidate:(id)arg0 ;


@end


#endif