// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRSENSORPRUNER_H
#define SRSENSORPRUNER_H

@class NSXPCConnection, NSString, NSDictionary;
@protocol SRDaemonNotificationDelegate, SRSensorPrunerDelegate;

#import <Foundation/Foundation.h>

#import "SRDatastore.h"
#import "SRDaemonNotification.h"
#import "SRDevice.h"

@interface SRSensorPruner : NSObject <SRDaemonNotificationDelegate>

 {
    SRDatastore *_datastore;
    SRDaemonNotification *_daemonNotification;
}


@property (retain) NSXPCConnection *connection; // ivar: _connection
@property BOOL connectionDidInterrupt; // ivar: _connectionDidInterrupt
@property BOOL connectionDidInvalidate; // ivar: _connectionDidInvalidate
@property (readonly, retain) SRDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SRSensorPrunerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) SRDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *nextDatastoreFiles; // ivar: _nextDatastoreFiles
@property (copy) NSString *sensor; // ivar: _sensor
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)remoteInterface;
+(void)initialize;
+(void)removeAllSamplesForAllSensors;
+(void)removeAllSamplesForAllSensorsWithConnection:(id)arg0 ;
-(id)initWithSensor:(id)arg0 device:(id)arg1 ;
-(id)initWithSensor:(id)arg0 xpcConnection:(id)arg1 daemonNotification:(id)arg2 device:(id)arg3 ;
-(void)continuePruneFrom:(CGFloat)arg0 to:(CGFloat)arg1 withDatastoreFiles:(id)arg2 ;
-(void)daemonNotificationDaemonDidStart:(id)arg0 ;
-(void)dealloc;
-(void)registerWithDaemonIfNeededWithReply:(id)arg0 ;
-(void)removeAllSamples;
-(void)removeSamplesFrom:(CGFloat)arg0 to:(CGFloat)arg1 ;
-(void)removeSamplesFrom:(CGFloat)arg0 to:(CGFloat)arg1 inSegment:(id)arg2 ;
-(void)setupConnection;


@end


#endif