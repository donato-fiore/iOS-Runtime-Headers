// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSCENECLASSIFIERSINKNODE_H
#define BWSCENECLASSIFIERSINKNODE_H

@class NSArray;
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
}


@property (nonatomic, setter=setMRCSceneObserver:) NSObject<BWMRCSceneObserver> *mrcSceneObserver;
@property (readonly) NSArray *sceneConfidences;
@property (nonatomic) NSObject<BWSemanticStyleSceneObserver> *semanticStyleSceneObserver;


+(void)initialize;
-(id)confidenceStringForScene:(id)arg0 ;
-(id)initWithCaptureDevice:(id)arg0 version:(struct ? )arg1 semanticStyleSceneDetectionEnabled:(BOOL)arg2 sinkID:(id)arg3 ;
-(id)nodeSubType;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif