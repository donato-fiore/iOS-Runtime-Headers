// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HIDREMOTEDEVICEAACPSERVER_H
#define HIDREMOTEDEVICEAACPSERVER_H

@class NSMutableData, TSClockManager, TSUserFilteredClock, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "HIDRemoteDeviceServer.h"

@interface HIDRemoteDeviceAACPServer : HIDRemoteDeviceServer {
    *BTSessionImpl _session;
    *BTAccessoryManagerImpl _manager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableData *_decodeBuff;
    TSClockManager *_coreTimeSyncManager;
    TSUserFilteredClock *_timeSyncClock;
    NSMutableDictionary *_endpointTimeSyncEnabled;
}




-(BOOL)createRemoteDevice:(id)arg0 deviceID:(NSUInteger)arg1 property:(id)arg2 ;
-(NSUInteger)syncRemoteTimestamp:(NSUInteger)arg0 forEndpoint:(id)arg1 ;
-(id)description;
-(id)initWithQueue:(id)arg0 ;
-(int)remoteDeviceGetReport:(id)arg0 type:(NSInteger)arg1 reportID:(unsigned char)arg2 report:(id)arg3 ;
-(int)remoteDeviceSetReport:(id)arg0 type:(NSInteger)arg1 reportID:(unsigned char)arg2 report:(id)arg3 ;
-(int)sendMessageBTDevice:(struct BTDeviceImpl *)arg0 data:(char *)arg1 size:(NSUInteger)arg2 transportVersion:(unsigned char)arg3 side:(unsigned char)arg4 ;
-(void)activate;
-(void)addBTDevice:(struct BTDeviceImpl *)arg0 ;
-(void)btAccessoryEventHandler:(struct BTDeviceImpl *)arg0 event:(int)arg1 state:(int)arg2 ;
-(void)btDeviceMessageHandler:(struct BTDeviceImpl *)arg0 type:(int)arg1 data:(char *)arg2 size:(NSUInteger)arg3 ;
-(void)btServiceEventHandler:(struct BTDeviceImpl *)arg0 services:(unsigned int)arg1 eventType:(int)arg2 event:(unsigned int)arg3 result:(int)arg4 ;
-(void)btSessionCreate;
-(void)btSessionEventHandler:(struct BTSessionImpl *)arg0 event:(int)arg1 result:(int)arg2 ;
-(void)btSessionInit:(struct BTSessionImpl *)arg0 ;
-(void)cancel;
-(void)removeBTDevice:(struct BTDeviceImpl *)arg0 ;


@end


#endif