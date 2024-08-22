// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHTAGGINGVIEWINNERCIRCLESLAYER_H
#define SHTAGGINGVIEWINNERCIRCLESLAYER_H

@class CALayer, CAMediaTimingFunction, NSArray;



@interface SHTaggingViewInnerCirclesLayer : CALayer

@property (readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
@property (retain, nonatomic) NSArray *innerCircleLayers; // ivar: _innerCircleLayers
@property (readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;


-(id)buildInnerCircleLayers;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)innerCircleCoreAnimation;
-(id)innerCircleScaleNullAnimation;
-(void)addCoreAnimationToInnerCircleLayer:(id)arg0 withStartOffset:(CGFloat)arg1 ;
-(void)addScaleNullAnimationToInnerCircleLayer:(id)arg0 ;
-(void)layoutSublayers;
-(void)setupSublayers;
-(void)startTaggingAnimation;


@end


#endif