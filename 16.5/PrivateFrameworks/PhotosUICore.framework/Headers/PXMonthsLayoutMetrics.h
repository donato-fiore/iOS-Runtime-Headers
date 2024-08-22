// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMONTHSLAYOUTMETRICS_H
#define PXMONTHSLAYOUTMETRICS_H



#import "PXLayoutMetrics.h"

@interface PXMonthsLayoutMetrics : PXLayoutMetrics

@property (nonatomic) CGFloat chapterHeaderHeight; // ivar: _chapterHeaderHeight
@property (nonatomic) UIEdgeInsets chapterHeaderPadding; // ivar: _chapterHeaderPadding
@property (nonatomic) CGFloat defaultSectionAspectRatio; // ivar: _defaultSectionAspectRatio
@property (nonatomic) BOOL displaceTopLeadingCardTitle; // ivar: _displaceTopLeadingCardTitle
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) NSInteger sizeClass; // ivar: _sizeClass


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif