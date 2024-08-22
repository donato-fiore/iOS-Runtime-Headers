// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONSCENEUPDATETRANSACTION_H
#define SBAPPLICATIONSCENEUPDATETRANSACTION_H

@class FBApplicationUpdateScenesTransaction, LSApplicationIdentity, FBSMutableSceneParameters, UIApplicationSceneTransitionContext, NSString, UIApplicationSceneSettings;
@protocol SBApplicationSceneUpdateTransactionDelegate;


#import "SBWorkspaceTransitionRequest.h"
#import "SBWorkspaceApplicationSceneTransitionContext.h"
#import "SBPrivacyPreflightController.h"
#import "SBApplicationSceneEntity.h"

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {
    LSApplicationIdentity *_applicationIdentity;
    SBWorkspaceTransitionRequest *_request;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    FBSMutableSceneParameters *_sceneParameters;
    UIApplicationSceneTransitionContext *_sceneTransitionContext;
    BOOL _suspendedActivation;
    SBPrivacyPreflightController *_privacyPreflightController;
    BOOL _requiresPreflight;
    id<SBApplicationSceneUpdateTransactionDelegate> *_delegate;
}


@property (readonly, nonatomic) SBApplicationSceneEntity *applicationSceneEntity; // ivar: _applicationSceneEntity
@property (readonly, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly, nonatomic) UIApplicationSceneSettings *sceneSettings;
@property (nonatomic) BOOL shouldSendActivationResult; // ivar: _shouldSendActivationResult


-(BOOL)_isReadyToLaunch;
-(id)_createUpdateTransactionForPreflightCompletion;
-(id)_customizedDescriptionProperties;
-(id)initWithApplicationSceneEntity:(id)arg0 transitionRequest:(id)arg1 ;
-(id)initWithApplicationSceneEntity:(id)arg0 transitionRequest:(id)arg1 delegate:(id)arg2 ;
-(void)_didComplete;
-(void)_performSynchronizedCommit:(id)arg0 ;
-(void)_sceneResizeLayoutDidFinish:(id)arg0 ;
-(void)_sendActivationResultWithError:(id)arg0 ;
-(void)_willBegin;
-(void)_willFailWithReason:(id)arg0 ;


@end


#endif