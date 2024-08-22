// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKVALUEDATAPROVIDER_H
#define HKVALUEDATAPROVIDER_H

@class NSHashTable, NSString, HKHealthStore;
@protocol HKDateCacheObserver, HKSampleTypeUpdateControllerObserver;

#import <Foundation/Foundation.h>

#import "HKFetchOperation.h"
#import "HKDateCache.h"
#import "HKDisplayType.h"

@interface HKValueDataProvider : NSObject <HKDateCacheObserver, HKSampleTypeUpdateControllerObserver>

 {
    BOOL _resultsLoaded;
    BOOL _needsToReFetchValue;
    id *_value;
    HKFetchOperation *_outstandingFetchOperation;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (readonly, nonatomic) BOOL hasLoadedData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *value;


-(BOOL)_currentlyFetchingValue;
-(BOOL)_requiresValueFetch;
-(id)currentValue;
-(id)fetchOperationWithCompletion:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 updateController:(id)arg1 dateCache:(id)arg2 displayType:(id)arg3 ;
-(id)secondaryValue;
-(void)_alertObserversDidUpdateValues;
-(void)_fetchValueWithRetryCount:(NSInteger)arg0 ;
-(void)_handleUnitPreferencesDidChangeNotification:(id)arg0 ;
-(void)_refreshValueIfNecessary;
-(void)_setNeedsReFetchValue;
-(void)_transitionToFetchFailure;
-(void)_updateValueWithValue:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dateCacheDidUpdate:(id)arg0 onNotification:(id)arg1 ;
-(void)dealloc;
-(void)didUpdateValue;
-(void)invalidateValue;
-(void)removeObserver:(id)arg0 ;
-(void)unitPreferencesDidUpdate;
-(void)updateController:(id)arg0 didReceiveHighFrequencyUpdateForType:(id)arg1 ;
-(void)updateController:(id)arg0 didReceiveUpdateForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3 recoveringFromError:(BOOL)arg4 ;


@end


#endif