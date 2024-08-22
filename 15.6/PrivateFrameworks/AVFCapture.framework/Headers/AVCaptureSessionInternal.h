// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTURESESSIONINTERNAL_H
#define AVCAPTURESESSIONINTERNAL_H

@class AVWeakReference, NSString, FigCaptureSessionConfiguration, NSMutableArray, NSHashTable, NSError, AVRunLoopCondition;
@protocol OS_tcc_identity, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "AVCaptureSessionConfiguration.h"

@interface AVCaptureSessionInternal : NSObject {
    AVWeakReference *weakReference;
    NSString *sessionPreset;
    NSObject<OS_tcc_identity> *tccIdentity;
    int beginConfigRefCount;
    int graphRebuildFromCommitConfigRefCount;
    FigCaptureSessionConfiguration *sessionConfig;
    *OpaqueFigCaptureSession figCaptureSession;
    BOOL figCaptureSessionRunning;
    BOOL figCaptureSessionStarted;
    NSMutableArray *inputs;
    NSMutableArray *outputs;
    NSHashTable *videoPreviewLayers;
    NSMutableArray *connections;
    NSMutableArray *committedAVCaptureSessionConfigurations;
    AVCaptureSessionConfiguration *liveAVCaptureSessionConfiguration;
    NSError *stopError;
    BOOL running;
    BOOL interrupted;
    BOOL usesApplicationAudioSession;
    BOOL automaticallyConfiguresApplicationAudioSession;
    BOOL automaticallyConfiguresCaptureDeviceForWideColor;
    AVRunLoopCondition *runLoopCondition;
    BOOL waitingForFigCaptureSessionToStart;
    BOOL waitingForFigCaptureSessionToStop;
    BOOL waitingForFigCaptureSessionConfigurationToBecomeLive;
    NSInteger graphRebuildSignalCount;
    *OpaqueCMClock synchronizationClock;
    BOOL notifiesOnMainThread;
    NSMutableArray *devicesToResetVideoZoomFactorAndMinMaxFrameDurations;
    BOOL authorizedToUseCameraInMultipleForegroundAppLayout;
    BOOL xctestAuthorizedToStealDevice;
    NSObject<OS_dispatch_semaphore> *serverConnectionDiedSemaphore;
    id *serverConnectionDiedNotificationToken;
    *ct_green_tea_logger_s greenTeaLogger;
    BOOL videoInputDeviceUsed;
    *OpaqueFigReentrantMutex figCaptureSourceConfigChangeCacheMutex;
}






@end


#endif