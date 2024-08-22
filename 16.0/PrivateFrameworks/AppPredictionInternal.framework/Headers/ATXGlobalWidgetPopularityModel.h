// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXGLOBALWIDGETPOPULARITYMODEL_H
#define ATXGLOBALWIDGETPOPULARITYMODEL_H

@class NSSet, _PASCFBurstTrie, ATXMemoryPressureMonitor, NSDictionary, NSString;
@protocol ATXMemoryPressureObserver;

#import <Foundation/Foundation.h>


@interface ATXGlobalWidgetPopularityModel : NSObject <ATXMemoryPressureObserver>

 {
    NSSet *_bundleIdAndKinds;
    _PASCFBurstTrie *_priorsTrie;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
    BOOL _assetOffloadedDueToMemoryPressure;
    NSDictionary *_priors;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)modelWithAllAvailableWidgets;
-(CGFloat)scoreForBundleIdAndKind:(id)arg0 scalingFactor:(CGFloat)arg1 ;
-(id)_computePriors;
-(id)initWithBundleIdAndKinds:(id)arg0 ;
-(void)dealloc;
-(void)handleMemoryPressure;
-(void)unloadGlobalPriorsAsset;


@end


#endif