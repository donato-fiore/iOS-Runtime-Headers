// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCLIPPINGVIEW_H
#define SXCLIPPINGVIEW_H

@class UIView;


#import "SXClippingLayer.h"

@interface SXClippingView : UIView

@property (nonatomic) NSUInteger clippingMode; // ivar: _clippingMode
@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) SXClippingLayer *layer;


-(id)initWithContentView:(id)arg0 ;


@end


#endif