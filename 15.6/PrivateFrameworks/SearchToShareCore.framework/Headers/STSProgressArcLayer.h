// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSPROGRESSARCLAYER_H
#define STSPROGRESSARCLAYER_H

@class CALayer;



@interface STSProgressArcLayer : CALayer

@property (nonatomic) CGFloat endAngle; // ivar: _endAngle
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (nonatomic) CGFloat startAngle; // ivar: _startAngle


-(id)init;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif