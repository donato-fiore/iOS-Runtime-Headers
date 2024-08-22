// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLAYOUTSTATETRANSITIONCOORDINATOR_H
#define SBLAYOUTSTATETRANSITIONCOORDINATOR_H

@class NSPointerArray, NSString;
@protocol SBWorkspaceApplicationSceneTransitionContextDelegate, SBLayoutStateTransitionSceneEntityFrameProvider;

#import <Foundation/Foundation.h>

#import "_SBDefaultSceneEntityFrameProvider.h"
#import "SBLayoutStateTransitionContext.h"
#import "SBWindowScene.h"

@interface SBLayoutStateTransitionCoordinator : NSObject <SBWorkspaceApplicationSceneTransitionContextDelegate>

 {
    NSPointerArray *_observerPointerArray;
    _SBDefaultSceneEntityFrameProvider *_defaultSceneEntityFrameProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBLayoutStateTransitionSceneEntityFrameProvider> *sceneEntityFrameProvider; // ivar: _sceneEntityFrameProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBLayoutStateTransitionContext *transitionContext; // ivar: _transitionContext
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)initWithWindowScene:(id)arg0 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg0 ;
-(struct CGRect )applicationTransitionContext:(id)arg0 frameForApplicationSceneEntity:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)beginTransitionForWorkspaceTransaction:(id)arg0 ;
-(void)endTransitionWithError:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)willEndTransition;


@end


#endif