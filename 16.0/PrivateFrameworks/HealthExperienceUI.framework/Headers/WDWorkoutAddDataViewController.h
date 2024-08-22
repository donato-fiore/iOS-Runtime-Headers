// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDWORKOUTADDDATAVIEWCONTROLLER_H
#define WDWORKOUTADDDATAVIEWCONTROLLER_H

@class NSArray, HKQuantityType, NSString;
@protocol WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate;


#import "WDAddDataViewController.h"
#import "WDAddDataManualEntrySpinner.h"
#import "WDAddDataManualEntryItem.h"

@interface WDWorkoutAddDataViewController : WDAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate>

 {
    NSArray *_workoutActivityTypePairs;
    HKQuantityType *_distanceType;
    NSArray *_sectionsWithDistance;
    NSArray *_sectionsWithoutDistance;
    WDAddDataManualEntrySpinner *_activityTypeEntryItem;
    WDAddDataManualEntryItem *_distanceEntryItem;
    WDAddDataManualEntryItem *_activeEnergyEntryItem;
    WDAddDataManualEntryItem *_dateRangeEntryItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isExcludedActivityType:(NSUInteger)arg0 ;
-(NSInteger)_indexOfActivityType:(NSUInteger)arg0 ;
-(NSInteger)numberOfRowsInManualEntrySpinner:(id)arg0 ;
-(NSInteger)numberOfSections;
-(NSUInteger)_activityTypeForIndex:(NSInteger)arg0 ;
-(NSUInteger)_selectedActivityType;
-(id)_activeEnergyDisplayName;
-(id)_activityTypeDescriptionForIndex:(NSInteger)arg0 ;
-(id)_displayTypeForDistanceType:(id)arg0 ;
-(id)_displayTypeForIdentifier:(NSInteger)arg0 ;
-(id)_distanceDisplayName;
-(id)_generateSortedActivityTypes;
-(id)_quantityFromEntryItem:(id)arg0 unit:(id)arg1 ;
-(id)_sectionsForDistanceType:(id)arg0 ;
-(id)_totalDistance;
-(id)_totalEnergyBurned;
-(id)_unitForDistanceType:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3 dateCache:(id)arg4 ;
-(id)manualEntryItemsForSection:(NSInteger)arg0 ;
-(id)manualEntrySpinner:(id)arg0 titleForRow:(NSInteger)arg1 ;
-(void)_createEntryItems;
-(void)_updateCurrentDistanceTypeWithActivityType:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)manualEntryItemDidUpdate:(id)arg0 ;
-(void)saveHKObjectWithCompletion:(id)arg0 ;
-(void)unitPreferencesDidChange:(id)arg0 ;
-(void)validateDataWithCompletion:(id)arg0 ;


@end


#endif