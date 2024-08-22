// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXGLOBALAPPMODEAFFINITYMODEL_H
#define ATXGLOBALAPPMODEAFFINITYMODEL_H

@class _PASCFBurstTrie, ATXMemoryPressureMonitor, NSDictionary, NSSet, NSString;
@protocol ATXMemoryPressureObserver;

#import <Foundation/Foundation.h>


@interface ATXGlobalAppModeAffinityModel : NSObject <ATXMemoryPressureObserver>

 {
    _PASCFBurstTrie *_index;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
    BOOL _assetOffloadedDueToMemoryPressure;
    NSDictionary *_normalizedPriors;
}


@property (readonly, nonatomic) NSSet *bundleIds; // ivar: _bundleIds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)modelWithAllInstalledAppsKnownToSpringBoard;
+(id)supportedModeTypes;
-(CGFloat)_priorForMode:(NSUInteger)arg0 bundleIdIndex:(int)arg1 priors:(id)arg2 ;
-(CGFloat)scoreForMode:(NSUInteger)arg0 bundleId:(id)arg1 scalingFactor:(CGFloat)arg2 ;
-(NSUInteger)modeIndexForMode:(NSUInteger)arg0 ;
-(id)_computePriors;
-(id)initWithBundleIds:(id)arg0 ;
-(id)loadGlobalPriorsAsset;
-(int)indexForBundleId:(id)arg0 ;
-(void)_normalizePriors:(id)arg0 maximumPrior:(CGFloat)arg1 ;
-(void)dealloc;
-(void)handleMemoryPressure;
-(void)unloadGlobalPriorsAsset;


@end


#endif