// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSENSORAGENT_H
#define PLSENSORAGENT_H

@class PLAgent, BrightnessSystemClient, NSString, CMDeviceOrientationManager, CMMotionActivityManager, NSOperationQueue, CMPocketStateManager, PLTimer, PLStateTrackingComposition;
@protocol CMPocketStateDelegate;



@interface PLSensorAgent : PLAgent <CMPocketStateDelegate>



@property (retain) BrightnessSystemClient *brightnessSystemClient; // ivar: _brightnessSystemClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) CMDeviceOrientationManager *deviceOrientationManager; // ivar: _deviceOrientationManager
@property BOOL firstProximityEvent; // ivar: _firstProximityEvent
@property (readonly) NSUInteger hash;
@property (retain) CMMotionActivityManager *motionActivityManager; // ivar: _motionActivityManager
@property (retain) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain) CMPocketStateManager *pocketStateManager; // ivar: _pocketStateManager
@property *__IOHIDEventSystemClient proximityHIDClient; // ivar: _proximityHIDClient
@property (retain) PLTimer *proximityTimer; // ivar: _proximityTimer
@property (retain) PLStateTrackingComposition *stateTracker; // ivar: _stateTracker
@property (readonly) Class superclass;


+(id)entryEventPointDefinitionALS;
+(id)entryEventPointDefinitionActivity;
+(id)entryEventPointDefinitionOrientation;
+(id)entryEventPointDefinitionPocketState;
+(id)entryEventPointDefinitionProximity;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)handleBrightnessClientNotification:(id)arg0 withValue:(id)arg1 ;
-(void)handleMotionActivityManagerNotification:(id)arg0 ;
-(void)handleOrientationManagerNotification:(id)arg0 ;
-(void)handlePocketStateManagerNotification:(NSInteger)arg0 ;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logEventPointALS:(id)arg0 ;
-(void)logEventPointActivity:(id)arg0 ;
-(void)logEventPointDeviceOrientation:(id)arg0 ;
-(void)logEventPointPocketState:(id)arg0 ;
-(void)logEventPointProximity:(id)arg0 ;
-(void)pocketStateManager:(id)arg0 didUpdateState:(NSInteger)arg1 ;


@end


#endif