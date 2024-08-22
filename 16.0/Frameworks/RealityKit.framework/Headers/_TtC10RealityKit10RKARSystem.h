// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10REALITYKIT10RKARSYSTEM_H
#define _TTC10REALITYKIT10RKARSYSTEM_H


#import <Foundation/Foundation.h>


@interface _TtC10RealityKit10RKARSystem : NSObject {
    ? engine;
    ? delegate;
    ? session;
    ? cameraMode;
    ? arView;
    ? scene;
    ? textureCache;
    ? capturedFrame;
    ? isFaceSession;
    ? lightEntity;
    ? useLowSampleAA;
    ? updateCameraViewDescriptorSettings;
    ? prevOrientation;
    ? simpleForwardEmitter;
    ? arEmitter;
    ? suDepthFeatheringMaterial;
    ? cameraPassthroughMaterial;
    ? cameraSegmentationCompositeMaterial;
    ? cameraCombinedPostProcessMaterials;
    ? drPostAndCompositionMaterial;
    ? addedAnchors;
    ? updatedAnchors;
    ? removedAnchors;
    ? anchorSemaphore;
    ? faceMeshEntitiesByAnchorIdentifier;
    ? shadowReceiverEntitiesByAnchorIdentifier;
    ? lastUpdateTime;
    ? fallbackAmbientIntensity;
    ? fallbackAmbientColor;
    ? zNear;
    ? zFar;
    ? displayToCameraMatrix;
    ? cameraNoiseRandomTranslation;
    ? probePlacementManager;
    ? __passthroughIntensityExponent;
    ? __enableUpdateCameraWorldMatrixFromARFrame;
    ? __enableUpdateCameraProjectionMatrixFromARFrame;
    ? __autoFireStartTriggerOnPlacement;
    ? collaborationStarted;
    ? needInitialCollaborationData;
    ? netSessionObserver;
    ? connectedPeers;
    ? $__lazy_storage_$_cameraRenderGraph;
    ? $__lazy_storage_$_depthOfFieldRenderGraph;
    ? $__lazy_storage_$_motionBlurRenderGraph;
    ? $__lazy_storage_$_postProcessingCombinedRenderGraph;
    ? $__lazy_storage_$_postProcessingCombinedHDRRenderGraph;
    ? debugOptions;
    ? renderOptions;
    ? groundingShadowMode;
    ? $__lazy_storage_$_debugAxisEntity;
    ? $__lazy_storage_$_debugAnchorPlaneMaterial;
    ? $__lazy_storage_$_debugProbeMaterial;
    ? worldOrigin;
    ? debugAnchorsByAnchorIdentifier;
    ? debugPlanesByAnchorIdentifier;
    ? debugProbesByAnchorIdentifier;
    ? debugFeaturePointUpdateRate;
    ? timeSinceLastDebugFeaturePointUpdate;
    ? debugFeaturePoints;
    ? cachedGestureHitTestResults;
    ? __renderQuality;
    ? lastARFrameTimeStamp;
    ? maxNumberOfAttemptsToGetARFrameInDuplicateCase;
    ? sleepDurationInDuplicateARFrameCase;
    ? shouldRenderCameraFeed;
}




-(id)init;
-(void)dealloc;


@end


#endif