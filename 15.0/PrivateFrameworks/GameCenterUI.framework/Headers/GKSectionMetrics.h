// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSECTIONMETRICS_H
#define GKSECTIONMETRICS_H

@class NSDictionary;


#import "GKGridLayoutMetrics.h"

@interface GKSectionMetrics : GKGridLayoutMetrics

@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) CGFloat calculatedItemHeight;
@property (nonatomic) CGFloat calculatedItemHeightCache; // ivar: _calculatedItemHeightCache
@property (nonatomic) CGFloat desiredItemHeight; // ivar: _desiredItemHeight
@property (nonatomic) CGFloat desiredItemWidth; // ivar: _desiredItemWidth
@property (nonatomic) CGFloat flowColumnWidth; // ivar: _flowColumnWidth
@property (nonatomic) NSUInteger flowMaxColumnCount; // ivar: _flowMaxColumnCount
@property (nonatomic) BOOL incrementalRevealConsumesPadding; // ivar: _incrementalRevealConsumesPadding
@property (nonatomic) NSUInteger incrementalRevealItemCount; // ivar: _incrementalRevealItemCount
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (retain, nonatomic) NSDictionary *itemHeightList; // ivar: _itemHeightList
@property (nonatomic) NSUInteger lastLineItemAlignment; // ivar: _lastLineItemAlignment
@property (nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing
@property (nonatomic) CGFloat marginBetweenItems; // ivar: _marginBetweenItems
@property (nonatomic) NSUInteger maximumVisibleItemCount; // ivar: _maximumVisibleItemCount
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) CGFloat sectionHeaderHeight;
@property (nonatomic) BOOL sectionHeadersShouldPin;
@property (nonatomic) BOOL shouldAlwaysIncludeShowMore; // ivar: _shouldAlwaysIncludeShowMore
@property (nonatomic) BOOL shouldShowSectionHeadersWhenNoItems; // ivar: _shouldShowSectionHeadersWhenNoItems
@property (nonatomic) CGFloat showMoreHeight;
@property (nonatomic) BOOL useViewSizeForFlowMaxColumnCount; // ivar: _useViewSizeForFlowMaxColumnCount


+(id)metricsForIdiom:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)flowMaxColumnCountForViewWidth:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdiom:(NSInteger)arg0 ;
-(id)localDescription;
-(struct CGSize )itemSizeForCollectionView:(id)arg0 ;


@end


#endif