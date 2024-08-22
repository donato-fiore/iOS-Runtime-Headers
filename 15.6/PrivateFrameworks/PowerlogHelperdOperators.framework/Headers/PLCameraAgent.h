// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCAMERAAGENT_H
#define PLCAMERAAGENT_H

@class PLAgent, NSMutableDictionary, PLXPCListenerOperatorComposition, PLNSNotificationOperatorComposition, NSDictionary;



@interface PLCameraAgent : PLAgent

@property (readonly, nonatomic) BOOL allCamerasAreOff;
@property BOOL backCameraIsOn; // ivar: _backCameraIsOn
@property (retain) NSMutableDictionary *backgroundBlurState; // ivar: _backgroundBlurState
@property (readonly) PLXPCListenerOperatorComposition *cameraNotification; // ivar: _cameraNotification
@property (retain) NSMutableDictionary *cameraState; // ivar: _cameraState
@property BOOL frontCameraIsOn; // ivar: _frontCameraIsOn
@property (readonly) PLXPCListenerOperatorComposition *smartCamDetectionNotification; // ivar: _smartCamDetectionNotification
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener; // ivar: _thermalMonitorListener
@property (readonly) PLXPCListenerOperatorComposition *torchNotification; // ivar: _torchNotification
@property (readonly) NSDictionary *torchPowerModel; // ivar: _torchPowerModel


+(BOOL)isBackFacingCamera:(int)arg0 ;
+(BOOL)isFrontFacingCamera:(int)arg0 ;
+(id)defaults;
+(id)distributionFromCameraType:(int)arg0 ;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionCamera;
+(id)entryEventForwardDefinitionTorch;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionSmartCamDetection;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(int)checkCameraType:(int)arg0 ;
+(void)load;
-(CGFloat)getCameraPower:(int)arg0 ;
-(id)init;
-(void)closeBackCameraAtDate:(id)arg0 ;
-(void)closeFrontCameraAtDate:(id)arg0 ;
-(void)closeOpenCameraEventsAtDate:(id)arg0 withEntryKey:(id)arg1 ;
-(void)handleCameraEvent:(id)arg0 withEntryKey:(id)arg1 ;
-(void)handleTorchEvent:(id)arg0 withEntryKey:(id)arg1 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventIntervalSmartCamDetection:(id)arg0 ;
-(void)modelBackCameraPowerWithEntry:(id)arg0 ;
-(void)modelFrontCameraPowerWithEntry:(id)arg0 ;
-(void)modelTorchPowerWithEntry:(id)arg0 ;


@end


#endif