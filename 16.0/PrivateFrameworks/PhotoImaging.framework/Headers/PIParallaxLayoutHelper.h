// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXLAYOUTHELPER_H
#define PIPARALLAXLAYOUTHELPER_H

@class PFParallaxLayoutHelper, CIContext, CIImage;



@interface PIParallaxLayoutHelper : PFParallaxLayoutHelper {
    CIContext *_context;
    CIImage *_matte;
}




-(id)initWithCIContext:(id)arg0 matte:(id)arg1 parallaxClassification:(NSUInteger)arg2 initialRect:(struct CGRect )arg3 imageSize:(struct CGSize )arg4 effectiveAcceptableRect:(struct CGRect )arg5 effectivePreferredRect:(struct CGRect )arg6 layoutConfiguration:(id)arg7 ;
-(id)initWithParallaxClassification:(NSUInteger)arg0 initialRect:(struct CGRect )arg1 imageSize:(struct CGSize )arg2 effectiveAcceptableRect:(struct CGRect )arg3 effectivePreferredRect:(struct CGRect )arg4 layoutConfiguration:(id)arg5 ;
-(id)intermediateWithInactiveStrategy:(NSUInteger)arg0 intermediate:(id)arg1 ;
-(id)intermediateWithOverlapStrategy:(NSUInteger)arg0 intermediate:(id)arg1 ;
-(id)pixelBasedIntermediateWithOverlapStrategy:(NSUInteger)arg0 intermediate:(id)arg1 translationY:(CGFloat)arg2 ;
-(id)scoreIntermediate:(id)arg0 ;


@end


#endif