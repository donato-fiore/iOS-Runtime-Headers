// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHLISTENINGINNERCIRCLESLAYER_H
#define SHLISTENINGINNERCIRCLESLAYER_H

@class CAMediaTimingFunction, NSArray;


#import "SHPaletteLayer.h"

@interface SHListeningInnerCirclesLayer : SHPaletteLayer

@property (readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
@property (retain, nonatomic) NSArray *innerCircleLayers; // ivar: _innerCircleLayers
@property (readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;


-(id)buildInnerCircleLayers;
-(id)innerCircleCoreAnimation;
-(id)innerCircleScaleNullAnimation;
-(void)addCoreAnimationToInnerCircleLayer:(id)arg0 withStartOffset:(CGFloat)arg1 ;
-(void)addScaleNullAnimationToInnerCircleLayer:(id)arg0 ;
-(void)layoutSublayers;
-(void)setup;
-(void)startListeningAnimation;


@end


#endif