// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGRIDLAYOUTMETRICS_H
#define PXGRIDLAYOUTMETRICS_H



#import "PXLayoutMetrics.h"

@interface PXGridLayoutMetrics : PXLayoutMetrics

@property (nonatomic) NSUInteger additionalTileCount; // ivar: _additionalTileCount
@property (nonatomic) NSInteger axis; // ivar: _axis
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) BOOL displaysHeaderTile; // ivar: _displaysHeaderTile
@property (nonatomic) CGSize footerSize; // ivar: _footerSize
@property (nonatomic) CGSize headerSize; // ivar: _headerSize
@property (nonatomic) CGSize headerSpacing; // ivar: _headerSpacing
@property (nonatomic) CGSize interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGSize itemSize; // ivar: _itemSize


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif