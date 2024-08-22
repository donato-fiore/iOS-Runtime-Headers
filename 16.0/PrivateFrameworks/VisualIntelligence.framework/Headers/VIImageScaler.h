// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIIMAGESCALER_H
#define VIIMAGESCALER_H


#import <Foundation/Foundation.h>


@interface VIImageScaler : NSObject {
    *OpaqueVTPixelTransferSession _transferSession;
    BOOL useFill;
    ? fillColor;
    ? defaultBlackOpaqueColor;
    NSUInteger scaleMode;
    BOOL needFill;
    CGRect entireImage;
}




-(id)init;
-(int)cropScaleImageFromSource:(struct __CVBuffer *)arg0 destination:(struct __CVBuffer *)arg1 normalizedBoundingBox:(struct CGRect )arg2 bottomLeftBoxOrigin:(BOOL)arg3 ;
-(int)cropScaleImageFromSource:(struct __CVBuffer *)arg0 destination:(struct __CVBuffer *)arg1 regionOfInterest:(struct CGRect )arg2 ;
-(int)scaleImageFromSource:(struct __CVBuffer *)arg0 destination:(struct __CVBuffer *)arg1 ;
-(int)setFillColorBGRA;
-(int)setScalingMode:(NSUInteger)arg0 ;
-(int)setVTTransferSessionProperties:(id)arg0 ;
-(int)unsetFillColor;
-(struct __CVBuffer *)createCroppedImageWithSource:(struct __CVBuffer *)arg0 regionOfInterest:(struct CGRect )arg1 ;
-(struct __CVBuffer *)createImageWithSource:(struct __CVBuffer *)arg0 format:(unsigned int)arg1 ;
-(struct __CVBuffer *)createScaledImageWithSource:(struct __CVBuffer *)arg0 size:(struct CGSize )arg1 ;
-(void)dealloc;


@end


#endif