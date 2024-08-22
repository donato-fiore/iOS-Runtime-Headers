// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICARCLAYER_H
#define ICARCLAYER_H



#import "ICCircleLayer.h"

@interface ICArcLayer : ICCircleLayer

@property (nonatomic) BOOL drawClockwise; // ivar: _drawClockwise
@property (nonatomic) CGFloat endAngle; // ivar: _endAngle
@property (nonatomic) CGFloat startAngle; // ivar: _startAngle


-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif