// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCHEADLINECLUSTERINGRULES_H
#define FCHEADLINECLUSTERINGRULES_H


#import <Foundation/Foundation.h>

#import "FCSolConfiguration.h"

@interface FCHeadlineClusteringRules : NSObject

@property (nonatomic) CGFloat autoFavoriteClusterMaxSizeMultiplier; // ivar: _autoFavoriteClusterMaxSizeMultiplier
@property (nonatomic) CGFloat autoFavoriteClusterMinSizeMultiplier; // ivar: _autoFavoriteClusterMinSizeMultiplier
@property (readonly, nonatomic) BOOL enableOptimizedLayout; // ivar: _enableOptimizedLayout
@property (readonly, nonatomic) BOOL enforcePublisherCap; // ivar: _enforcePublisherCap
@property (readonly, nonatomic) CGFloat expandedAutofavoriteClusterMaxSizeMultiplier; // ivar: _expandedAutofavoriteClusterMaxSizeMultiplier
@property (readonly, nonatomic) CGFloat expandedAutofavoriteClusterMinSizeMultiplier; // ivar: _expandedAutofavoriteClusterMinSizeMultiplier
@property (readonly, nonatomic) NSUInteger maxClusterSize; // ivar: _maxClusterSize
@property (nonatomic) NSUInteger maxClusterSizeAutoFavorite; // ivar: _maxClusterSizeAutoFavorite
@property (readonly, nonatomic) NSUInteger maxEvergreenArticles; // ivar: _maxEvergreenArticles
@property (readonly, nonatomic) CGFloat maxExpandedAutofavoriteGroupCandidateRatio; // ivar: _maxExpandedAutofavoriteGroupCandidateRatio
@property (readonly, nonatomic) NSUInteger maxIdealClusterSize; // ivar: _maxIdealClusterSize
@property (nonatomic) NSUInteger maxIdealClusterSizeAutoFavorite; // ivar: _maxIdealClusterSizeAutoFavorite
@property (readonly, nonatomic) NSUInteger maxNativeAdCount; // ivar: _maxNativeAdCount
@property (readonly, nonatomic) NSUInteger maxPublisherOccurrences; // ivar: _maxPublisherOccurrences
@property (readonly, nonatomic) NSUInteger maxUnpaidArticles; // ivar: _maxUnpaidArticles
@property (readonly, nonatomic) NSUInteger minClusterSize; // ivar: _minClusterSize
@property (nonatomic) NSUInteger minClusterSizeAutoFavorite; // ivar: _minClusterSizeAutoFavorite
@property (readonly, nonatomic) NSUInteger minIdealClusterSize; // ivar: _minIdealClusterSize
@property (nonatomic) NSUInteger minIdealClusterSizeAutoFavorite; // ivar: _minIdealClusterSizeAutoFavorite
@property (readonly, nonatomic) CGFloat minSubscribedChannelRatioForUGroup; // ivar: _minSubscribedChannelRatioForUGroup
@property (readonly, nonatomic) NSUInteger optimizedLayoutIncrementUnit; // ivar: _optimizedLayoutIncrementUnit
@property (readonly, nonatomic) NSUInteger optimizedLayoutSizeThreshold; // ivar: _optimizedLayoutSizeThreshold
@property (retain, nonatomic) FCSolConfiguration *solConfiguration; // ivar: _solConfiguration


+(id)rulesWithTreatment:(id)arg0 configurationSet:(NSInteger)arg1 deviceIsiPad:(BOOL)arg2 limitUnpaidArticles:(BOOL)arg3 enforcePublisherCap:(BOOL)arg4 minClusterSizeiPhone:(NSInteger)arg5 maxClusterSizeiPhone:(NSInteger)arg6 minClusterSizeiPad:(NSInteger)arg7 maxClusterSizeiPad:(NSInteger)arg8 todayFeedEnabled:(BOOL)arg9 ;
+(id)rulesWithTreatment:(id)arg0 configurationSet:(NSInteger)arg1 deviceIsiPad:(BOOL)arg2 limitUnpaidArticles:(BOOL)arg3 enforcePublisherCap:(BOOL)arg4 todayFeedEnabled:(BOOL)arg5 ;
+(id)rulesWithTreatment:(id)arg0 deviceIsiPad:(BOOL)arg1 limitUnpaidArticles:(BOOL)arg2 enforcePublisherCap:(BOOL)arg3 minClusterSizeiPhone:(NSInteger)arg4 maxClusterSizeiPhone:(NSInteger)arg5 minClusterSizeiPad:(NSInteger)arg6 maxClusterSizeiPad:(NSInteger)arg7 todayFeedEnabled:(BOOL)arg8 ;
+(id)rulesWithTreatment:(id)arg0 deviceIsiPad:(BOOL)arg1 limitUnpaidArticles:(BOOL)arg2 enforcePublisherCap:(BOOL)arg3 todayFeedEnabled:(BOOL)arg4 ;
-(id)init;
-(id)initWithMinClusterSize:(NSUInteger)arg0 maxClusterSize:(NSUInteger)arg1 minIdealClusterSize:(NSUInteger)arg2 maxIdealClusterSize:(NSUInteger)arg3 minClusterSizeAutoFavorite:(NSUInteger)arg4 maxClusterSizeAutoFavorite:(NSUInteger)arg5 minIdealClusterSizeAutoFavorite:(NSUInteger)arg6 maxIdealClusterSizeAutoFavorite:(NSUInteger)arg7 maxPublisherOccurrences:(NSUInteger)arg8 enforcePublisherCap:(BOOL)arg9 maxUnpaidArticles:(NSUInteger)arg10 maxEvergreenArticles:(NSUInteger)arg11 enableOptimizedLayout:(BOOL)arg12 optimizedLayoutSizeThreshold:(NSUInteger)arg13 optimizedLayoutIncrementUnit:(NSUInteger)arg14 solConfiguration:(id)arg15 minSubscribedChannelRatioForUGroup:(CGFloat)arg16 maxExpandedAutofavoriteGroupCandidateRatio:(CGFloat)arg17 expandedAutofavoriteClusterMinSizeMultiplier:(CGFloat)arg18 expandedAutofavoriteClusterMaxSizeMultiplier:(CGFloat)arg19 maxNativeAdCount:(NSUInteger)arg20 ;


@end


#endif