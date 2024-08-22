// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HBXVIEWCONTROLLERFACTORY_H
#define HBXVIEWCONTROLLERFACTORY_H

@class HKHealthChartFactory;

#import <Foundation/Foundation.h>

#import "WDProfile.h"
#import "HBXUnitSupport.h"

@interface HBXViewControllerFactory : NSObject

@property (retain, nonatomic) HKHealthChartFactory *chartFactory; // ivar: _chartFactory
@property (retain, nonatomic) WDProfile *profile; // ivar: _profile
@property (retain, nonatomic) HBXUnitSupport *unitSupport; // ivar: _unitSupport


+(id)factories;
+(id)sharedInstance;
+(id)sharedInstanceForHealthStore:(id)arg0 ;
+(struct os_unfair_recursive_lock_s )factoriesLock;
+(void)resetSharedInstances;
-(id)createActivityChartForActivityMoveMode:(NSInteger)arg0 displayDate:(id)arg1 activityOptions:(NSUInteger)arg2 chartSharableModel:(id)arg3 ;
-(id)createAppSourcesViewControllerUsingInsetStyling:(BOOL)arg0 ;
-(id)createBuddyViewControllerWithHealthDetailsLast:(BOOL)arg0 ;
-(id)createChartForTypeIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 minimumSize:(struct CGSize )arg3 disableXAxis:(BOOL)arg4 ;
-(id)createClinicalDocumentOverviewViewController;
-(id)createContactConsolidationControllerInViewController:(id)arg0 ;
-(id)createDataSourcesTableViewController:(id)arg0 ;
-(id)createDeletedSourceMessageViewControllerForSource:(id)arg0 ;
-(id)createDeviceSourcesViewControllerUsingInsetStyling:(BOOL)arg0 ;
-(id)createDeviceStoredDataViewControllerForDevice:(id)arg0 withHealthStore:(id)arg1 usingInsetStyling:(BOOL)arg2 ;
-(id)createElectrocardiogramDataMetadataViewControllerWithElectrocardiogram:(id)arg0 dataProvider:(id)arg1 ;
-(id)createElectrocardiogramListDataProvider;
-(id)createFavoritesController;
-(id)createHKUnitPreferenceController;
-(id)createInteractiveChartForType:(id)arg0 preferredOverlay:(NSInteger)arg1 displayDate:(id)arg2 ;
-(id)createInteractiveChartForType:(id)arg0 preferredOverlay:(NSInteger)arg1 displayDateInterval:(id)arg2 ;
-(id)createListViewController:(id)arg0 ;
-(id)createLocalDeviceStoredDataViewControllerForSource:(id)arg0 withHealthStore:(id)arg1 usingInsetStyling:(BOOL)arg2 ;
-(id)createResearchStudySourcesViewControllerUsingInsetStyling:(BOOL)arg0 restorationStudyBundleIdentifier:(id)arg1 ;
-(id)createSingleAppAuthorizationViewControllerUsingInsetStyling:(BOOL)arg0 restorationApplicationBundleIdentifier:(id)arg1 ;
-(id)createSourcesViewControllerUsingInsetStyling:(BOOL)arg0 ;
-(id)createUnitPreferencesController:(id)arg0 ;
-(id)createWatchStoredDataViewControllerForSource:(id)arg0 withHealthStore:(id)arg1 usingInsetStyling:(BOOL)arg2 ;
-(id)detailViewControllerForSourceModel:(id)arg0 withHealthStore:(id)arg1 ;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)localizedDisplayNameForUnit:(id)arg0 ;
-(id)localizedPreferredUnitDisplayNameForType:(id)arg0 ;
-(id)localizedPreferredUnitDisplayNameForType:(id)arg0 nameContext:(NSInteger)arg1 ;
-(id)localizedUnitDisplayNameForDisplayType:(id)arg0 nameContext:(NSInteger)arg1 ;
-(id)notificationManager;
-(id)preferredUnitForType:(id)arg0 ;
-(id)unitStringForType:(id)arg0 ;
-(void)createAndStartExportForViewController:(id)arg0 ;
-(void)fetchUserDefaultForKey:(id)arg0 withCallback:(id)arg1 ;
-(void)updatePreferredUnit:(id)arg0 forType:(id)arg1 ;


@end


#endif