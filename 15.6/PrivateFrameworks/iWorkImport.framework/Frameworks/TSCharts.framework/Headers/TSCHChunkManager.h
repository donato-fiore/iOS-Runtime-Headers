// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHUNKMANAGER_H
#define TSCHCHUNKMANAGER_H


#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"
#import "TSCHChunkMap.h"

@interface TSCHChunkManager : NSObject {
    TSCHChartInfo *_weakChart;
    TSCHChunkMap *_cachedChunkMap;
}




-(BOOL)hasBackgroundLayerForPieChart;
-(BOOL)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(NSUInteger)arg0 ;
-(BOOL)lastChunkForSeriesIndex:(NSUInteger)arg0 currentChunk:(NSUInteger)arg1 chunkStyle:(NSUInteger)arg2 ;
-(BOOL)p_hasBackgroundFillForChart:(id)arg0 ;
-(BOOL)p_hasBackgroundLayerForPieChartForChart:(id)arg0 ;
-(BOOL)p_isMultiDataForChart:(id)arg0 ;
-(BOOL)p_legendOnForChart:(id)arg0 ;
-(BOOL)p_supportsByWedgeDeliveryStyle:(id)arg0 ;
-(BOOL)p_titleOnForChart:(id)arg0 ;
-(NSUInteger)chartDeliveryStyleFromTSDDeliveryStyle:(NSUInteger)arg0 ;
-(NSUInteger)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(NSUInteger)arg0 ;
-(NSUInteger)chunkCountForChartDeliveryStyle:(NSUInteger)arg0 ;
-(NSUInteger)p_chunkCountForChart:(id)arg0 chunkStyle:(NSUInteger)arg1 chunkMap:(id)arg2 ;
-(NSUInteger)textureDeliveryStyleFromDeliveryString:(id)arg0 ;
-(id)animationFiltersWithDefaultFilters:(id)arg0 ;
-(id)containedTextForChartDeliveryStyle:(NSUInteger)arg0 chunkIndex:(NSUInteger)arg1 displayName:(id)arg2 ;
-(id)initWithChartInfo:(id)arg0 ;
-(id)p_allChartDeliveryStylesLocalized:(BOOL)arg0 ;
-(id)p_allLocalizedChartDeliveryStyles;
-(id)p_allNonLocalizedChartDeliveryStyles;
-(id)p_backgroundStringForChartWithTitle:(id)arg0 ;
-(id)p_cachedChunkMap;
-(id)p_chart;
-(id)p_chunkMapForChart:(id)arg0 chunkStyle:(NSUInteger)arg1 forceUpdateCache:(BOOL)arg2 ;
-(id)p_createChunkMapForChart:(id)arg0 chunkStyle:(NSUInteger)arg1 ;
-(id)p_makeAllChartDeliveryStylesLocalized:(BOOL)arg0 ;
-(id)p_nameForMultiDataSetCategory:(NSUInteger)arg0 chart:(id)arg1 ;
-(id)p_seriesNameForSeriesAtIndex:(NSUInteger)arg0 withPrefix:(id)arg1 chart:(id)arg2 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg0 animationFilter:(id)arg1 ;
-(void)adjustRangeForRep:(id)arg0 chunkIndex:(NSUInteger)arg1 finalTexture:(BOOL)arg2 seriesStart:(*NSInteger)arg3 seriesCount:(*NSInteger)arg4 ;
-(void)adjustRangeForRep:(id)arg0 seriesIndex:(NSUInteger)arg1 chunkIndex:(NSUInteger)arg2 finalTexture:(BOOL)arg3 outGroupStart:(*NSInteger)arg4 outGroupCount:(*NSInteger)arg5 ;
-(void)updateCache:(NSUInteger)arg0 ;


@end


#endif