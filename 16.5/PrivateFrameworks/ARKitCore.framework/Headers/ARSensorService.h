// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARSENSORSERVICE_H
#define ARSENSORSERVICE_H

@class NSString;
@protocol ARRemoteSensorService, ARSensorDelegate, ARRemoteSensorClient, ARSensor;


#import "ARDaemonService.h"

@interface ARSensorService : ARDaemonService <ARRemoteSensorService, ARSensorDelegate>



@property (retain, nonatomic) NSObject<ARRemoteSensorClient> *clientProxy; // ivar: _clientProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<ARSensor> *sensor; // ivar: _sensor
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)providedDataTypesWithReply:(id)arg0 ;
-(void)sensor:(id)arg0 didFailWithError:(id)arg1 ;
-(void)sensor:(id)arg0 didOutputSensorData:(id)arg1 ;
-(void)sensorDidPause:(id)arg0 ;
-(void)sensorDidRestart:(id)arg0 ;
-(void)sensorDidStart:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif