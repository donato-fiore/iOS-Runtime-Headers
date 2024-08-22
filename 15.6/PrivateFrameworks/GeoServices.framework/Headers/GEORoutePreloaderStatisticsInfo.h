// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTEPRELOADERSTATISTICSINFO_H
#define GEOROUTEPRELOADERSTATISTICSINFO_H

@class geo_isolater, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface GEORoutePreloaderStatisticsInfo : NSObject {
    geo_isolater *_isolation;
    int _transportType;
    CGFloat _startMonotonicTimestamp;
    NSUInteger _nonPreloadedTilesLoadedFromNetwork;
    NSUInteger _nonPreloadedTilesFailed;
    NSUInteger _counts;
    NSMutableDictionary *_tileTypeToCount;
    NSMutableDictionary *_tileTypeToBytes;
    NSMutableDictionary *_tileTypeToMissedCount;
    NSMutableDictionary *_tileTypeToMissedBytes;
}




-(id)init;
-(id)initWithTransportType:(int)arg0 ;
-(void)finishAndReportIfNecessaryForDistance:(CGFloat)arg0 ;
-(void)incrementTileLoadStatistic:(NSInteger)arg0 amount:(NSUInteger)arg1 ;
-(void)loadedTileKey:(struct _GEOTileKey *)arg0 source:(NSInteger)arg1 sizeInBytes:(NSUInteger)arg2 ;
-(void)missedTileKey:(struct _GEOTileKey *)arg0 loadedSuccessfully:(BOOL)arg1 sizeInBytes:(NSUInteger)arg2 ;


@end


#endif