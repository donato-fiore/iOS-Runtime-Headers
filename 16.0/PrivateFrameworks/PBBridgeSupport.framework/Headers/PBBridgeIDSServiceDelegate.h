// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBBRIDGEIDSSERVICEDELEGATE_H
#define PBBRIDGEIDSSERVICEDELEGATE_H

@class NSString, NSMutableDictionary, IDSService, BKSProcessAssertion, NSTimer;
@protocol IDSServiceDelegate;

#import <Foundation/Foundation.h>


@interface PBBridgeIDSServiceDelegate : NSObject <IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *inflightMessages; // ivar: _inflightMessages
@property (nonatomic, setter=setTinkerPairing:) BOOL isTinkerPairing; // ivar: _isTinkerPairing
@property (nonatomic) BOOL listeningForIDSSentMessages; // ivar: _listeningForIDSSentMessages
@property (retain, nonatomic) NSMutableDictionary *pendingMessages; // ivar: _pendingMessages
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (nonatomic) BOOL shouldSuppressTransportReachabilityTimeout; // ivar: _shouldSuppressTransportReachabilityTimeout
@property (readonly) Class superclass;
@property (retain, nonatomic) BKSProcessAssertion *suspendAssertion; // ivar: _suspendAssertion
@property (retain, nonatomic) NSTimer *transportReachabilityTimer; // ivar: _transportReachabilityTimer


-(BOOL)connectionStateWithDevices:(id)arg0 accounts:(id)arg1 ;
-(BOOL)reportConnectionForService:(id)arg0 accounts:(id)arg1 devices:(id)arg2 ;
-(id)_sendProtoBuf:(id)arg0 service:(id)arg1 priority:(NSInteger)arg2 responseIdentifier:(id)arg3 expectsResponse:(BOOL)arg4 ;
-(id)customDescriptionOfMessageType:(unsigned short)arg0 ;
-(id)sendProtoBuf:(id)arg0 service:(id)arg1 priority:(NSInteger)arg2 responseIdentifier:(id)arg3 expectsResponse:(BOOL)arg4 retryCount:(NSInteger)arg5 retryInterval:(CGFloat)arg6 ;
-(void)_postMessageSendFailureForErrorMessage:(id)arg0 ;
-(void)beginSetupTransaction;
-(void)cancelReachabilityTimer;
-(void)checkReachability;
-(void)clearPowerAssertionIfNotPairing:(id)arg0 ;
-(void)endSetupTransaction;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)service:(id)arg0 linkedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)setupServiceMessageSelectorMappings;
-(void)startReachabilityTimer;
-(void)stopListeningForIDSSentMessages;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;
-(void)updateConnectivityTimer:(BOOL)arg0 ;


@end


#endif