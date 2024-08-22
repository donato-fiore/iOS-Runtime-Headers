// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSPODCASTSIZEESTIMATION_H
#define NMSPODCASTSIZEESTIMATION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NMSPodcastSizeEstimation : NSObject {
    BOOL _empty;
    CGFloat _totalSizeDurationRatio;
    NSUInteger _totalAverageSize;
}


@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (retain) NSMutableDictionary *sizeInfoDict; // ivar: _sizeInfoDict


+(CGFloat)_defaultSizeDurationRatio;
+(NSUInteger)_defaultEstimatedSize;
+(NSUInteger)_minimumSizeThreshold;
-(BOOL)incrementSize:(NSUInteger)arg0 duration:(CGFloat)arg1 forFeedURL:(id)arg2 ;
-(CGFloat)_adjustedSizeDurationRatio:(CGFloat)arg0 ;
-(CGFloat)_totalSizeDurationRatio;
-(NSUInteger)_totalAverageSize;
-(NSUInteger)averageEpisodeSize;
-(NSUInteger)sizeForFeedURL:(id)arg0 duration:(CGFloat)arg1 feedProvidedSize:(NSUInteger)arg2 ;
-(id)_cachedPodcastSizeInfoDict;
-(id)init;
-(void)_setupFromCache;
-(void)synchronize;


@end


#endif