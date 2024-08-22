// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBACKLIGHTENVIRONMENT_H
#define _UIBACKLIGHTENVIRONMENT_H

@class BLSBacklightSceneVisualState, NSHashTable, NSString;
@protocol _UIWindowSceneComponentProviding, BLSBacklightSceneEnvironmentDelegate;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "UITraitCollection.h"

@interface _UIBacklightEnvironment : NSObject <_UIWindowSceneComponentProviding, BLSBacklightSceneEnvironmentDelegate>

 {
    BLSBacklightSceneVisualState *_visualState;
    NSHashTable *_observers;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, nonatomic) UITraitCollection *_traitOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_alwaysOnSupported;
+(BOOL)_backlightEnvironmentSupported;
+(CGFloat)_defaultAnimationDuration;
// +(void)_performOnChildViewControllersForAlwaysOnTimelines:(id)arg0 performBlock:(id)arg1 withCompletion:(unk)arg2  ;
-(BOOL)isObserver:(id)arg0 ;
-(id)_windowScene;
-(id)initWithScene:(id)arg0 ;
-(void)_commitAndPerformPostSynchronizeBlock:(id)arg0 ;
-(void)_enumerateAllObserversWithBlock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)environment:(id)arg0 performBacklightSceneUpdate:(id)arg1 ;
-(void)environment:(id)arg0 timelinesForDateInterval:(id)arg1 previousSpecifier:(id)arg2 completion:(id)arg3 ;
-(void)removeObserver:(id)arg0 ;
// -(void)transitionTraitsInUpdate:(id)arg0 animations:(id)arg1 completion:(unk)arg2  ;
-(void)updateSceneWithFrameSpecifier:(id)arg0 layout:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif