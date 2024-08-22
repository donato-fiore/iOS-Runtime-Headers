// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUISESSIONSCENECOMPONENT_H
#define SNUISESSIONSCENECOMPONENT_H

@class UIScene, UITraitCollection, NSString, BSAbsoluteMachTimer, NSMapTable;
@protocol _UIWindowSceneComponentProviding, UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface SNUISessionSceneComponent : NSObject <_UIWindowSceneComponentProviding, UIGestureRecognizerDelegate>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, nonatomic) UITraitCollection *_traitOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BSAbsoluteMachTimer *delayedGestureActionTimer; // ivar: _delayedGestureActionTimer
@property (retain, nonatomic) NSMapTable *dependencyRecognizersPerWindow; // ivar: _dependencyRecognizersPerWindow
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *recognizersPerWindow; // ivar: _recognizersPerWindow
@property (readonly) Class superclass;


+(void)load;
-(BOOL)isSessionScene:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(void)_handleGestureChange:(id)arg0 ;
-(void)_handleGestureDependencyChange:(id)arg0 ;
-(void)_handleGestureState:(NSInteger)arg0 ;
-(void)_sendActions:(id)arg0 ;
-(void)_windowBecameHidden:(id)arg0 ;
-(void)_windowDidBecomeVisible:(id)arg0 ;
-(void)dealloc;


@end


#endif