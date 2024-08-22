// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEDITMENUSCENECOMPONENT_H
#define _UIEDITMENUSCENECOMPONENT_H

@class NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "_UIEditMenuPresentation.h"

@interface _UIEditMenuSceneComponent : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, nonatomic) _UIEditMenuPresentation *activePresentation; // ivar: _activePresentation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sceneComponentForView:(id)arg0 ;
-(BOOL)hasVisibleMenu;
-(id)initWithScene:(id)arg0 ;
-(void)dismissCurrentMenu;
-(void)removeActivePresentation:(id)arg0 ;


@end


#endif