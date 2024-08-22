// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPROGRESSARCLAYER_H
#define PLPROGRESSARCLAYER_H

@class CALayer;



@interface PLProgressArcLayer : CALayer

@property (nonatomic) CGFloat endAngle; // ivar: _endAngle
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (nonatomic) CGFloat startAngle; // ivar: _startAngle


-(id)init;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif