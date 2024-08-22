// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCLIPPINGLAYER_H
#define SXCLIPPINGLAYER_H

@class CALayer;


#import "SXLayer.h"

@interface SXClippingLayer : SXLayer

@property (nonatomic) NSUInteger clippingMode; // ivar: _clippingMode
@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (retain, nonatomic) CALayer *contentLayer; // ivar: _contentLayer


-(void)layoutForContentsRect;
-(void)layoutForMasking;
-(void)layoutSublayers;


@end


#endif