// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCENEPRESENTATIONMANAGER_H
#define UISCENEPRESENTATIONMANAGER_H

@class NSMapTable, NSString, FBScene;
@protocol BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver, UIScenePresentationManagerDelegate;

#import <Foundation/Foundation.h>

#import "_UISceneKeyboardProxyLayerForwardingManager.h"
#import "_UIScenePresenterOwner.h"
#import "UIScenePresentationContext.h"

@interface UIScenePresentationManager : NSObject <BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver>

 {
    _UISceneKeyboardProxyLayerForwardingManager *_keyboardProxyLayerManager;
    _UIScenePresenterOwner *_scenePresenterOwner;
    NSMapTable *_mapLayersToPresenterOwners;
    BOOL _invalidated;
    ? _delegateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext; // ivar: _defaultScenePresentationContext
@property (weak, nonatomic) NSObject<UIScenePresentationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, weak, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly) Class superclass;


-(BOOL)_hasPresenterWithIdentifier:(id)arg0 ;
-(NSInteger)_defaultPresentationPriority;
-(id)_initWithScene:(id)arg0 ;
-(id)_initWithScene:(id)arg0 keyboardProxyLayerManager:(id)arg1 ;
-(id)_presenterWithIdentifier:(id)arg0 ;
-(id)createPresenterForLayerTarget:(id)arg0 identifier:(id)arg1 ;
-(id)createPresenterForLayerTarget:(id)arg0 identifier:(id)arg1 priority:(NSInteger)arg2 ;
-(id)createPresenterWithIdentifier:(id)arg0 ;
-(id)createPresenterWithIdentifier:(id)arg0 priority:(NSInteger)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)snapshotContext;
-(id)snapshotPresentationForSnapshot:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)modifyDefaultPresentationContext:(id)arg0 ;
-(void)owner:(id)arg0 willPrioritizePresenter:(id)arg1 deactivatePresenter:(id)arg2 ;
-(void)ownerDidInvalidateLastPresenter:(id)arg0 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;


@end


#endif