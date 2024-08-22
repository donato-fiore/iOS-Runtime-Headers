// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHLISTENINGOUTERCIRCLESLAYER_H
#define SHLISTENINGOUTERCIRCLESLAYER_H

@class CAMediaTimingFunction, NSArray;


#import "SHPaletteLayer.h"

@interface SHListeningOuterCirclesLayer : SHPaletteLayer

@property (readonly, nonatomic) CAMediaTimingFunction *inOutQuartTimingFunction;
@property (readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;
@property (retain, nonatomic) NSArray *outerCircleLayers; // ivar: _outerCircleLayers


-(id)buildOuterCircleLayers;
-(id)outerCircleCoreBorderWidthAnimation;
-(id)outerCircleCoreScaleAnimation;
-(id)outerCircleCoreSizeAnimation;
-(id)scaleNullAnimation;
-(void)addCoreAnimationToOuterCircleLayer:(id)arg0 withStartOffset:(CGFloat)arg1 ;
-(void)addScaleAnimationToCircleLayer:(id)arg0 ;
-(void)layoutSublayers;
-(void)setup;
-(void)startListeningAnimation;


@end


#endif