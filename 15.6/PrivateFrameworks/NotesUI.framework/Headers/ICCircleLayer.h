// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCIRCLELAYER_H
#define ICCIRCLELAYER_H

@class CALayer;



@interface ICCircleLayer : CALayer

@property (retain, nonatomic) *CGColor fillColor; // ivar: _fillColor
@property (retain, nonatomic) *CGColor strokeColor; // ivar: _strokeColor
@property CGFloat strokeWidth; // ivar: _strokeWidth


-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif