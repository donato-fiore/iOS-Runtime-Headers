// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDELECTROCARDIOGRAMOVERVIEWVIEWCONTROLLER_H
#define WDELECTROCARDIOGRAMOVERVIEWVIEWCONTROLLER_H

@class HKTableViewController, NSNumber, NSString, HKDisplayType, HKFeatureStatus, HKFeatureStatusManager, HKElectrocardiogramMoreHealthDataProvider, HRElectrocardiogramOnboardingManager, UITapGestureRecognizer;
@protocol HRFeatureRegulatoryReenableFeatureActionDelegate, HRElectrocardiogramOnboardingManagerDelegate, WDElectrocardiogramFilterDataProviderDelegate, HKOnboardingSetupViewDelegate, HKFeatureStatusProvidingObserver, HKDataMetadataSectionProtocol;


#import "WDElectrocardiogramListDataProvider.h"
#import "WDElectrocardiogramFilterDataProvider.h"
#import "WDProfile.h"

@interface WDElectrocardiogramOverviewViewController : HKTableViewController <HRFeatureRegulatoryReenableFeatureActionDelegate, HRElectrocardiogramOnboardingManagerDelegate, WDElectrocardiogramFilterDataProviderDelegate, HKOnboardingSetupViewDelegate, HKFeatureStatusProvidingObserver>



@property (nonatomic) NSNumber *availabilityStateCache; // ivar: _availabilityStateCache
@property (retain, nonatomic) WDElectrocardiogramListDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayAboutRowBeforeOnboarding; // ivar: _displayAboutRowBeforeOnboarding
@property (retain, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (retain, nonatomic) NSObject<HKDataMetadataSectionProtocol> *educationSection; // ivar: _educationSection
@property (nonatomic, getter=isFavorited) BOOL favorited;
@property (retain, nonatomic) HKFeatureStatus *featureStatus; // ivar: _featureStatus
@property (retain, nonatomic) HKFeatureStatusManager *featureStatusManager; // ivar: _featureStatusManager
@property (retain, nonatomic) WDElectrocardiogramFilterDataProvider *filterDataProvider; // ivar: _filterDataProvider
@property (nonatomic) BOOL firstViewDidLayoutSubviews; // ivar: _firstViewDidLayoutSubviews
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) HKElectrocardiogramMoreHealthDataProvider *moreHealthDataProvider; // ivar: _moreHealthDataProvider
@property (retain, nonatomic) HRElectrocardiogramOnboardingManager *onboardingManager; // ivar: _onboardingManager
@property (nonatomic) NSInteger placeholderCellCount; // ivar: _placeholderCellCount
@property (weak, nonatomic) WDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tripleTapToSettingsRecognizer; // ivar: _tripleTapToSettingsRecognizer


-(BOOL)_isElectrocardiogramRecordingAgeGated;
-(BOOL)_shouldDisplayAboutRowBeforeOnboarding;
-(BOOL)_showUpgradeTileInProminentPosition;
-(BOOL)_userLocaleOnlySupportsECG1;
-(BOOL)shouldShowRecordingRescindedHeader;
-(CGFloat)adjustedSafeAreaInsetTop;
-(NSInteger)_availabilityStateToShowInSetupTableHeaderView;
-(NSInteger)_electrocardiogramRecordingRescindedStatus;
-(NSInteger)_filterTypeForDataSectionRow:(NSInteger)arg0 ;
-(NSInteger)availabilityState;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForDataSourcesAndAccess;
-(id)_cellForDescription;
-(id)_cellForFavorites;
-(id)_cellForRegulatoryPane;
-(id)_cellForSampleAtIndex:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)_cellWithDisclosureIndicatorAndText:(id)arg0 value:(id)arg1 ;
-(id)_dataListViewControllerForSummaryData;
-(id)_dataListViewControllerWithFilterType:(NSInteger)arg0 ;
-(id)_electrocardiogramSetupContainerViewWithUpgrade:(BOOL)arg0 ;
-(id)_recordingRescindedHeaderView;
-(id)_sectionHeaderViewWithTitle:(id)arg0 ;
-(id)_showAllResultsCellForType:(NSInteger)arg0 ;
-(id)_showAllResultsForSummarySharingProfile;
-(id)createDataProviderWithDisplayType:(id)arg0 profile:(id)arg1 mode:(NSInteger)arg2 ;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 mode:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(struct WDElectrocardiogramOverviewSectionInfo )sectionInfo;
-(struct WDElectrocardiogramOverviewUserConfigurationRowInfo )userConfigurationRowInfo;
-(void)_reloadAllSections;
-(void)_reloadElectrocardiogramSetupTableHeaderView;
-(void)_reloadMoreHealthSectionWithAnimation:(BOOL)arg0 ;
-(void)_reloadTableViewAndScrollToTop;
-(void)_removeUpgradeTileNotProminentIfNeeded;
-(void)_setTableHeaderViewWithUpgradeView:(BOOL)arg0 ;
-(void)_showDataSourcesAndAccessController;
-(void)_showUpgradeTileNotProminent;
-(void)_startOnboardingForFirstTime:(BOOL)arg0 ;
-(void)_startUpgrade;
-(void)beginOnboardingForOnboardingSetupView:(id)arg0 ;
-(void)dealloc;
-(void)didCompleteOnboarding;
-(void)didDismissOnboarding;
-(void)didSelectReenableFeatureForProductName:(id)arg0 ;
-(void)didTapOnElectrocardiogram:(id)arg0 ;
-(void)electrocardiogramFilterDataProvider:(id)arg0 didUpdateCount:(NSInteger)arg1 type:(NSInteger)arg2 ;
-(void)featureStatusProviding:(id)arg0 didUpdateFeatureStatus:(id)arg1 ;
-(void)reloadFavoritesSection;
-(void)showInternalSettings;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif