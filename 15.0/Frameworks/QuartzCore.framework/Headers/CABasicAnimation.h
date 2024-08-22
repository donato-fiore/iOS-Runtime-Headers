// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CABASICANIMATION_H
#define CABASICANIMATION_H



#import "CAPropertyAnimation.h"

@interface CABasicAnimation : CAPropertyAnimation

@property (retain) id *byValue;
@property CGFloat endAngle;
@property (retain) id *fromValue;
@property BOOL roundsToInteger;
@property CGFloat startAngle;
@property (retain) id *toValue;


-(*void)_copyRenderAnimationForLayer:(id)arg0 ;
-(BOOL)_setCARenderAnimation:(*void)arg0 layer:(id)arg1 ;
-(CGFloat)_timeFunction:(CGFloat)arg0 ;
-(void)CA_prepareRenderValue;
-(void)applyForTime:(CGFloat)arg0 presentationObject:(id)arg1 modelObject:(id)arg2 ;


@end


#endif