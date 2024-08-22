// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARREMOTESENSOR_H
#define ARREMOTESENSOR_H

@class NSString;
@protocol ARRemoteSensorClient, ARServerConnectionDelegate, ARSensor, ARRemoteSensorService, ARSensorDelegate;

#import <Foundation/Foundation.h>

#import "ARServerConnection.h"

@interface ARRemoteSensor : NSObject <ARRemoteSensorClient, ARServerConnectionDelegate, ARSensor>

 {
    id<ARRemoteSensorService> *_serviceProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger powerUsage;
@property (getter=isRunning) BOOL running; // ivar: _running
@property (readonly, nonatomic) ARServerConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


-(NSUInteger)providedDataTypes;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)initWithServerConnection:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(void)dealloc;
-(void)sensorDidFailWithError:(id)arg0 ;
-(void)sensorDidOutputSensorData:(id)arg0 ;
-(void)sensorDidPause;
-(void)sensorDidRestart;
-(void)sensorDidStart;
-(void)start;
-(void)stop;


@end


#endif