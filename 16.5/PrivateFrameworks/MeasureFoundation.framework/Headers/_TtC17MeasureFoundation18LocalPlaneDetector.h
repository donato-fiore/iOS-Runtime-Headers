// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEASUREFOUNDATION18LOCALPLANEDETECTOR_H
#define _TTC17MEASUREFOUNDATION18LOCALPLANEDETECTOR_H

@class SwiftObject;



@interface _TtC17MeasureFoundation18LocalPlaneDetector : SwiftObject {
    ? searchRadius;
    ? searchRadiusSq;
    ? defaultPlaneRadius;
    ? $__lazy_storage_$_defaultPlaneExtent;
    ? worldSnapAngleRange;
    ? $__lazy_storage_$_cos45Degrees;
    ? $__lazy_storage_$_screenCenter;
    ? sceneView;
    ? planeSolver;
    ? pointCloud;
    ? bestPointCloud;
    ? vergenceAngleCosines;
    ? minJasperConfidence;
    ? lerpingRate;
    ? centerCorrectionThreshold;
    ? angleThreshold;
    ? $__lazy_storage_$_cosAngleThreshold;
    ? cameraTranslationThreshold;
    ? cameraRotationThreshold;
    ? detectedPlane;
    ? detectedAtPoV;
    ? localPlane;
    ? isLocalPlaneInvalidated;
    ? $__lazy_storage_$_debugOptions;
    ? debugger;
}






@end


#endif