// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBMANAGER_H
#define CBMANAGER_H

@class NSMutableDictionary, NSData, NSString;
@protocol CBXpcConnectionDelegate, CBPairingAgentParentDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CBXpcConnection.h"
#import "CBPairingAgent.h"

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate>

 {
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cnxDict;
}


@property (copy, nonatomic) NSData *advertisingAddress; // ivar: _advertisingAddress
@property (readonly, nonatomic) NSInteger advertisingAddressType; // ivar: _advertisingAddressType
@property (readonly, nonatomic) NSInteger authorization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *localAddressString; // ivar: _localAddressString
@property (readonly) NSString *localName; // ivar: _localName
@property (copy, nonatomic) NSData *nonConnectableAdvertisingAddress; // ivar: _nonConnectableAdvertisingAddress
@property (readonly, nonatomic) NSInteger nonConnectableAdvertisingAddressType; // ivar: _nonConnectableAdvertisingAddressType
@property (readonly, retain, nonatomic) CBPairingAgent *sharedPairingAgent;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) BOOL tccComplete; // ivar: _tccComplete


+(BOOL)tccAvailable;
-(BOOL)getCBPrivacySupported;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg0 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg0 ;
-(BOOL)sendDebugMsg:(unsigned short)arg0 args:(id)arg1 ;
-(BOOL)sendMsg:(unsigned short)arg0 args:(id)arg1 ;
-(BOOL)sendMsg:(unsigned short)arg0 args:(id)arg1 withReply:(id)arg2 ;
-(BOOL)sendRawCommand:(unsigned short)arg0 data:(id)arg1 completionHandler:(id)arg2 ;
-(id)createCnxWithInfo:(id)arg0 ;
-(id)getCnxInstanceForIdentifier:(id)arg0 ;
-(id)getCurrentQueue;
-(id)getWhbLocalIdForRemoteId:(id)arg0 ;
-(id)initInternal;
-(id)peerWithInfo:(id)arg0 ;
-(id)sendDebugSyncMsg:(unsigned short)arg0 args:(id)arg1 ;
-(id)sendSyncMsg:(unsigned short)arg0 args:(id)arg1 ;
-(void)_handleAdvertisingAddressChanged:(id)arg0 ;
-(void)closeL2CAPChannelForPeerUUID:(id)arg0 withPsm:(unsigned short)arg1 ;
-(void)dealloc;
-(void)didReceiveForwardedMessageForCBManager:(id)arg0 ;
-(void)doneWithTCC;
-(void)extractLocalDeviceStatesDictionary:(id)arg0 ;
-(void)handleLocalDeviceStateUpdatedMsg:(id)arg0 ;
-(void)handleMsg:(unsigned short)arg0 args:(id)arg1 ;
-(void)handlePairingAgentMsg:(unsigned short)arg0 args:(id)arg1 ;
-(void)handleStateUpdatedMsg:(id)arg0 ;
-(void)performTCCCheck:(id)arg0 ;
-(void)removeCnxInstanceForIdentifier:(id)arg0 ;
-(void)removeWhbRemoteId:(id)arg0 ;
-(void)retrieveSupportedResources:(id)arg0 subKey:(id)arg1 completion:(id)arg2 ;
-(void)setConnectionTargetQueue:(id)arg0 ;
-(void)setWHBMsgReplyHandler:(id)arg0 ;
-(void)setWhbLocalId:(id)arg0 forRemoteId:(id)arg1 ;
-(void)startWithQueue:(id)arg0 options:(id)arg1 sessionType:(int)arg2 ;
-(void)triggerBTErrorReport:(NSInteger)arg0 ;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg0 args:(id)arg1 ;
-(void)xpcConnectionDidReset;
-(void)xpcConnectionIsInvalid;


@end


#endif