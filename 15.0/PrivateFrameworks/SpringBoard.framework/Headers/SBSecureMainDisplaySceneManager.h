// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSECUREMAINDISPLAYSCENEMANAGER_H
#define SBSECUREMAINDISPLAYSCENEMANAGER_H

@class NSString;
@protocol SBLayoutStateTransitionSceneEntityFrameProvider;


#import "SBSceneManager.h"

@interface SBSecureMainDisplaySceneManager : SBSceneManager <SBLayoutStateTransitionSceneEntityFrameProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)_applicationSceneHandleClass;
-(BOOL)_shouldAutoHostScene:(id)arg0 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(id)_createRootWindowScenePresentationBinder;
-(id)_sceneIdentifierForBundleIdentifier:(id)arg0 ;
-(id)newSceneIdentityForApplication:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)sceneLayoutViewController;
-(id)window;
-(struct CGRect )sceneEntityFrameForWorkspaceEntity:(id)arg0 inLayoutState:(id)arg1 ;
-(void)_noteDidChangeToVisibility:(NSUInteger)arg0 previouslyExisted:(BOOL)arg1 forScene:(id)arg2 ;
-(void)_setupLayoutStateTransitionCoordinator:(id)arg0 ;


@end


#endif