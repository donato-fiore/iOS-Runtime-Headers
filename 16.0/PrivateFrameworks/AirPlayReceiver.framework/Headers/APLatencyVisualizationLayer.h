// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APLATENCYVISUALIZATIONLAYER_H
#define APLATENCYVISUALIZATIONLAYER_H

@class CALayer;



@interface APLatencyVisualizationLayer : CALayer {
    CGFloat _dotOffset;
    CGFloat _dotDiameter;
    CGFloat _dotSpeed;
    CGFloat _dotSpeedX;
    CGFloat _dotSpeedY;
    *void _timeContext;
    *unk _getAbsoluteTime;
}




-(id)init:(*unk)arg0 timeContext:(*void)arg1 zPosition:(int)arg2 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif