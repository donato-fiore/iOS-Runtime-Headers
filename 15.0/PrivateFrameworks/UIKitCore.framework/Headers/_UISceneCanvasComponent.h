// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISCENECANVASCOMPONENT_H
#define _UISCENECANVASCOMPONENT_H

@class NSString;
@protocol _UISceneComponentProviding, _UICanvasComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"

@interface _UISceneCanvasComponent : NSObject <_UISceneComponentProviding>

 {
    Class canvasComponentClass;
    id<_UICanvasComponentProviding> *_canvasComponent;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, nonatomic) NSObject<_UICanvasComponentProviding> *canvasComponent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_actionHandlersForScene:(id)arg0 ;
-(id)_settingsDiffActionsForScene:(id)arg0 ;
-(id)initWithCanvasComponent:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(void)_scene:(id)arg0 didTransitionFromActivationState:(NSInteger)arg1 withReasonsMask:(NSUInteger)arg2 ;
-(void)_scene:(id)arg0 willTransitionToActivationState:(NSInteger)arg1 withReasonsMask:(NSUInteger)arg2 ;
-(void)_sceneWillInvalidate:(id)arg0 ;


@end


#endif