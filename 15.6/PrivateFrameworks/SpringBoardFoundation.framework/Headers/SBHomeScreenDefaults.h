// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHOMESCREENDEFAULTS_H
#define SBHOMESCREENDEFAULTS_H

@class NSString, NSDate;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL automaticallyAddsNewApplications;
@property (nonatomic) BOOL enableModalWidgetDiscoverabilityForTesting;
@property (nonatomic, getter=isLayoutLowDensity) BOOL layoutLowDensity;
@property (nonatomic, getter=isLayoutRestrictedWidgets) BOOL layoutRestrictedWidgets;
@property (copy, nonatomic) NSString *overriddenScreenType;
@property (nonatomic) BOOL pagesHaveEverBeenHidden;
@property (nonatomic) BOOL shouldAddDefaultWidgetsToHomeScreen;
@property (nonatomic) BOOL shouldAutoFillFavoriteList;
@property (nonatomic) BOOL shouldFudgeShortcutsToCauseMaximumPain;
@property (nonatomic) BOOL shouldHideReportWidgetStackRotationQuickAction;
@property (nonatomic) BOOL shouldPrepareDefaultTodayList;
@property (nonatomic) BOOL shouldPrepareStackForDefaultTodayList;
@property (nonatomic) BOOL shouldShowInternalWidgets;
@property (nonatomic) BOOL shouldShowLibraryEducationView;
@property (nonatomic) BOOL shouldShowWidgetIntroductionPopover;
@property (nonatomic) BOOL shouldUpgradeEnableWidgetSuggestions;
@property (nonatomic) BOOL shouldUseLargeIcons;
@property (nonatomic) BOOL showsBadgesInAppLibrary;
@property (nonatomic, getter=hasSidebarEverBeenVisible) BOOL sidebarEverBeenVisible;
@property (copy, nonatomic) NSDate *sidebarLearningCadenceCommenceDate;
@property (nonatomic) NSInteger sidebarLearningCadenceEpoch;
@property (nonatomic, getter=isSidebarPinned) BOOL sidebarPinned;
@property (nonatomic, getter=isSidebarVisible) BOOL sidebarVisible;
@property (nonatomic) BOOL userDidUndoSuggestedWidget;
@property (nonatomic) BOOL userHasDeletedSuggestedWidget;
@property (nonatomic, getter=isWidgetScalingEnabled) BOOL widgetScalingEnabled;


-(BOOL)hasLayoutLowDensityBeenAltered;
-(void)_bindAndRegisterDefaults;


@end


#endif