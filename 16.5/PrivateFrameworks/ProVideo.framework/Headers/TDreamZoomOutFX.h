// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMZOOMOUTFX_H
#define TDREAMZOOMOUTFX_H



#import "TDreamProgramWrapper.h"

@interface TDreamZoomOutFX : TDreamProgramWrapper {
    int aspectRatioUniform;
    int radiusUniform;
    int centerUniform;
    int scaleUniform;
    int rotacionUniform;
}


@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (nonatomic) CGPoint center; // ivar: _center
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (nonatomic) int rotacion; // ivar: _rotacion
@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)init;
-(void)adjustAspectRatio;
-(void)setSize:(struct CGSize )arg0 ;
-(void)setUniforms;


@end


#endif