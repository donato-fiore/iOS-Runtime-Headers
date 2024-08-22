// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROCIRCULARPROGRESSLAYER_H
#define MIROCIRCULARPROGRESSLAYER_H

@class CALayer, UIColor;



@interface MiroCircularProgressLayer : CALayer

@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (nonatomic) CGFloat arcLineWidth; // ivar: _arcLineWidth
@property (nonatomic) CGFloat circleLineWidth; // ivar: _circleLineWidth
@property (nonatomic) float progress; // ivar: _progress
@property (retain, nonatomic) UIColor *progressColor; // ivar: _progressColor


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif