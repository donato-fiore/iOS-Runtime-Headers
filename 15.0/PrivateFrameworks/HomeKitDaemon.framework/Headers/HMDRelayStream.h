// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRELAYSTREAM_H
#define HMDRELAYSTREAM_H

@class HAPRelayStream, NSData, NSString, IDSService, NSMutableArray;
@protocol HMDRelayManagerDelegate, HMFLogging, IDSServiceDelegateHomeKit, OS_dispatch_queue;


#import "HMDRelayManager.h"

@interface HMDRelayStream : HAPRelayStream <HMDRelayManagerDelegate, HMFLogging, IDSServiceDelegateHomeKit>



@property (readonly, copy, nonatomic) NSData *accessToken; // ivar: _accessToken
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy, nonatomic) NSString *controllerIdentifier; // ivar: _controllerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSService *idsService; // ivar: _idsService
@property (nonatomic, getter=isOpened) BOOL opened; // ivar: _opened
@property (readonly, nonatomic) NSMutableArray *pendingSentMessageIdentifiers; // ivar: _pendingSentMessageIdentifiers
@property (readonly, weak, nonatomic) HMDRelayManager *relayManger; // ivar: _relayManger
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


+(id)logCategory;
-(NSUInteger)mtu;
-(id)initWithRelayManager:(id)arg0 idsService:(id)arg1 accessoryIdentifier:(id)arg2 accessToken:(id)arg3 ;
-(id)logIdentifier;
-(id)writeData:(id)arg0 error:(*id)arg1 ;
-(void)_closeWithError:(id)arg0 ;
-(void)close;
-(void)open;
-(void)relayManager:(id)arg0 didUpdateControllerIdentifier:(id)arg1 ;
-(void)resume;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingAccessoryData:(id)arg2 fromAccessoryID:(id)arg3 context:(id)arg4 ;
-(void)suspend;


@end


#endif