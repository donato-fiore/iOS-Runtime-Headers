// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLAGGREGATIONPROCESSOR_H
#define PLAGGREGATIONPROCESSOR_H

@class NSCalendar, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLAggregationProcessor : NSObject

@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSMutableDictionary *curatedAssetCountByMomentUUID; // ivar: _curatedAssetCountByMomentUUID


+(BOOL)isEnabled;
+(NSUInteger)maximumNumberOfAssetsPerAggregation;
+(NSUInteger)maximumNumberOfAssetsPerMoment;
+(NSUInteger)maximumNumberOfDaysPerAggregation;
+(void)initialize;
+(void)restoreDefaultEnablement;
+(void)setEnabled:(BOOL)arg0 ;
-(BOOL)_shouldAggregateMoment:(id)arg0 ;
-(id)_aggregationMomentClustersForMomentClusters:(id)arg0 ;
-(id)init;
-(id)processAggregationsWithSortedMomentClusters:(id)arg0 momentsContainedInOtherHighlights:(id)arg1 progressBlock:(id)arg2 ;
-(id)sortedNeighborMomentClustersOfMomentClusters:(id)arg0 forAllMomentClusters:(id)arg1 ;


@end


#endif