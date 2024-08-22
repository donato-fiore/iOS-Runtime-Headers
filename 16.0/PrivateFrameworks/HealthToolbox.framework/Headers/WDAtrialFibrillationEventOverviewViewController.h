// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDATRIALFIBRILLATIONEVENTOVERVIEWVIEWCONTROLLER_H
#define WDATRIALFIBRILLATIONEVENTOVERVIEWVIEWCONTROLLER_H

@class HKTableViewController, NSString, HKDisplayType, HKFeatureStatus, HKKeyValueDomain, NSDate, HRAtrialFibrillationOnboardingManager, NSArray, HKFeatureStatusManager, UITapGestureRecognizer;
@protocol HRAtrialFibrillationOnboardingManagerDelegate, UITextViewDelegate, HKOnboardingSetupViewDelegate, HKFeatureStatusProvidingObserver, WDDataListViewControllerDataProvider, HKDataMetadataSectionProtocol;


#import "WDProfile.h"

@interface WDAtrialFibrillationEventOverviewViewController : HKTableViewController <HRAtrialFibrillationOnboardingManagerDelegate, UITextViewDelegate, HKOnboardingSetupViewDelegate, HKFeatureStatusProvidingObserver>



@property (retain, nonatomic) NSObject<WDDataListViewControllerDataProvider> *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger detectionState; // ivar: _detectionState
@property (retain, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (nonatomic, getter=isFavorited) BOOL favorited;
@property (retain, nonatomic) HKFeatureStatus *featureStatus; // ivar: _featureStatus
@property (nonatomic) BOOL firstViewDidLayoutSubviews; // ivar: _firstViewDidLayoutSubviews
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKKeyValueDomain *keyValueDomain; // ivar: _keyValueDomain
@property (retain, nonatomic) NSDate *latestAnalyzedSampleDate; // ivar: _latestAnalyzedSampleDate
@property (retain, nonatomic) NSObject<HKDataMetadataSectionProtocol> *metaDataSection; // ivar: _metaDataSection
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) HRAtrialFibrillationOnboardingManager *onboardingManager; // ivar: _onboardingManager
@property (retain, nonatomic) WDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSArray *sectionsToDisplay; // ivar: _sectionsToDisplay
@property (retain, nonatomic) HKFeatureStatusManager *statusManager; // ivar: _statusManager
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalSampleCount; // ivar: _totalSampleCount
@property (retain, nonatomic) UITapGestureRecognizer *tripleTapToSettingsRecognizer; // ivar: _tripleTapToSettingsRecognizer
@property (nonatomic) NSInteger visibleSampleCount; // ivar: _visibleSampleCount


-(BOOL)_hasDetailViewController;
-(CGFloat)adjustedSafeAreaInsetTop;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_sectionIndexForSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_atrialFibrillationDetectionRescindedHeaderView;
-(id)_atrialFibrillationSetupContainerView;
-(id)_cellForAFibEducationalMaterialInTable:(id)arg0 atIndex:(NSInteger)arg1 ;
-(id)_cellForAFibEventInTable:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_cellForDataSourcesAndAccess;
-(id)_cellForDataTypeDescription;
-(id)_cellForFavorites;
-(id)_cellForIRN2ConsentForm;
-(id)_cellForRegulatory;
-(id)_cellForShowAll;
-(id)_pushDataSourcesAndAccessController;
-(id)_pushShowAllViewController;
-(id)_sectionHeaderViewWithTitle:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 mode:(NSInteger)arg2 ;
-(id)makeInternalSettingsControllerWithHealthStore:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)userConfigurationRowsToDisplay;
-(void)_getLatestAnalyzedSampleDate;
-(void)_reloadAllData;
-(void)_reloadAtrialFibrillationSetupTableHeaderView;
-(void)_reloadTableViewAndScrollToTop;
-(void)_showInternalSettingsViewController;
-(void)_startOnboardingForFirstTime:(BOOL)arg0 ;
-(void)_updateDetectionState;
-(void)beginOnboardingForOnboardingSetupView:(id)arg0 ;
-(void)dealloc;
-(void)didCompleteOnboarding;
-(void)didDismissOnboarding;
-(void)didEnableAtrialFibrillationNotifications;
-(void)didSelectRegulatoryRow;
-(void)featureStatusCellTappedAtIndexPath:(id)arg0 ;
-(void)featureStatusProviding:(id)arg0 didUpdateFeatureStatus:(id)arg1 ;
-(void)launchOnboardingToReenableFeature;
-(void)recomputeTotalSampleCount;
-(void)reloadFavoritesSection;
-(void)reloadFeatureStatusSection;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif