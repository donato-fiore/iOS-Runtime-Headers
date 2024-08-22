// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONSCENEHANDLE_H
#define SBAPPLICATIONSCENEHANDLE_H

@class SBSceneHandle, NSHashTable, NSString;


#import "SBApplication.h"

@interface SBApplicationSceneHandle : SBSceneHandle {
    NSHashTable *_sceneUpdateContributers;
    NSUInteger _userLaunchSignpostID;
    CGFloat _userLaunchEventTime;
}


@property (readonly, nonatomic) SBApplication *application; // ivar: _application
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance; // ivar: _insetForHomeAffordance
@property (nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (readonly, nonatomic) NSString *persistenceIdentifier; // ivar: _persistenceIdentifier
@property (nonatomic, getter=isSceneUpdateInProgress) BOOL sceneUpdateInProgress; // ivar: _sceneUpdateInProgress
@property (readonly, nonatomic, getter=isSecure) BOOL secure; // ivar: _isSecure


+(id)lookupOrCreatePersistenceIDFromApplication:(id)arg0 sceneID:(id)arg1 ;
-(id)_createApplicationSceneClientSettingsFromContext:(id)arg0 entity:(id)arg1 initialSceneSettings:(id)arg2 ;
-(id)_createApplicationSceneSettingsFromContext:(id)arg0 entity:(id)arg1 ;
-(id)_createApplicationSceneTransitionContextFromContext:(id)arg0 entity:(id)arg1 ;
-(id)_createParametersFromTransitionContext:(id)arg0 entity:(id)arg1 ;
-(id)_createProcessExecutionContextFromContext:(id)arg0 entity:(id)arg1 ;
-(id)_initWithApplication:(id)arg0 scene:(id)arg1 displayIdentity:(id)arg2 ;
-(id)_initWithApplication:(id)arg0 sceneDefinition:(id)arg1 displayIdentity:(id)arg2 ;
-(id)_initWithDefinition:(id)arg0 ;
-(id)_initWithScene:(id)arg0 ;
-(id)displayItemRepresentation;
-(id)newScenePlaceholderContentContextWithActivationSettings:(id)arg0 ;
-(id)newSceneViewController;
-(id)newSceneViewWithReferenceSize:(struct CGSize )arg0 orientation:(NSInteger)arg1 hostRequester:(id)arg2 ;
-(void)_applicationsDidChange:(id)arg0 ;
-(void)_commonInit;
-(void)_commonInitWithApplication:(id)arg0 sceneIdentifier:(id)arg1 displayIdentity:(id)arg2 ;
-(void)_modifyApplicationSceneClientSettings:(id)arg0 fromRequestContext:(id)arg1 entity:(id)arg2 initialSceneSettings:(id)arg3 ;
-(void)_modifyApplicationSceneSettings:(id)arg0 fromRequestContext:(id)arg1 entity:(id)arg2 ;
-(void)_modifyApplicationTransitionContext:(id)arg0 fromRequestContext:(id)arg1 entity:(id)arg2 ;
-(void)_modifyProcessExecutionContext:(id)arg0 fromRequestContext:(id)arg1 entity:(id)arg2 ;
-(void)addSceneUpdateContributer:(id)arg0 ;
-(void)dealloc;
-(void)removeSceneUpdateContributer:(id)arg0 ;


@end


#endif