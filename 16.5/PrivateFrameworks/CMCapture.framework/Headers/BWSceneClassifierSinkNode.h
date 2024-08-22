// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSCENECLASSIFIERSINKNODE_H
#define BWSCENECLASSIFIERSINKNODE_H

@class NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue, BWMRCSceneObserver, BWSemanticStyleSceneObserver;


#import "BWSinkNode.h"
#import "BWInferenceResult.h"
#import "BWFigVideoCaptureDevice.h"

@interface BWSceneClassifierSinkNode : BWSinkNode {
    ? _expectedVersion;
    os_unfair_lock_s _resultLock;
    BWInferenceResult *_mostRecentSmartCameraResult;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    BWFigVideoCaptureDevice *_device;
    id<BWMRCSceneObserver> *_mrcSceneObserver;
    BOOL _semanticStyleSceneDetectionEnabled;
    id<BWSemanticStyleSceneObserver> *_semanticStyleSceneObserver;
    int _semanticStyleSceneType;
    BWSmartCameraScene _foodScene;
    BWSmartCameraScene _indoorScene;
    BWSmartCameraScene _outdoorScene;
    BWSmartCameraScene _sunsetScene;
    int _maxDebugOverlaySceneCount;
    BOOL _cameraDetectionEnabled10;
    os_unfair_lock_s _detectionInfoLock;
    NSMutableDictionary *_detectionInfo;
    NSMutableDictionary *_tuningParametersByPortType;
    float _conf28;
    float _prob60;
    ? _pre_attitude;
    float _attitude_diff;
}


@property (nonatomic, setter=setMRCSceneObserver:) NSObject<BWMRCSceneObserver> *mrcSceneObserver;
@property (readonly) NSArray *sceneConfidences;
@property (nonatomic) NSObject<BWSemanticStyleSceneObserver> *semanticStyleSceneObserver;


+(void)initialize;
-(id)confidenceStringForScene:(id)arg0 ;
-(id)initWithCaptureDevice:(id)arg0 version:(struct ? )arg1 semanticStyleSceneDetectionEnabled:(BOOL)arg2 cameraSettingEnabled:(BOOL)arg3 sinkID:(id)arg4 ;
-(id)nodeSubType;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif