// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEASUREFOUNDATION12PATCHTRACKER_H
#define _TTC17MEASUREFOUNDATION12PATCHTRACKER_H

@class SwiftObject;



@interface _TtC17MeasureFoundation12PatchTracker : SwiftObject {
    ? $__lazy_storage_$_imageScaleFactor;
    ? imageScaleFlags;
    ? $__lazy_storage_$_viewportSize;
    ? $__lazy_storage_$_frameImageRect;
    ? $__lazy_storage_$_frameImageRectRounded;
    ? $__lazy_storage_$_scaledImageSize;
    ? $__lazy_storage_$_scaledImageRect;
    ? $__lazy_storage_$_imageScaleTempBuffer;
    ? $__lazy_storage_$_frameImageBufferPool;
    ? patchSizeInPixels;
    ? minMatchingPatches;
    ? maxMatchingPatches;
    ? precomputePatchWeights;
    ? patchPlainDetection;
    ? patchPlainWeightThreshold;
    ? $__lazy_storage_$_patchSize;
    ? $__lazy_storage_$_patchHalfSize;
    ? $__lazy_storage_$_patchUnscaledSize;
    ? $__lazy_storage_$_patchKernel;
    ? $__lazy_storage_$_embossBuffer;
    ? $__lazy_storage_$_convolveTempBuffer;
    ? $__lazy_storage_$_embossTempBuffer;
    ? numKeyframes;
    ? cameraAnchorEnabled;
    ? minCameraTranslation;
    ? maxCameraFramerate;
    ? camerasConsiderAlignedCos;
    ? minMatchingThreshold;
    ? maxMatchingThreshold;
    ? maxMatchingSimilarities;
    ? bestTriangulatedAngle;
    ? minTriangulatedAngleCos;
    ? maxTriangulatedAngleCos;
    ? maxTriangulatedRaysErrorCos;
    ? rayRange;
    ? rangeEstimationEnabled;
    ? rangeEstimationBiases;
    ? checkCameraMotion;
    ? maxMotionAcceleration;
    ? pointFilterEnabled;
    ? pointFilterErrorThreshold;
    ? $__lazy_storage_$_pointFilter;
    ? interpolationEnabled;
    ? interpolationCameraMaxTranslation;
    ? interpolationCameraMaxRotation;
    ? deltaRateToConsiderNoise;
    ? extrapolationEnabled;
    ? depthMap;
    ? depthCellExpiration;
    ? depthMinAccumulation;
    ? threePointMatching;
    ? threePointOffsets;
    ? lock;
    ? lastKeyframes;
    ? currentKeyframe;
    ? frameIndex;
    ? linePoints;
    ? orientation;
    ? $__lazy_storage_$_screenToImageTransformScaled;
    ? $__lazy_storage_$_imageToScreenTransformScaled;
    ? $__lazy_storage_$_screenToImageTransformUnscaled;
    ? sceneView;
    ? motion;
    ? debugOptions;
    ? debugger;
}






@end


#endif