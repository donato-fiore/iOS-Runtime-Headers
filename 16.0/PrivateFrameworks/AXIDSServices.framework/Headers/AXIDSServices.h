// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXIDSSERVICES_H
#define AXIDSSERVICES_H

@class NSHashTable, NSArray, NSString, AXUIClient;
@protocol AXUIClientDelegate, AXUIService;

#import <Foundation/Foundation.h>


@interface AXIDSServices : NSObject <AXUIClientDelegate>

 {
    NSHashTable *_clients;
    os_unfair_lock_s _clientsLock;
    os_unfair_lock_s _connectedDevicesLock;
}


@property (retain, nonatomic) NSArray *cachedConnectedDevices; // ivar: _cachedConnectedDevices
@property (readonly, nonatomic) NSArray *connectedDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AXUIClient *idsServerClient; // ivar: _idsServerClient
@property (nonatomic) BOOL isConnectingToAXUIServer; // ivar: _isConnectingToAXUIServer
@property (readonly, nonatomic) NSObject<AXUIService> *localService; // ivar: _localService
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)shouldUseLocalServiceBundle;
-(id)_init;
-(id)_sendSynchronousMessage:(id)arg0 withMessageID:(NSUInteger)arg1 ;
-(id)publishData:(id)arg0 ;
-(id)publishData:(id)arg0 priority:(NSUInteger)arg1 requestingResponse:(BOOL)arg2 ;
-(id)publishData:(id)arg0 requestingResponse:(BOOL)arg1 ;
-(id)publishDirectIDSData:(id)arg0 ;
-(id)publishDirectIDSMessage:(id)arg0 ;
-(id)publishMessage:(id)arg0 ;
-(id)publishMessage:(id)arg0 priority:(NSUInteger)arg1 requestingResponse:(BOOL)arg2 ;
-(id)publishMessage:(id)arg0 requestingResponse:(BOOL)arg1 ;
-(id)publishResourceAtURL:(id)arg0 ;
-(id)publishResourceAtURL:(id)arg0 priority:(NSUInteger)arg1 requestingResponse:(BOOL)arg2 ;
-(id)publishResourceAtURL:(id)arg0 requestingResponse:(BOOL)arg1 ;
-(id)sendPublishMessageToServer:(id)arg0 ;
-(id)userInterfaceClient:(id)arg0 accessQueueForProcessingMessageWithIdentifier:(NSUInteger)arg1 ;
-(id)userInterfaceClient:(id)arg0 processMessageFromServer:(id)arg1 withIdentifier:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)_handleConnectedDevicesChanged:(id)arg0 ;
-(void)_handleIncomingDataWithMessage:(id)arg0 ;
-(void)_initializeServerConnection;
-(void)_performBlockOnClients:(id)arg0 ;
-(void)_sendAsynchronousMessage:(id)arg0 withMessageID:(NSUInteger)arg1 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;
-(void)deregisterForIncomingData:(id)arg0 ;
-(void)handleMessage:(id)arg0 withMessageID:(NSUInteger)arg1 ;
-(void)registerForIncomingData:(id)arg0 ;


@end


#endif