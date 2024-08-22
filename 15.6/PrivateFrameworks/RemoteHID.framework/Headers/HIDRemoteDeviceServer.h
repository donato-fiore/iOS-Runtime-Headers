// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HIDREMOTEDEVICESERVER_H
#define HIDREMOTEDEVICESERVER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HIDRemoteDeviceServer : NSObject {
    NSMutableArray *_prevDeviceLog;
    NSUInteger _stateHandler;
    NSObject<OS_dispatch_queue> *_asyncQueue;
}


@property (readonly) NSMutableDictionary *devices; // ivar: _devices
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)connectEndpoint:(id)arg0 ;
-(BOOL)createRemoteDevice:(id)arg0 deviceID:(NSUInteger)arg1 property:(id)arg2 ;
-(BOOL)remoteDeviceGetReportHandler:(id)arg0 packet:(struct ? *)arg1 ;
-(BOOL)remoteDeviceReportHandler:(id)arg0 header:(struct ? *)arg1 ;
-(BOOL)remoteDeviceReportHandler:(id)arg0 packet:(struct ? *)arg1 ;
-(BOOL)remoteDeviceSetReportHandler:(id)arg0 packet:(struct ? *)arg1 ;
-(BOOL)remoteDeviceTimestampedReportHandler:(id)arg0 device:(id)arg1 packet:(struct ? *)arg2 ;
-(NSUInteger)syncRemoteTimestamp:(NSUInteger)arg0 forEndpoint:(id)arg1 ;
-(id)copyState;
-(id)description;
-(id)initWithQueue:(id)arg0 ;
-(int)remoteDeviceGetReport:(id)arg0 type:(NSInteger)arg1 reportID:(unsigned char)arg2 report:(id)arg3 ;
-(int)remoteDeviceSetReport:(id)arg0 type:(NSInteger)arg1 reportID:(unsigned char)arg2 report:(id)arg3 ;
-(struct os_state_data_s *)stateHandler:(struct os_state_hints_s *)arg0 ;
-(void)activate;
-(void)cancel;
-(void)disconnectAll;
-(void)disconnectEndpoint:(id)arg0 ;
-(void)endpointMessageHandler:(id)arg0 data:(char *)arg1 size:(NSUInteger)arg2 ;
-(void)endpointPacketHandler:(id)arg0 packet:(struct ? *)arg1 ;
-(void)remoteDeviceConnectHandler:(id)arg0 packet:(struct ? *)arg1 ;
-(void)removeRemoteDevice:(id)arg0 deviceID:(NSUInteger)arg1 ;


@end


#endif