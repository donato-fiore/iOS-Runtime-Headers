// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXOVERLAYFEEDLAYOUTMETRICS_H
#define PXOVERLAYFEEDLAYOUTMETRICS_H



#import "PXLayoutMetrics.h"

@interface PXOverlayFeedLayoutMetrics : PXLayoutMetrics

@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) CGFloat firstRowTopMargin; // ivar: _firstRowTopMargin
@property (nonatomic) CGSize interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGFloat largeItemAspectRatio; // ivar: _largeItemAspectRatio
@property (nonatomic) CGFloat regularItemAspectRatio; // ivar: _regularItemAspectRatio


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif