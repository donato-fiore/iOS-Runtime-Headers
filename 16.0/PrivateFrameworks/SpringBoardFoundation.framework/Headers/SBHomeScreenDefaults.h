// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMESCREENDEFAULTS_H
#define SBHOMESCREENDEFAULTS_H

@class NSArray, NSString;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL automaticallyAddsNewApplications;
@property (nonatomic) BOOL enableModalWidgetDiscoverabilityForTesting;
@property (copy, nonatomic) NSArray *focusModesRequiringIntroduction;
@property (copy, nonatomic) NSString *overriddenScreenType;
@property (nonatomic) BOOL pagesHaveEverBeenHidden;
@property (nonatomic) BOOL shouldAddDefaultWidgetsToHomeScreen;
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
@property (nonatomic) BOOL showsHomeScreenSearchAffordance;
@property (nonatomic, getter=isSidebarPinned) BOOL sidebarPinned;
@property (nonatomic) BOOL userDidUndoSuggestedWidget;
@property (nonatomic) BOOL userHasDeletedSuggestedWidget;
@property (nonatomic, getter=isWidgetScalingEnabled) BOOL widgetScalingEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif