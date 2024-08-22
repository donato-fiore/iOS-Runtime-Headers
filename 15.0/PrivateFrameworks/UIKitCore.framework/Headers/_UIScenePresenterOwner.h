// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISCENEPRESENTEROWNER_H
#define _UISCENEPRESENTEROWNER_H

@class NSMutableOrderedSet, NSMutableSet, NSString, FBScene;
@protocol BSDescriptionProviding, BSInvalidatable, _UIScenePresenterOwnerDelegate;

#import <Foundation/Foundation.h>

#import "UIScenePresentationManager.h"
#import "_UISceneLayerHostContainerView.h"
#import "_UIScenePresenter.h"
#import "UIScenePresentationContext.h"

@interface _UIScenePresenterOwner : NSObject <BSDescriptionProviding, BSInvalidatable>

 {
    UIScenePresentationManager *_scenePresentationManager;
    _UISceneLayerHostContainerView *_realSceneHostViewsContainer;
    NSMutableOrderedSet *_activePresentersByPriority;
    NSMutableSet *_inactivePresentersByPriority;
    _UIScenePresenter *_prioritizedPresenter;
    BOOL _invalidated;
}


@property (readonly, nonatomic) id *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext;
@property (weak, nonatomic) NSObject<_UIScenePresenterOwnerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly) Class superclass;


-(BOOL)_isPresenterActive:(id)arg0 ;
-(BOOL)_isPresenterHosting:(id)arg0 ;
-(id)activePrioritizedPresenter;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithScenePresentationManager:(id)arg0 context:(id)arg1 ;
-(id)presenterWithIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_activatePresenter:(id)arg0 ;
-(void)_deactivatePresenter:(id)arg0 ;
-(void)_invalidatePresenter:(id)arg0 ;
-(void)_setActivePrioritizedPresenter:(id)arg0 ;
-(void)_updateActivePrioritizedPresenterIfNecessary;
-(void)addPresenter:(id)arg0 ;
-(void)dealloc;
-(void)enumeratePresentersUsingBlock:(id)arg0 ;
-(void)invalidate;


@end


#endif