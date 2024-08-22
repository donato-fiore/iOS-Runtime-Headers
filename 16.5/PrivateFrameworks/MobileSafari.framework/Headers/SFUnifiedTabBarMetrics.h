// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUNIFIEDTABBARMETRICS_H
#define SFUNIFIEDTABBARMETRICS_H



#import "SFUnifiedBarMetrics.h"

@interface SFUnifiedTabBarMetrics : SFUnifiedBarMetrics

@property (readonly, nonatomic) CGFloat insetToRevealNextItem;
@property (readonly, nonatomic) CGFloat maximumActiveItemWidth;
@property (readonly, nonatomic) CGFloat minimumActiveItemWidth;
@property (readonly, nonatomic) CGFloat minimumActiveItemWidthRatio;
@property (readonly, nonatomic) CGFloat minimumInactiveItemWidth;
@property (nonatomic) NSUInteger sizeClass; // ivar: _sizeClass


+(CGFloat)minimumActiveItemWidthForSizeClass:(NSUInteger)arg0 ;
+(CGFloat)minimumInactiveItemWidthForSizeClass:(NSUInteger)arg0 ;
-(CGFloat)maximumItemSpacing;
-(CGFloat)minimumItemSpacing;


@end


#endif