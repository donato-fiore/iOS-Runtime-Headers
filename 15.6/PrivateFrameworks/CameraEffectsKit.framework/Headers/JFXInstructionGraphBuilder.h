// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXINSTRUCTIONGRAPHBUILDER_H
#define JFXINSTRUCTIONGRAPHBUILDER_H


#import <Foundation/Foundation.h>


@interface JFXInstructionGraphBuilder : NSObject

@property (readonly, nonatomic) CGSize frameSize; // ivar: _frameSize
@property (readonly, nonatomic) CGSize outputSize; // ivar: _outputSize
@property (nonatomic) int renderingIntent; // ivar: _renderingIntent


+(CGFloat)JFX_scaleForMediaSize:(struct CGSize )arg0 mediaContentMode:(int)arg1 clipAspectRatio:(CGFloat)arg2 outputSize:(struct CGSize )arg3 outputContentMode:(int)arg4 ;
+(id)JFX_maskNode:(id)arg0 maskRect:(struct CGRect )arg1 basisSize:(struct CGSize )arg2 ;
+(id)JFX_transformNode:(id)arg0 scale:(CGFloat)arg1 ;
-(id)JFX_applyCustomRenderingPropertiesToInputNode:(id)arg0 customRendererProperties:(id)arg1 transformAnimation:(id)arg2 transformAnimationContentMode:(int)arg3 mediaScale:(CGFloat)arg4 ;
-(id)JFX_mediaTransformAnimationForPlayableElement:(id)arg0 liveTransform:(struct PVTransformAnimationInfo *)arg1 ;
-(id)_buildTestXFormAnimation:(struct ? )arg0 baseTransform:(struct CGAffineTransform )arg1 clipNaturalSize:(struct CGSize )arg2 ;
-(id)_sourceNodeForStillMediaItem:(id)arg0 sourceTransform:(struct CGAffineTransform )arg1 transformAnimation:(id)arg2 transformAnimationContentMode:(int)arg3 presentationRange:(struct ? )arg4 ;
-(id)_sourceNodeForVideoMediaItem:(id)arg0 sourceTransform:(struct CGAffineTransform )arg1 compositionTrackID:(int)arg2 transformAnimation:(id)arg3 transformAnimationContentMode:(int)arg4 ;
-(id)applyEffectStack:(id)arg0 presentationRange:(struct ? )arg1 toInput:(id)arg2 ;
-(id)applyEffectStack:(id)arg0 toInput:(id)arg1 ;
-(id)blendNodeForClipSourceNodes:(id)arg0 ;
-(id)initWithOutputSize:(struct CGSize )arg0 frameSize:(struct CGSize )arg1 ;
-(id)instructionGraphForPlayableElement:(id)arg0 presentationTimeRange:(struct ? )arg1 sourceTransform:(struct CGAffineTransform )arg2 compositionTrackID:(int)arg3 liveTransform:(struct PVTransformAnimationInfo *)arg4 excludingEffectType:(int)arg5 customRendererProperties:(id)arg6 ;
-(id)sourceNodeForGeneratorEffect:(id)arg0 effectRange:(struct ? )arg1 ;
-(id)sourceNodeForImageBuffer:(id)arg0 sourceTransform:(struct CGAffineTransform )arg1 ;
-(id)sourceNodeForMediaItem:(id)arg0 sourceTransform:(struct CGAffineTransform )arg1 compositionTrackID:(int)arg2 transformAnimation:(id)arg3 transformAnimationContentMode:(int)arg4 presentationTimeRange:(struct ? )arg5 mediaScale:(CGFloat)arg6 playableAspectRatio:(NSInteger)arg7 playableAspectRatioPreservationMode:(NSInteger)arg8 ;
-(struct CGAffineTransform )JFX_calculateCompositeNodeTransformForCropWithCompositeNodeOutputSize:(struct CGSize )arg0 mediaScale:(CGFloat)arg1 ;


@end


#endif