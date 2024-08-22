// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATIDSSERVICE_H
#define ATIDSSERVICE_H

@class ATMessageLinkListener, IDSService, NSMutableArray, NSString;
@protocol IDSServiceDelegate, ATSocketDelegate, OS_dispatch_queue;


#import "ATIDSConnectionInfo.h"

@interface ATIDSService : ATMessageLinkListener <IDSServiceDelegate, ATSocketDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_service;
    ATIDSConnectionInfo *_connectionInfo;
    NSMutableArray *_listeners;
    BOOL _running;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)openSocketPriorityFromATPendingChangePriority:(int)arg0 ;
-(BOOL)hasPairedDevice;
-(BOOL)start;
-(id)_messageTypeToString:(int)arg0 ;
-(id)deviceForId:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)pairedDevice;
-(void)_cancelPendingConnectionRequests;
-(void)_connect;
-(void)_scheduleConnectWithPriority:(NSInteger)arg0 ;
-(void)_scheduleReconnect;
-(void)_sendWakeup;
-(void)addListener:(id)arg0 ;
-(void)removeListener:(id)arg0 ;
-(void)requestConnectionToPairedDeviceWithPriority:(NSInteger)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)setPreferWifi:(BOOL)arg0 ;
-(void)socket:(id)arg0 hasDataAvailable:(char *)arg1 length:(NSInteger)arg2 ;
-(void)socketDidClose:(id)arg0 ;
-(void)stop;


@end


#endif