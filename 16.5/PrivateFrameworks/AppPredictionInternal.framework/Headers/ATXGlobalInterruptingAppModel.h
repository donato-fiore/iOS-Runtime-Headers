// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXGLOBALINTERRUPTINGAPPMODEL_H
#define ATXGLOBALINTERRUPTINGAPPMODEL_H

@class _PASCFBurstTrie, ATXMemoryPressureMonitor, NSDictionary, NSSet, NSString;
@protocol ATXMemoryPressureObserver;

#import <Foundation/Foundation.h>


@interface ATXGlobalInterruptingAppModel : NSObject <ATXMemoryPressureObserver>

 {
    _PASCFBurstTrie *_index;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
    BOOL _assetOffloadedDueToMemoryPressure;
    NSDictionary *_priors;
}


@property (readonly, nonatomic) NSSet *bundleIds; // ivar: _bundleIds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)modelWithAllInstalledAppsKnownToSpringBoard;
-(CGFloat)scoreForBundleId:(id)arg0 scalingFactor:(CGFloat)arg1 ;
-(id)_computePriors;
-(id)initWithBundleIds:(id)arg0 ;
-(id)loadGlobalPriorsAsset;
-(int)indexForBundleId:(id)arg0 ;
-(void)dealloc;
-(void)handleMemoryPressure;
-(void)unloadGlobalPriorsAsset;


@end


#endif