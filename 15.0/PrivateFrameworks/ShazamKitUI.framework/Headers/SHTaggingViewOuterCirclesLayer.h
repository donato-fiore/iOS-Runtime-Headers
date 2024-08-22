// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHTAGGINGVIEWOUTERCIRCLESLAYER_H
#define SHTAGGINGVIEWOUTERCIRCLESLAYER_H

@class CALayer, CAMediaTimingFunction, NSArray;



@interface SHTaggingViewOuterCirclesLayer : CALayer

@property (readonly, nonatomic) CAMediaTimingFunction *inOutQuartTimingFunction;
@property (readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;
@property (retain, nonatomic) NSArray *outerCircleLayers; // ivar: _outerCircleLayers


-(id)buildOuterCircleLayers;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)outerCircleCoreBorderWidthAnimation;
-(id)outerCircleCoreScaleAnimation;
-(id)outerCircleCoreSizeAnimation;
-(id)scaleNullAnimation;
-(void)addCoreAnimationToOuterCircleLayer:(id)arg0 withStartOffset:(CGFloat)arg1 ;
-(void)addScaleAnimationToCircleLayer:(id)arg0 ;
-(void)layoutSublayers;
-(void)setupSublayers;
-(void)startTaggingAnimation;


@end


#endif