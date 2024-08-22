// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOVERLAYROOMAPPLICATIONITEMS_H
#define HKOVERLAYROOMAPPLICATIONITEMS_H

@class HKHealthStore;

#import <Foundation/Foundation.h>

#import "HKDisplayCategoryController.h"
#import "HKChartDataCacheController.h"
#import "HKDateCache.h"
#import "HKDisplayTypeController.h"
#import "HKSampleTypeDateRangeController.h"
#import "HKSampleTypeUpdateController.h"
#import "HKSelectedTimeScopeController.h"
#import "HKUnitPreferenceController.h"

@interface HKOverlayRoomApplicationItems : NSObject

@property (retain, nonatomic) HKDisplayCategoryController *categoryController; // ivar: _categoryController
@property (retain, nonatomic) HKChartDataCacheController *chartDataCacheController; // ivar: _chartDataCacheController
@property (retain, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKSampleTypeDateRangeController *sampleDateRangeController; // ivar: _sampleDateRangeController
@property (retain, nonatomic) HKSampleTypeUpdateController *sampleTypeUpdateController; // ivar: _sampleTypeUpdateController
@property (retain, nonatomic) HKSelectedTimeScopeController *timeScopeController; // ivar: _timeScopeController
@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


+(id)applicationItemsWithItems:(id)arg0 ;


@end


#endif