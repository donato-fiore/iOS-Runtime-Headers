// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APUIAPPPREDICTIONVIEWCONTROLLER_H
#define APUIAPPPREDICTIONVIEWCONTROLLER_H

@class NSMutableDictionary, NSMutableSet, NSString, NSArray, _UILegibilitySettings, NSSet;
@protocol ATXHomeScreenSuggestionClientObserver, APUIAppIconGridViewDelegate, SBIconViewQuerying, SBIconLocationPresenting, SBHWidgetContextMenuControlling, SBHLegibility, LSApplicationWorkspaceObserverProtocol, APUIAppPredictionViewControllerDelegate;


#import "APUIWidgetViewController.h"
#import "APUIAppIconGridView.h"

@interface APUIAppPredictionViewController : APUIWidgetViewController <ATXHomeScreenSuggestionClientObserver, APUIAppIconGridViewDelegate, SBIconViewQuerying, SBIconLocationPresenting, SBHWidgetContextMenuControlling, SBHLegibility, LSApplicationWorkspaceObserverProtocol>

 {
    APUIAppIconGridView *_gridView;
    NSMutableDictionary *_bundleIdSuggestionMap;
    NSMutableSet *_installingBundleIds;
    NSString *_selectedBundleId;
    NSString *_selectedAppLocalizedName;
    NSMutableSet *_usedFallbacks;
}


@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APUIAppPredictionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger layoutSize;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic, getter=isOccluded) BOOL occluded; // ivar: _occluded
@property (nonatomic) UIEdgeInsets parentLayoutInsets; // ivar: _parentLayoutInsets
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (nonatomic, getter=isShowingAlert) BOOL showingAlert; // ivar: _showingAlert
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu; // ivar: _showingContextMenu
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteracting) BOOL userInteracting; // ivar: _userInteracting


+(id)_bundleIdentifierSetFromApplicationProxies:(id)arg0 ;
+(id)_bundleIdentifierSetFromApplicationRecords:(id)arg0 ;
-(BOOL)_canDismissSelectedSuggestion;
-(BOOL)_canShowWhileLocked;
-(BOOL)appIconGridView:(id)arg0 launchAppFromIcon:(id)arg1 ;
-(BOOL)appIconGridView:(id)arg0 shouldDisplayBadgeWithBundleIdentifier:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(BOOL)matchesWidgetUniqueID:(id)arg0 stackID:(id)arg1 ;
-(id)_fallbackBundleIds;
-(id)appIconGridView:(id)arg0 iconForApplicationWithBundleIdentifier:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 layoutSize:(NSUInteger)arg1 ;
-(id)initWithIdentifier:(id)arg0 layoutSize:(NSUInteger)arg1 mode:(NSUInteger)arg2 ;
-(void)_loadAppsInGridView:(id)arg0 ;
-(void)_updateGridViewForBundleIds:(id)arg0 ;
-(void)_updateLayoutInGridView:(id)arg0 ;
-(void)_updateUserInteractingState;
-(void)applicationInstallsDidStart:(id)arg0 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)didSelectApplicationShortcutItem:(id)arg0 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)suggestionClientDidRefreshProactiveWidgetLayouts:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)willShowContextMenuAtLocation:(struct CGPoint )arg0 ;


@end


#endif