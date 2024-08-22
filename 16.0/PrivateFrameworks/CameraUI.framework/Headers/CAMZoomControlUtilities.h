// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMZOOMCONTROLUTILITIES_H
#define CAMZOOMCONTROLUTILITIES_H


#import <Foundation/Foundation.h>


@interface CAMZoomControlUtilities : NSObject



+(BOOL)shouldApplyContinuousZoomForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 videoStabilizationStrength:(NSInteger)arg3 zoomFactors:(*id)arg4 displayZoomFactors:(*id)arg5 ;
+(BOOL)shouldEmulateTripleCameraZoomForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 videoStabilizationStrength:(NSInteger)arg3 ;
+(BOOL)shouldEmulateWideDualCameraZoomForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 videoStabilizationStrength:(NSInteger)arg3 ;
+(CGFloat)_baseSingleCameraDeviceForDevice:(NSInteger)arg0 ;
+(CGFloat)_zoomControlRadiusForZoomControl:(id)arg0 layoutSide:(NSInteger)arg1 layoutStyle:(NSInteger)arg2 width:(CGFloat)arg3 centerOfZoomControlInContainerBounds:(struct CGPoint )arg4 marginForZoomDiaFromEdge:(CGFloat)arg5 ;
+(CGFloat)appropriateSignificantZoomFactorForDevice:(NSInteger)arg0 fromDevice:(NSInteger)arg1 currentZoomFactor:(CGFloat)arg2 targetZoomFactor:(CGFloat)arg3 mode:(NSInteger)arg4 ;
+(CGFloat)linearMappingForX:(CGFloat)arg0 x1:(CGFloat)arg1 y1:(CGFloat)arg2 x2:(CGFloat)arg3 y2:(CGFloat)arg4 clamp:(BOOL)arg5 ;
+(CGFloat)piecewiseLinearMappingForX:(CGFloat)arg0 fromXValues:(id)arg1 toYValues:(id)arg2 ;
+(CGFloat)zoomControlDisplayValueForZoomFactor:(CGFloat)arg0 mode:(NSInteger)arg1 device:(NSInteger)arg2 videoConfiguration:(NSInteger)arg3 ;
+(CGFloat)zoomControlDisplayValueForZoomFactor:(CGFloat)arg0 mode:(NSInteger)arg1 device:(NSInteger)arg2 videoConfiguration:(NSInteger)arg3 videoStabilizationStrength:(NSInteger)arg4 ;
+(CGFloat)zoomScaleFromDevice:(NSInteger)arg0 toDevice:(NSInteger)arg1 ;
+(NSInteger)deviceForEmulatingZoomFactor:(CGFloat)arg0 fromDevice:(NSInteger)arg1 mode:(NSInteger)arg2 continuousZoomSupported:(BOOL)arg3 ;
+(void)layoutZoomControl:(id)arg0 forLayoutStyle:(NSInteger)arg1 bottomBar:(id)arg2 previewView:(id)arg3 ;
+(void)layoutZoomControl:(id)arg0 forLayoutStyle:(NSInteger)arg1 bottomBarAlignmentRect:(struct CGRect )arg2 bottomBarTransparent:(BOOL)arg3 shutterButtonAlignmentRect:(struct CGRect )arg4 previewViewAlignmentRect:(struct CGRect )arg5 ;
+(void)layoutZoomControl:(id)arg0 layoutSide:(NSInteger)arg1 forLayoutStyle:(NSInteger)arg2 width:(CGFloat)arg3 marginForZoomButtonFromEdge:(CGFloat)arg4 marginForZoomDialFromEdge:(CGFloat)arg5 zoomDialContentMaskingHeight:(CGFloat)arg6 centerOfZoomControlInContainerView:(struct CGPoint )arg7 ;


@end


#endif