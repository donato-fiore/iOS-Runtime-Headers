// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMODALALERTPRESENTATIONCOORDINATOR_H
#define SBMODALALERTPRESENTATIONCOORDINATOR_H

@class UIApplicationSceneDeactivationManager, NSMutableSet, UIApplicationSceneDeactivationAssertion, NSString;
@protocol BSDescriptionProviding, BSInvalidatable, SBModalAlertPresentationCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "SBModalAlertPresenter.h"

@interface SBModalAlertPresentationCoordinator : NSObject <BSDescriptionProviding>

 {
    UIApplicationSceneDeactivationManager *_sceneDeactivationManager;
    NSMutableSet *_activeModalAlertPresenters;
    UIApplicationSceneDeactivationAssertion *_systemModalAlertsActiveSceneDeactivationAssertion;
    NSMutableSet *_hideApplicationModalAlertAssertions;
    id<BSInvalidatable> *_hideApplicationModalAlertsAssertionWhileSBModalAlertsActive;
    id<BSInvalidatable> *_sysdiagnoseStateHandler;
}


@property (readonly, nonatomic, getter=canShowApplicationModalAlerts) BOOL canShowApplicationModalAlerts;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBModalAlertPresentationCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isShowingModalAlert) BOOL showingModalAlert;
@property (readonly, nonatomic, getter=isShowingSystemModalAlert) BOOL showingSystemModalAlert;
@property (retain, nonatomic, getter=_getSpringBoardPresenter, setter=_setSpringBoardPresenter:) SBModalAlertPresenter *springBoardPresenter; // ivar: _springBoardModalAlertPresenter
@property (readonly) Class superclass;


-(id)_fencingTransitionContext:(BOOL)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)hideApplicationModalAlertsForReason:(id)arg0 ;
-(id)initWithSceneDeactivationManager:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addModalAlertPresenterIfNecessary:(id)arg0 ;
-(void)_adjustApplicationSceneSettingsForModalAlertsAndFence:(BOOL)arg0 ;
-(void)_noteSpringBoardModalAlertStateChanged:(BOOL)arg0 ;
-(void)_removeModalAlertPresenter:(id)arg0 ;


@end


#endif