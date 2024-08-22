// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDPROFILE_H
#define WDPROFILE_H

@class HKChartDataCacheController, HKDateCache, NSString, HKDisplayCategoryController, HKDisplayTypeController, HKHealthRecordsStore, HKHealthStore, HKManualEntryValidationController, HKSampleTypeDateRangeController, HKSelectedTimeScopeController, HKUCUMUnitDisplayConverter, HKUnitPreferenceController, HKSampleTypeUpdateController, _HKWheelchairUseCharacteristicCache;
@protocol UIStateRestoring;

#import <Foundation/Foundation.h>

#import "WDFavoriteDisplayTypesController.h"
#import "WDNotificationManager.h"
#import "WDSourceOrderController.h"
#import "WDUserActivityManager.h"
#import "WDUserDefaults.h"

@interface WDProfile : NSObject <UIStateRestoring>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) HKChartDataCacheController *dataCacheController; // ivar: _dataCacheController
@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayCategoryController *displayCategoryController; // ivar: _displayCategoryController
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (readonly, nonatomic) WDFavoriteDisplayTypesController *favoriteDisplayTypesController; // ivar: _favoriteDisplayTypesController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore; // ivar: _healthRecordsStore
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKManualEntryValidationController *manualEntryValidationController; // ivar: _manualEntryValidationController
@property (readonly, nonatomic) WDNotificationManager *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) Class objectRestorationClass;
@property (readonly, nonatomic) NSString *presentationContext;
@property (readonly, nonatomic) NSObject<UIStateRestoring> *restorationParent;
@property (readonly, nonatomic) HKSampleTypeDateRangeController *sampleTypeDateRangeController; // ivar: _sampleTypeDateRangeController
@property (readonly, nonatomic) HKSelectedTimeScopeController *selectedTimeScopeController; // ivar: _selectedTimeScopeController
@property (readonly, nonatomic) WDSourceOrderController *sourceOrderController; // ivar: _sourceOrderController
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKUCUMUnitDisplayConverter *ucumDisplayConverter; // ivar: _ucumDisplayConverter
@property (readonly, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController
@property (readonly, nonatomic) HKSampleTypeUpdateController *updateController; // ivar: _updateController
@property (readonly, nonatomic) WDUserActivityManager *userActivityManager; // ivar: _userActivityManager
@property (readonly, nonatomic) WDUserDefaults *userDefaults; // ivar: _userDefaults
@property (readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;


-(id)_createHealthStore;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;


@end


#endif