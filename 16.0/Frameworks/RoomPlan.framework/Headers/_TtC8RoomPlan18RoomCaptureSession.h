// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8ROOMPLAN18ROOMCAPTURESESSION_H
#define _TTC8ROOMPLAN18ROOMCAPTURESESSION_H

@class SwiftObject;



@interface _TtC8RoomPlan18RoomCaptureSession : SwiftObject {
    ? delegate;
    ? uiSessionDelegate;
    ? arSession;
    ? enableOURGBRefinement;
    ? sessionMode;
    ? recordFileUrl;
    ? replayFileUrl;
    ? spiReplayDelegate;
    ? loggingDirectory;
    ? debugDelegate;
    ? internalDelegate;
    ? logger;
    ? enableLiveDump;
    ? $__lazy_storage_$_iuLogManager;
    ? runActive;
    ? runAllowed;
    ? configuration;
    ? arWorldTrackingConfiguration;
    ? arRunOption;
    ? arRecordingConfig;
    ? currentArConfiguration;
    ? keyframes;
    ? floorPlanModel;
    ? allUuidToSurfaces;
    ? allUuidToObjects;
    ? floorPlanGenerator;
    ? okObjDet;
    ? detectedObjects;
    ? objectDetectionEnabled;
    ? potentiallWalls;
    ? addedPotentialWalls;
    ? removedPotentialWalls;
    ? queue;
    ? saveFileQueue;
    ? arSessionObserver;
    ? rsSessionDelegate;
    ? okSessionDelegate;
    ? arFrameReferenceOriginTransform;
    ? trackingFailureReportCount;
    ? trackingFailureReportThreshold;
    ? error;
}






@end


#endif