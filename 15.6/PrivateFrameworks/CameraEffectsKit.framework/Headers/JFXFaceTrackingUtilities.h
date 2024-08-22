// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXFACETRACKINGUTILITIES_H
#define JFXFACETRACKINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface JFXFaceTrackingUtilities : NSObject



+(BOOL)isFaceAnchorInRange:(id)arg0 ;
+(CGFloat)rollAngleFromFaceAnchor:(id)arg0 forInterfaceOrientation:(NSInteger)arg1 ;
+(id)JFX_faceAnchorWithFaceAnchor:(id)arg0 forInterfaceOrientation:(NSInteger)arg1 ;
+(id)pointOnFaceMesh;
+(struct ? )JFX_projectionMatrixWithFaceAnchor:(id)arg0 bufferSize:(struct CGSize )arg1 ;
+(struct ? )adjustIntrinsics:(struct ? )arg0 forRenderSize:(struct CGSize )arg1 capturedSize:(struct CGSize )arg2 interfaceOrientation:(NSInteger)arg3 ;
+(struct CGRect )faceRectInImageWithFaceAnchor:(id)arg0 invertY:(BOOL)arg1 interfaceOrientation:(NSInteger)arg2 imageResolution:(struct CGSize *)arg3 ;
+(struct CGSize )faceRectScaleFactorForInterfaceOrientation:(NSInteger)arg0 andDeviceInterfaceOrientation:(NSInteger)arg1 ;


@end


#endif