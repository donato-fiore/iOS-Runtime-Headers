// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYGRIDLAYOUTMETRICS_H
#define PXCURATEDLIBRARYGRIDLAYOUTMETRICS_H



#import "PXLayoutMetrics.h"

@interface PXCuratedLibraryGridLayoutMetrics : PXLayoutMetrics

@property (nonatomic) CGFloat headerAspectRatio; // ivar: _headerAspectRatio
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) CGFloat itemAspectRatio; // ivar: _itemAspectRatio
@property (nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (nonatomic) NSInteger numberOfPrecedingAssets; // ivar: _numberOfPrecedingAssets
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (nonatomic) NSInteger style; // ivar: _style


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif