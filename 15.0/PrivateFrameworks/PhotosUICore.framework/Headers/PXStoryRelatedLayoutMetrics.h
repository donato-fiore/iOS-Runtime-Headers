// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYRELATEDLAYOUTMETRICS_H
#define PXSTORYRELATEDLAYOUTMETRICS_H



#import "PXLayoutMetrics.h"

@interface PXStoryRelatedLayoutMetrics : PXLayoutMetrics

@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (nonatomic) UIEdgeInsets margins; // ivar: _margins
@property (nonatomic) CGFloat offscreenFraction; // ivar: _offscreenFraction
@property (nonatomic) CGPoint scrollOffset; // ivar: _scrollOffset


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif