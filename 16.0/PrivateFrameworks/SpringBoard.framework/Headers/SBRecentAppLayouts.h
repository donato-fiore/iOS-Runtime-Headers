// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBRECENTAPPLAYOUTS_H
#define SBRECENTAPPLAYOUTS_H

@class NSMutableArray, NSDictionary, NSOrderedSet, NSMutableDictionary, SBAppSwitcherDefaults, NSString;
@protocol SBApplicationRestrictionObserver, BSInvalidatable, SBRecentAppLayoutsDelegate;

#import <Foundation/Foundation.h>

#import "SBIconController.h"
#import "SBApplicationController.h"
#import "SBApplicationPlaceholderController.h"
#import "SBMainDisplaySceneManager.h"
#import "SBRecentAppLayoutsPersister.h"

@interface SBRecentAppLayouts : NSObject <SBApplicationRestrictionObserver>

 {
    NSMutableArray *_allRecents;
    NSMutableArray *_unhiddenRecents;
    NSDictionary *_allRecentsForBundleIdentifiers;
    NSDictionary *_unhiddenRecentsForBundleIdentifiers;
    NSDictionary *_allRecentDisplayItemsForBundleIdentifiers;
    NSDictionary *_unhiddenRecentDisplayItemsForBundleIdentifiers;
    NSOrderedSet *_continuousExposeIdentifiers;
    NSOrderedSet *_continuousExposeIdentifiersUsingSceneIdentity;
    NSMutableDictionary *_allowHiddenAppAssertions;
    SBAppSwitcherDefaults *_defaults;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBApplicationPlaceholderController *_placeholderController;
    SBMainDisplaySceneManager *_sceneManager;
    SBRecentAppLayoutsPersister *_persister;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBRecentAppLayoutsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_ignoresAppHiddenForDisplayItem:(id)arg0 ;
-(BOOL)_isApplicationSupported:(id)arg0 ;
-(BOOL)_isDisplayItemRestrictedOrUnsupported:(id)arg0 ;
-(BOOL)_isExistingSceneIdentifierValidForClaimedMultiwindowSupportInDisplayItem:(id)arg0 ;
-(BOOL)_loadStashedModelAtPath:(id)arg0 ;
-(BOOL)_stashModelToPath:(id)arg0 ;
-(BOOL)_transitionContextRepresentsAmbiguousLaunch:(id)arg0 forApplicationSceneEntity:(id)arg1 ;
-(NSInteger)_lastInteractionTime;
-(NSInteger)_nextInteractionTime;
-(id)_acquireAllowHiddenAppAssertionForBundleIdentifier:(id)arg0 reason:(id)arg1 ;
-(id)_appLayoutByAdjustingCenterRoleForContinuousExpose:(id)arg0 ;
-(id)_changeDescriptionForFilteringAppLayouts:(id)arg0 withDisplayItemTest:(id)arg1 ;
-(id)_changeDescriptionForFilteringRestrictedOrUnsupportedAppsFromAppLayouts:(id)arg0 ;
-(id)_changeDescriptionForFilteringRestrictedUnsupportedAndInvalidAppsFromAppLayouts:(id)arg0 ;
-(id)_displayItemLayoutRolesFromLegacyPrefsForLoadedDisplayItems:(id)arg0 ;
-(id)_legacyAppLayoutForItem:(id)arg0 layoutRole:(NSInteger)arg1 ;
-(id)_legacyAppLayoutsForDisplayItems:(id)arg0 layoutRolesMapping:(id)arg1 ;
-(id)_migrateDisplayItemIfNeeded:(id)arg0 ;
-(id)_ppt_currentModel;
-(id)_ppt_loadStashedModel;
-(id)_recentDisplayItemsFromLegacyPrefs;
-(id)_recentsFromPrefs;
-(id)continuousExposeIdentifierForDisplayItems:(id)arg0 ;
-(id)continuousExposeIdentifiers;
-(id)init;
-(id)initWithUserDefaults:(id)arg0 persister:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 placeholderController:(id)arg4 sceneManager:(id)arg5 ;
-(id)mostRecentAppLayoutIncludingHiddenAppLayouts:(BOOL)arg0 passingTest:(id)arg1 ;
-(id)recentDisplayItemsForBundleIdentifier:(id)arg0 includingHiddenAppLayouts:(BOOL)arg1 ;
-(id)recentsForBundleIdentifier:(id)arg0 includingHiddenAppLayouts:(BOOL)arg1 ;
-(id)recentsIncludingHiddenAppLayouts:(BOOL)arg0 ;
-(void)_addAllAppsToModel;
-(void)_addAllowHiddenAppAssertionForBundleIdentifier:(id)arg0 requestIdentifier:(id)arg1 ;
-(void)_filterRestrictedOrUnsupportedAppsFromRecents;
-(void)_filterRestrictedUnsupportedAndInvalidAppsFromRecents;
-(void)_iconVisibilityDidChange:(id)arg0 ;
-(void)_initializeRecents;
-(void)_installedApplicationsDidChange:(id)arg0 ;
-(void)_persistSoon;
-(void)_persistSynchronously;
-(void)_ppt_setModel:(id)arg0 ;
-(void)_removeAllowHiddenAppAssertionForBundleIdentifier:(id)arg0 requestIdentifier:(id)arg1 ;
-(void)_saveRecents;
-(void)_setRecents:(id)arg0 notifyForChangeDescription:(id)arg1 ;
-(void)_setUpStashedModelSettingsOutlets;
-(void)_validateAndUpdateRecents:(id)arg0 ;
-(void)addAppLayout:(id)arg0 afterAppLayout:(id)arg1 ;
-(void)addAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)addToFront:(id)arg0 ;
-(void)applicationRestrictionController:(id)arg0 didUpdateVisibleTags:(id)arg1 hiddenTags:(id)arg2 ;
-(void)dealloc;
-(void)hide:(id)arg0 ;
-(void)remove:(id)arg0 ;
-(void)removeAppLayouts:(id)arg0 ;
-(void)replaceAppLayout:(id)arg0 withAppLayout:(id)arg1 ;


@end


#endif