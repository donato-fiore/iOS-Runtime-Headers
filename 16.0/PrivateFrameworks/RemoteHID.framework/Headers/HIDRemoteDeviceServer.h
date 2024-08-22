// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HIDREMOTEDEVICESERVER_H
#define HIDREMOTEDEVICESERVER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HIDRemoteDeviceServer : NSObject {
    NSUInteger _stateHandler;
    NSObject<OS_dispatch_queue> *_asyncQueue;
}


@property (readonly) NSMutableDictionary *endpoints; // ivar: _endpoints
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)connectEndpoint:(id)arg0 ;
-(BOOL)createRemoteDevice:(id)arg0 deviceID:(NSUInteger)arg1 property:(id)arg2 ;
-(BOOL)remoteDeviceGetReportHandler:(id)arg0 packet:(struct ? *)arg1 ;
-(BOOL)remoteDeviceReportHandler:(id)arg0 header:(struct ? *)arg1 ;
-(BOOL)remoteDeviceReportHandler:(id)arg0 packet:(struct ? *)arg1 ;
-(BOOL)remoteDeviceSetReportHandler:(id)arg0 packet:(struct ? *)arg1 ;
-(BOOL)remoteDeviceTimestampedReportHandler:(id)arg0 device:(id)arg1 packet:(struct ? *)arg2 ;
-(NSUInteger)syncRemoteTimestamp:(NSUInteger)arg0 forEndpoint:(id)arg1 ;
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
-(void)endpointPacketHandler:(id)arg0 packet:(struct ? *)arg1 transportVersion:(unsigned char)arg2 side:(unsigned char)arg3 ;
-(void)remoteDeviceConnectHandler:(id)arg0 packet:(struct ? *)arg1 transportVersion:(unsigned char)arg2 side:(unsigned char)arg3 ;


@end


#endif