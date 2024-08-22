// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINDISPLAYLAYOUTSTATEMANAGER_H
#define SBMAINDISPLAYLAYOUTSTATEMANAGER_H



#import "SBLayoutStateManager.h"
#import "SBMainDisplaySceneManager.h"
#import "SBMainWorkspace.h"
#import "SBPlatformController.h"
#import "SBRecentAppLayouts.h"

@interface SBMainDisplayLayoutStateManager : SBLayoutStateManager

@property (readonly, nonatomic) SBMainDisplaySceneManager *_mainDisplaySceneManager;
@property (readonly, nonatomic) SBMainWorkspace *_mainWorkspace;
@property (readonly, nonatomic) SBPlatformController *_platformController;
@property (readonly, nonatomic) SBRecentAppLayouts *_recentAppLayouts;


+(Class)_layoutStateClass;
-(BOOL)_doesSceneIDSpecifyPrimaryScene:(id)arg0 forApplicationIdentifier:(id)arg1 sceneSessionRole:(id)arg2 ;
-(BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg0 ;
-(id)_applicationSceneEntityFromApplicationBundleIdentifier:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)_layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)_mostRecentAppLayoutForBundleIdentifier:(id)arg0 ignoringUniqueIdentifiers:(id)arg1 ;
-(id)_mostRecentAppLayoutMatchingWorkspaceUniqueIdentifiers:(id)arg0 ;
-(id)_sceneIDIfAppLayoutContainsPrimarySceneIDForBundleIdentifier:(id)arg0 bundleIdentifier:(id)arg1 sceneSessionRole:(id)arg2 ;
-(id)defaultSceneIdentifierForBundleIdentifier:(id)arg0 targetContentIdentifier:(id)arg1 allowCanMatches:(BOOL)arg2 preferNewScene:(BOOL)arg3 visibleSceneIdentifiers:(id)arg4 excludingSceneIdentifiers:(id)arg5 sceneSessionRole:(id)arg6 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)primarySceneIdentifierForBundleIdentifier:(id)arg0 sceneSessionRole:(id)arg1 ;


@end


#endif