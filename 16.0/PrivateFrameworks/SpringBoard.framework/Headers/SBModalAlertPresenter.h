// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMODALALERTPRESENTER_H
#define SBMODALALERTPRESENTER_H

@class NSHashTable, NSString, FBScene, FBSceneManager;
@protocol BSDescriptionProviding, FBSceneManagerObserver;

#import <Foundation/Foundation.h>

#import "SBModalAlertPresentationCoordinator.h"

@interface SBModalAlertPresenter : NSObject <BSDescriptionProviding, FBSceneManagerObserver>

 {
    BOOL _invalidated;
    BOOL _isSystemPresenter;
    NSHashTable *_visibleAlertAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator; // ivar: _modalAlertPresentationCoordinator
@property (retain, nonatomic, setter=_setScene:) FBScene *scene; // ivar: _scene
@property (retain, nonatomic) FBSceneManager *sceneManager; // ivar: _sceneManager
@property (readonly, nonatomic, getter=isShowingModalAlert) BOOL showingModalAlert;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger visibleModalAlertCount; // ivar: _visibleModalAlertCount


-(id)_initWithModalAlertPresentationCoordinator:(id)arg0 sceneManager:(id)arg1 scene:(id)arg2 ;
-(id)acquireVisibleModalAlertAssertionWithDescription:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initForSystemApplication;
-(id)initWithScene:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addOrRemoveModalAlertPresenterIfNecessary;
-(void)_addOrRemoveModalAlertPresenterIfNecessaryWithForegroundState:(BOOL)arg0 fromOrToTerminalState:(BOOL)arg1 ;
-(void)dealloc;
-(void)decrementVisibleModalAlertCount;
-(void)incrementVisibleModalAlertCount;
-(void)invalidate;
-(void)sceneManager:(id)arg0 willUpdateScene:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 ;


@end


#endif