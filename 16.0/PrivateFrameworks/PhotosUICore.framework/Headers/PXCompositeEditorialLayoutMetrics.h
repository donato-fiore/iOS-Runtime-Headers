// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCOMPOSITEEDITORIALLAYOUTMETRICS_H
#define PXCOMPOSITEEDITORIALLAYOUTMETRICS_H



#import "PXLayoutMetrics.h"
#import "PXCompositeEditorialLayoutSpec.h"

@interface PXCompositeEditorialLayoutMetrics : PXLayoutMetrics

@property (readonly, nonatomic) PXCompositeEditorialLayoutSpec *editorialLayoutSpec; // ivar: _editorialLayoutSpec
@property (nonatomic) CGFloat interTileSpacing; // ivar: _interTileSpacing
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) BOOL useSaliency; // ivar: _useSaliency


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif