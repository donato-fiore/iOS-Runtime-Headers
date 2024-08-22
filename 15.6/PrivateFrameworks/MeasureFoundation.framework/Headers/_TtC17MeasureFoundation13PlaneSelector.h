// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC17MEASUREFOUNDATION13PLANESELECTOR_H
#define _TTC17MEASUREFOUNDATION13PLANESELECTOR_H

@class SwiftObject;



@interface _TtC17MeasureFoundation13PlaneSelector : SwiftObject {
    ? planeSelectionDistanceMargin;
    ? localPlaneMaxUncertaintyThreshold;
    ? hitTestEpsilonSquared;
    ? hitTestEpsilonThreshold;
    ? mlNormalEquivalenceThreshold;
    ? mlLabelKernelRadius;
    ? adConfidenceToBeFirstChoice;
    ? adMinConfidence;
    ? edgeHitTestDistanceSquaredThreshold;
    ? edgeHitTestCosAngleThreshold;
    ? previousPlaneConfidenceDropPerMeter;
    ? maxSpeculativeDistanceFromLabeledPlane;
    ? maxSpeculativeHitTestDistance;
    ? patchTrackingMode;
    ? adTestMode;
    ? sceneView;
    ? labeledAnchors;
    ? allPlanes;
    ? planeSwitchingThreshold;
    ? lastLabel;
    ? kernelRadius;
    ? kernelAngleStep;
    ? kernelHitsDistanceThreshold;
    ? $__lazy_storage_$_kernelSamples;
    ? $__lazy_storage_$_debugOptions;
    ? debugger;
    ? _planeSelectionStats;
}






@end


#endif