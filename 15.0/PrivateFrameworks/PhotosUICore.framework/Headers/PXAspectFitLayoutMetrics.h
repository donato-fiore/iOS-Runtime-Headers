// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASPECTFITLAYOUTMETRICS_H
#define PXASPECTFITLAYOUTMETRICS_H



#import "PXLayoutMetrics.h"

@interface PXAspectFitLayoutMetrics : PXLayoutMetrics

@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) CGFloat interTileSpacing; // ivar: _interTileSpacing
@property (nonatomic) NSInteger maxTilesPerRow; // ivar: _maxTilesPerRow
@property (nonatomic) CGFloat minRowAspectRatio; // ivar: _minRowAspectRatio
@property (nonatomic) NSInteger minTilesPerRow; // ivar: _minTilesPerRow


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif