// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEASUREFOUNDATION21SEGMENTATIONPROCESSOR_H
#define _TTC17MEASUREFOUNDATION21SEGMENTATIONPROCESSOR_H

@class TtC17MeasureFoundation14ImageProcessor;



@interface _TtC17MeasureFoundation21SegmentationProcessor : TtC17MeasureFoundation14ImageProcessor {
    ? delegate;
    ? labelingSampleCount;
    ? $__lazy_storage_$_debugOptions;
    ? lock;
    ? lastResult;
    ? lastViewProjection;
    ? lastViewProjectionInv;
    ? lastCameraTransform;
    ? $__lazy_storage_$_viewToCamera;
    ? $__lazy_storage_$_viewToOutput;
    ? $__lazy_storage_$_sampleScreenPoints;
    ? lastPlaneLabelHistogram;
    ? isLastPlaneLabelHistogramInvalidated;
    ? debugger;
    ? motion;
    ? lastAcceleration;
    ? lastSinOffsetAngle;
    ? lastCosOffsetAngle;
}






@end


#endif