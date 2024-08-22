// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCHARTDATACACHECONTROLLER_H
#define HKCHARTDATACACHECONTROLLER_H

@class NSArray, NSMutableDictionary, NSMutableArray, NSString, HKHealthStore;
@protocol HKSampleTypeUpdateControllerObserver;

#import <Foundation/Foundation.h>

#import "HKActivitySummaryDataProvider.h"
#import "HKUnitPreferenceController.h"
#import "HKSampleTypeUpdateController.h"

@interface HKChartDataCacheController : NSObject <HKSampleTypeUpdateControllerObserver>

 {
    NSArray *_chartCachesByTimeScopeAndDisplayTypeIdentifier;
    NSMutableDictionary *_chartCachesByDisplayTypeIdentifier;
    NSMutableArray *_chartCachesByCustomDisplayType;
    NSMutableDictionary *_currentValueDataProvidersByDisplayType;
    NSMutableDictionary *_alternateCurrentValueDataProvidersByDisplayType;
    NSMutableDictionary *_secondaryValueDataProviders;
    HKActivitySummaryDataProvider *_activitySummaryDataProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly) Class superclass;
@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController
@property (retain, nonatomic) HKSampleTypeUpdateController *updateController; // ivar: _updateController


-(BOOL)_anySampleShouldInvalidateCache:(id)arg0 ;
-(id)_chartCacheForDisplayType:(id)arg0 timeScope:(NSInteger)arg1 chartCachesByDisplayTypeIdentifier:(id)arg2 ;
-(id)_chartCacheIdentifiersFromSamples:(id)arg0 ;
-(id)_chartCacheIdentifiersFromStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)_createAlternateCurrentValueDataProviderForDisplayType:(id)arg0 healthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 ;
-(id)_createCurrentValueDataProviderForDisplayType:(id)arg0 healthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 ;
-(id)_generateChartCacheForDisplayType:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_timeScopeBasedChartCacheForDisplayType:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)activitySummaryDataProviderWithHealthStore:(id)arg0 dateCache:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 ;
-(id)allInteractiveChartsCaches;
-(id)alternateCurrentValueDataProviderForDisplayType:(id)arg0 healthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 ;
-(id)currentValueDataProviderForDisplayType:(id)arg0 healthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 ;
-(id)findCustomCachesForDisplayType:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 unitController:(id)arg1 updateController:(id)arg2 ;
-(id)interactiveChartsCacheForDisplayType:(id)arg0 timeScope:(NSInteger)arg1 ;
-(void)_removeCustomCachesForDisplayTypeIdentifier:(NSInteger)arg0 ;
-(void)_subscribeForUpdatesForDisplayType:(id)arg0 ;
-(void)addCustomChartCache:(id)arg0 forDisplayType:(id)arg1 ;
-(void)removeCachesForDisplayTypeIdentifier:(NSInteger)arg0 ;
-(void)updateController:(id)arg0 didReceiveHighFrequencyUpdateForType:(id)arg1 ;
-(void)updateController:(id)arg0 didReceiveUpdateForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3 recoveringFromError:(BOOL)arg4 ;


@end


#endif