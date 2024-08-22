// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXYEARSLAYOUTMETRICS_H
#define PXYEARSLAYOUTMETRICS_H



#import "PXLayoutMetrics.h"

@interface PXYearsLayoutMetrics : PXLayoutMetrics

@property (nonatomic) CGFloat defaultItemAspectRatio; // ivar: _defaultItemAspectRatio
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) CGFloat multiColumnAspectRatio; // ivar: _multiColumnAspectRatio
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) NSInteger sizeClass; // ivar: _sizeClass


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif