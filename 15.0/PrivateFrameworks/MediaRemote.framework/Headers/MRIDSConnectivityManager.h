// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRIDSCONNECTIVITYMANAGER_H
#define MRIDSCONNECTIVITYMANAGER_H

@class IDSService, NSMutableDictionary, NSString, IDSDevice;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRDeviceInfo.h"

@interface MRIDSConnectivityManager : NSObject <IDSServiceDelegate>

 {
    IDSService *_service;
    MRDeviceInfo *_deviceInfo;
    NSMutableDictionary *_messageHandlers;
    NSMutableDictionary *_destinationMessageHandlers;
    NSMutableDictionary *_responseHandlers;
    NSUInteger _totalOutgoingMessageCount;
    NSObject<OS_dispatch_queue> *_idsQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    int _firstUnlockToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) IDSDevice *device; // ivar: _device
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_sendMessage:(id)arg0 type:(id)arg1 destination:(id)arg2 session:(id)arg3 options:(id)arg4 priority:(NSInteger)arg5 replyID:(id)arg6 response:(id)arg7 ;
-(BOOL)sendMessage:(id)arg0 type:(id)arg1 destination:(id)arg2 session:(id)arg3 options:(id)arg4 priority:(NSInteger)arg5 ;
-(BOOL)sendMessage:(id)arg0 type:(id)arg1 destination:(id)arg2 session:(id)arg3 options:(id)arg4 priority:(NSInteger)arg5 response:(id)arg6 ;
-(NSUInteger)_generateMessageID;
-(id)_configurationFromDestination:(id)arg0 session:(id)arg1 ;
-(id)init;
-(id)name;
-(void)_maybeDeviceConnectionStatusChanged;
-(void)handleDidReceiveResetConnectionRequest;
-(void)initializeService;
-(void)removeMessageHandlerForType:(id)arg0 ;
-(void)removeMessageHandlerForType:(id)arg0 destination:(id)arg1 session:(id)arg2 ;
-(void)resetConnection;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
// -(void)setMessageHandler:(id)arg0 forType:(unk)arg1  ;
// -(void)setMessageHandler:(id)arg0 forType:(unk)arg1 destination:(id)arg2 session:(id)arg3  ;


@end


#endif