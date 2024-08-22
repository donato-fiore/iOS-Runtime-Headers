// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMUISCENECONTROLLER_H
#define SBSYSTEMUISCENECONTROLLER_H

@class NSMutableArray, RBSProcessIdentity, NSString, NSMapTable, SBFSceneWorkspaceController;
@protocol SBFSceneWorkspaceControlling, BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBSystemUISceneController : NSObject <SBFSceneWorkspaceControlling, BSDescriptionProviding>

 {
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    NSMutableArray *_sceneControllers;
    NSUInteger _sceneIDGeneration;
}


@property (readonly, nonatomic) RBSProcessIdentity *clientProcessIdentity; // ivar: _clientProcessIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *jobLabel; // ivar: _jobLabel
@property (readonly, nonatomic) CGFloat level; // ivar: _level
@property (readonly, nonatomic) NSMapTable *sceneControllersByWindowScene; // ivar: _sceneControllersByWindowScene
@property (readonly, nonatomic) SBFSceneWorkspaceController *sceneWorkspaceController; // ivar: _sceneWorkspaceController
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *traitsRole; // ivar: _traitsRole


+(id)_setupInfo;
-(BOOL)enumerateScenesWithBlock:(id)arg0 ;
-(id)__newSceneIdentifierForWindowScene:(id)arg0 ;
-(id)_createNewSceneControllerForWindowScene:(id)arg0 withSceneRequestOptions:(id)arg1 ;
-(id)_newAppSceneRequestOptionsForWindowScene:(id)arg0 ;
-(id)_newAppSceneRequestOptionsWithOptionsForWindowScene:(id)arg0 specification:(id)arg1 ;
-(id)_newAppSceneRequestOptionsWithSceneIdentifier:(id)arg0 ;
-(id)_newAppSceneRequestOptionsWithSceneIdentifier:(id)arg0 specification:(id)arg1 ;
-(id)_newSceneControllerForWindowScene:(id)arg0 sceneRequestOptions:(id)arg1 traitsRole:(id)arg2 level:(CGFloat)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSceneWorkspaceIdentifier:(id)arg0 clientProcessIdentity:(id)arg1 traitsRole:(id)arg2 jobLabel:(id)arg3 level:(CGFloat)arg4 ;
-(id)sceneFromIdentityToken:(id)arg0 ;
-(id)sceneFromIdentityTokenStringRepresentation:(id)arg0 ;
-(id)sceneWorkspaceControllerForProcessIdentity:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)createSceneForProcessIdentity:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg0 processIdentity:(id)arg1 completion:(id)arg2 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif