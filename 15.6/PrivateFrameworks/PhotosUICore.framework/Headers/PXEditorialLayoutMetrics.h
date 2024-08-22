// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXEDITORIALLAYOUTMETRICS_H
#define PXEDITORIALLAYOUTMETRICS_H



#import "PXLayoutMetrics.h"

@interface PXEditorialLayoutMetrics : PXLayoutMetrics

@property (nonatomic) CGFloat headerHeight; // ivar: _headerHeight
@property (nonatomic) CGFloat interTileSpacing; // ivar: _interTileSpacing
@property (nonatomic) NSUInteger lowerItemCountThreshold; // ivar: _lowerItemCountThreshold
@property (nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) BOOL useNewImplementation; // ivar: _useNewImplementation
@property (nonatomic) BOOL useSaliency; // ivar: _useSaliency


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif