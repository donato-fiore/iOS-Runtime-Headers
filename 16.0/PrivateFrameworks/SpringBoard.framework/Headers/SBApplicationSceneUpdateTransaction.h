// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONSCENEUPDATETRANSACTION_H
#define SBAPPLICATIONSCENEUPDATETRANSACTION_H

@class FBApplicationUpdateScenesTransaction, FBSMutableSceneParameters, UIApplicationSceneTransitionContext, NSString, UIApplicationSceneSettings;


#import "SBWorkspaceTransitionRequest.h"
#import "SBWorkspaceApplicationSceneTransitionContext.h"
#import "SBApplicationSceneEntity.h"

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {
    SBWorkspaceTransitionRequest *_request;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    FBSMutableSceneParameters *_sceneParameters;
    UIApplicationSceneTransitionContext *_sceneTransitionContext;
    BOOL _suspendedActivation;
}


@property (readonly, nonatomic) SBApplicationSceneEntity *applicationSceneEntity; // ivar: _applicationSceneEntity
@property (readonly, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly, nonatomic) UIApplicationSceneSettings *sceneSettings;
@property (nonatomic) BOOL shouldSendActivationResult; // ivar: _shouldSendActivationResult


-(id)_customizedDescriptionProperties;
-(id)initWithApplicationSceneEntity:(id)arg0 transitionRequest:(id)arg1 ;
-(void)_didComplete;
-(void)_performSynchronizedCommit:(id)arg0 ;
-(void)_sceneResizeLayoutDidFinish:(id)arg0 ;
-(void)_sendActivationResultWithError:(id)arg0 ;
-(void)_willBegin;
-(void)_willFailWithReason:(id)arg0 ;


@end


#endif