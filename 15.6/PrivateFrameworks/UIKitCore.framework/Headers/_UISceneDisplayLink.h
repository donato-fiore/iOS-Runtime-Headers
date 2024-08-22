// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCENEDISPLAYLINK_H
#define _UISCENEDISPLAYLINK_H

@class NSMutableArray, CADisplayLink, NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"

@interface _UISceneDisplayLink : NSObject <_UISceneComponentProviding>

 {
    NSMutableArray *_targetsAndActions;
    CADisplayLink *_displayLink;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sceneDisplayLinkForWindowScene:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(void)_displayLinkTick:(id)arg0 ;
-(void)_scene:(id)arg0 didTransitionFromActivationState:(NSInteger)arg1 withReasonsMask:(NSUInteger)arg2 ;
-(void)_updateStatus;
-(void)registerTarget:(id)arg0 action:(SEL)arg1 ;
-(void)unregisterTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif