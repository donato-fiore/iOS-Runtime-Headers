// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLFREQUENTLOCATIONPROCESSOR_H
#define PLFREQUENTLOCATIONPROCESSOR_H


#import <Foundation/Foundation.h>


@interface PLFrequentLocationProcessor : NSObject



+(CGFloat)_computeWeekendFrequencyForMoments:(id)arg0 ;
+(id)_clustersFromLocationsOfInterest:(id)arg0 forItems:(id)arg1 remainingItemsToCluster:(*id)arg2 progressBlock:(id)arg3 ;
+(id)_coarseClustersForItems:(id)arg0 progressBlock:(id)arg1 ;
+(id)_finalClustersFromCoarseClusters:(id)arg0 progressBlock:(id)arg1 ;
+(id)processFrequentLocationsWithItems:(id)arg0 locationsOfInterest:(id)arg1 progressBlock:(id)arg2 ;


@end


#endif