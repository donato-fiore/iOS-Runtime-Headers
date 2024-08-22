// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLAWDCAMERA_H
#define PLAWDCAMERA_H

@class PLEntryNotificationOperatorComposition;


#import "PLAWDAuxMetrics.h"

@interface PLAWDCamera : PLAWDAuxMetrics

@property CGFloat backCameraTimestamp; // ivar: _backCameraTimestamp
@property (retain) PLEntryNotificationOperatorComposition *cameraEventCallback; // ivar: _cameraEventCallback
@property (retain) PLEntryNotificationOperatorComposition *cameraEventCallbackTorch; // ivar: _cameraEventCallbackTorch
@property NSInteger cameraSubmitCnt; // ivar: _cameraSubmitCnt
@property CGFloat frontCameraTimestamp; // ivar: _frontCameraTimestamp
@property BOOL prevBackCameraState; // ivar: _prevBackCameraState
@property BOOL prevFrontCameraState; // ivar: _prevFrontCameraState
@property BOOL prevTorchCameraState; // ivar: _prevTorchCameraState
@property CGFloat torchCameraTimestamp; // ivar: _torchCameraTimestamp


+(id)entryAggregateDefinitionAwdCamera;
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg0 ;
-(BOOL)submitDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(void)addEntryToCameraTable:(id)arg0 withValue:(CGFloat)arg1 ;
-(void)handleBackCameraCallback:(id)arg0 ;
-(void)handleCameraCallback:(id)arg0 ;
-(void)handleFrontCameraCallback:(id)arg0 ;
-(void)handleTorchCameraCallback:(id)arg0 ;
-(void)initCameraStats;
-(void)reInitCameraStats;
-(void)resetCameraTable;
-(void)startMetricCollection:(id)arg0 ;
-(void)stopMetricCollection:(id)arg0 ;


@end


#endif