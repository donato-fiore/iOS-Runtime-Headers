// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSINGLESCENECONTROLLER_H
#define SBSINGLESCENECONTROLLER_H

@class NSString, FBScene, FBSWorkspaceSceneRequestOptions, SBFSceneWorkspaceController, FBSDisplayConfiguration;
@protocol FBSceneObserver, SBSceneSettingsUpdaterObserver, BSInvalidatable, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBSceneSettingsUpdater.h"
#import "SBTraitsSingleSceneWindow.h"

@interface SBSingleSceneController : NSObject <FBSceneObserver, SBSceneSettingsUpdaterObserver, BSInvalidatable, BSDescriptionProviding>

 {
    id<BSInvalidatable> *_settingsUpdaterObserverInvalidatable;
    SBSceneSettingsUpdater *_sceneSettingsUpdater;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBTraitsSingleSceneWindow *hostingWindow; // ivar: _hostingWindow
@property (readonly, nonatomic) BOOL isSceneActive;
@property (readonly, nonatomic) BOOL isSceneForeground;
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (nonatomic, getter=isSceneContentVisible) BOOL sceneContentVisible; // ivar: _sceneContentVisible
@property (readonly, nonatomic) FBSWorkspaceSceneRequestOptions *sceneOptions; // ivar: _sceneOptions
@property (readonly, nonatomic) NSString *scenePersistentIdentifier;
@property (readonly, nonatomic) SBFSceneWorkspaceController *sceneWorkspaceController; // ivar: _sceneWorkspaceController
@property (nonatomic) BOOL shouldActivateForDisplayConfiguration; // ivar: _shouldActivateForDisplayConfiguration
@property (nonatomic) BOOL shouldActivateUponClientConnection; // ivar: _shouldActivateUponClientConnection
@property (nonatomic) BOOL shouldBeKeptActiveWhileForeground; // ivar: _shouldBeKeptActiveWhileForeground
@property (nonatomic) BOOL shouldForegroundForDisplayConfiguration; // ivar: _shouldForegroundForDisplayConfiguration
@property (readonly) Class superclass;
@property (retain, nonatomic) FBSDisplayConfiguration *targetDisplayConfiguration; // ivar: _targetDisplayConfiguration
@property (readonly, nonatomic) NSString *traitsRole; // ivar: _traitsRole
@property (nonatomic) BOOL visible; // ivar: _visible
@property (nonatomic, getter=usesWindowHosting) BOOL windowHosting; // ivar: _windowHosting


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithTargetDisplayConfiguration:(id)arg0 sceneWorkspaceController:(id)arg1 sceneRequestOptions:(id)arg2 clientIdentity:(id)arg3 traitsRole:(id)arg4 level:(CGFloat)arg5 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_evaluateSceneActivationState;
-(void)_evaluateSceneForegroundState;
-(void)_updateHostingWindowScene;
-(void)dealloc;
-(void)didUpdateSceneTraitsDelegate:(id)arg0 ;
-(void)invalidate;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;


@end


#endif