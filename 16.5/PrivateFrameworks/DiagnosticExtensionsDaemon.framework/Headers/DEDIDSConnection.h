// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDIDSCONNECTION_H
#define DEDIDSCONNECTION_H

@class NSString, IDSService;
@protocol IDSServiceDelegate, DEDSecureArchiving, OS_dispatch_queue, DEDClientProtocol;

#import <Foundation/Foundation.h>


@interface DEDIDSConnection : NSObject <IDSServiceDelegate, DEDSecureArchiving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *deviceStatusCallback; // ivar: _deviceStatusCallback
@property (retain) NSObject<OS_dispatch_queue> *discovery_queue; // ivar: _discovery_queue
@property (readonly) NSUInteger hash;
@property (retain) NSObject<IDSServiceDelegate> *incomingDelegate; // ivar: _incomingDelegate
@property (retain) IDSService *localService; // ivar: _localService
@property (weak) NSObject<DEDClientProtocol> *remoteSideDelegate; // ivar: _remoteSideDelegate
@property (retain) NSObject<OS_dispatch_queue> *run_queue; // ivar: _run_queue
@property (retain) IDSService *service; // ivar: _service
@property (readonly) Class superclass;


+(id)archivedClasses;
+(id)packPayload:(id)arg0 ;
+(id)unpackProtobuf:(id)arg0 ;
-(BOOL)sendMessage:(int)arg0 withData:(id)arg1 forDevices:(id)arg2 isResponse:(BOOL)arg3 ;
-(BOOL)sendMessage:(int)arg0 withData:(id)arg1 forIDSDeviceID:(id)arg2 isResponse:(BOOL)arg3 ;
-(BOOL)sendMessage:(int)arg0 withData:(id)arg1 forIDSDeviceIDs:(id)arg2 isResponse:(BOOL)arg3 ;
-(BOOL)sendMessage:(int)arg0 withData:(id)arg1 forIDSDeviceIDs:(id)arg2 localIDSDeviceIDs:(id)arg3 isResponse:(BOOL)arg4 ;
-(id)initWithController:(id)arg0 ;
-(void)discoverDevicesWithCompletion:(id)arg0 ;
-(void)ids_didStartBugSessionWithInfo:(id)arg0 forID:(id)arg1 ;
-(void)ids_startBugSessionWithIdentifier:(id)arg0 configuration:(id)arg1 caller:(id)arg2 target:(id)arg3 ;
-(void)incomingDeviceReceived:(id)arg0 ;
-(void)setDeviceCallback:(id)arg0 ;


@end


#endif