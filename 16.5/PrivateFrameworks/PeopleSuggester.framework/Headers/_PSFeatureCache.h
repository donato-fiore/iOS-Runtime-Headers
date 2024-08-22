// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSFEATURECACHE_H
#define _PSFEATURECACHE_H

@class NSSet, _CDInteractionStore, NSArray, NSMutableDictionary, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "_PSPredictionContext.h"
#import "_PSHistogramFeatureData.h"
#import "_PSShareSheetEphemeralFeatureManager.h"

@interface _PSFeatureCache : NSObject {
    _PSPredictionContext *_context;
    NSSet *_candidates;
    _CDInteractionStore *_store;
    _PSHistogramFeatureData *_histogramFeatureData;
    NSArray *_caches;
    NSMutableDictionary *_cache;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSUserDefaults *_psDefaults;
    NSUInteger _timeDelay;
    NSUInteger _leeway;
}


@property (retain, nonatomic) _PSShareSheetEphemeralFeatureManager *ephemeralFeatureManager; // ivar: _ephemeralFeatureManager


-(id)addSelfToCandidates:(id)arg0 ;
-(id)computeEphemeralFeaturesWithCandidates:(id)arg0 context:(id)arg1 ;
-(id)fetchFeaturesWithCandidates:(id)arg0 context:(id)arg1 ;
-(id)getDeviceIdentifier;
-(id)getFeatureValueForLabeledDataStore:(id)arg0 ;
-(id)getHistogramFeatureData;
-(id)initWithPredictionContext:(id)arg0 candidates:(id)arg1 caches:(id)arg2 store:(id)arg3 ;
-(id)privacyMitigateFeatures:(id)arg0 ;
-(void)invalidateAndRefreshCache;
-(void)refreshDurableCachesWithCandidates:(id)arg0 ;
-(void)replaceEphemeralFeaturesWithCache:(id)arg0 ;
-(void)saveToLabeledDataStoreWithSessionID:(id)arg0 ;
-(void)saveToVirtualStore;
-(void)setFeatureValueForFeatureName:(int)arg0 featureValue:(id)arg1 candidate:(id)arg2 ;
-(void)setPredictionContextWithContext:(id)arg0 ;


@end


#endif