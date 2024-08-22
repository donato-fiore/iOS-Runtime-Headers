// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMAINDISPLAYLAYOUTSTATEMANAGER_H
#define SBMAINDISPLAYLAYOUTSTATEMANAGER_H



#import "SBLayoutStateManager.h"
#import "SBApplicationController.h"
#import "SBMainWorkspace.h"
#import "SBPlatformController.h"
#import "SBRecentAppLayouts.h"

@interface SBMainDisplayLayoutStateManager : SBLayoutStateManager

@property (readonly, nonatomic) SBApplicationController *_applicationController;
@property (readonly, nonatomic) SBMainWorkspace *_mainWorkspace;
@property (readonly, nonatomic) SBPlatformController *_platformController;
@property (readonly, nonatomic) SBRecentAppLayouts *_recentAppLayouts;


+(Class)_layoutStateClass;
+(id)_initialLayoutStateWithDisplayOrdinal:(NSInteger)arg0 isDisplayExternal:(BOOL)arg1 ;
-(BOOL)_doesSceneIDSpecifyPrimaryScene:(id)arg0 forApplicationIdentifier:(id)arg1 sceneSessionRole:(id)arg2 ;
-(BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg0 ;
-(id)_applicationSceneEntityFromApplicationBundleIdentifier:(id)arg0 uniqueIdentifier:(id)arg1 displayIdentity:(id)arg2 ;
-(id)_layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)_layoutStateForDisplayIdentity:(id)arg0 ;
-(id)_mostRecentAppLayoutForBundleIdentifier:(id)arg0 ignoringUniqueIdentifiers:(id)arg1 chamoisWindowingUIEnabled:(BOOL)arg2 ;
-(id)_mostRecentAppLayoutMatchingAnyUniqueIdentifier:(id)arg0 chamoisWindowingUIEnabled:(BOOL)arg1 ;
-(id)_sceneIDIfAppLayoutContainsPrimarySceneIDForBundleIdentifier:(id)arg0 bundleIdentifier:(id)arg1 sceneSessionRole:(id)arg2 ;
-(id)_sceneManagerForDisplayIdentity:(id)arg0 ;
-(id)_switcherControllerForDisplayIdentity:(id)arg0 ;
-(id)defaultSceneIdentifierForBundleIdentifier:(id)arg0 targetContentIdentifier:(id)arg1 allowCanMatches:(BOOL)arg2 preferNewScene:(BOOL)arg3 visibleSceneIdentifiers:(id)arg4 excludingSceneIdentifiers:(id)arg5 sceneSessionRole:(id)arg6 ;
-(id)defaultSceneIdentifierForBundleIdentifier:(id)arg0 targetContentIdentifier:(id)arg1 allowCanMatches:(BOOL)arg2 preferNewScene:(BOOL)arg3 visibleSceneIdentifiers:(id)arg4 excludingSceneIdentifiers:(id)arg5 sceneSessionRole:(id)arg6 preferredDisplay:(id)arg7 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)primarySceneIdentifierForBundleIdentifier:(id)arg0 sceneSessionRole:(id)arg1 displayIdentity:(id)arg2 ;


@end


#endif