// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKVISUALIZER_H
#define ABPKVISUALIZER_H


#import <Foundation/Foundation.h>


@interface ABPKVisualizer : NSObject {
    *__CVPixelBufferPool _pixelBufferPoolBGRA;
    *__CVPixelBufferPool _pixelBufferPoolYUV;
    ? _highConfidenceColor;
    ? _mediumConfidenceColor;
    ? _lowConfidenceColor;
    *OpaqueVTPixelTransferSession _pixelTransferSession;
}




+(void)_drawRectOfSize:(int)arg0 posx:(int)arg1 posy:(int)arg2 pImage:(struct vImage_Buffer *)arg3 red:(unsigned char)arg4 green:(unsigned char)arg5 blue:(unsigned char)arg6 ;
-(BOOL)jointInImageDimensions:(struct CGSize )arg0 imageDimensions;
-(id)init;
-(int)drawFaceBbox:(struct __CVBuffer *)arg0 detectedBodies2d:(id)arg1 confidences:(id)arg2 skeletonDefinition:(id)arg3 overlayImage:(struct __CVBuffer *)arg4 color;
-(int)generateStickFigureImageFrom:(struct __CVBuffer *)arg0 detectedBodies2d:(id)arg1 confidences:(id)arg2 skeletonDefinition:(id)arg3 overlayImage:(struct __CVBuffer *)arg4 color:(BOOL)arg5 faceOnly;
-(void)dealloc;
-(void)drawFaceBboxEdgewithJoints:(id)arg0 withSkeletonDefinition:(id)arg1 fromPostion:(struct vImage_Buffer *)arg2 toPositionOnImagecolor;
-(void)overlayJoints:(id)arg0 withSkeletonDefinition:(id)arg1 confidences:(id)arg2 OnImage:(struct vImage_Buffer *)arg3 color:(BOOL)arg4 faceOnly;


@end


#endif