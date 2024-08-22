// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERSECURETRANSPORTPAIRVERIFY_H
#define HAP2ACCESSORYSERVERSECURETRANSPORTPAIRVERIFY_H

@class NSString;
@protocol HAP2AccessoryServerTransportDelegate, HAPSecuritySessionDelegate;


#import "HAP2AccessoryServerSecureTransportBase.h"
#import "HAPSecuritySession.h"
#import "HAP2AccessorySessionInfo.h"

@interface HAP2AccessoryServerSecureTransportPairVerify : HAP2AccessoryServerSecureTransportBase <HAP2AccessoryServerTransportDelegate, HAPSecuritySessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPSecuritySession *securitySession; // ivar: _securitySession
@property (retain, nonatomic) HAP2AccessorySessionInfo *sessionInfo; // ivar: _sessionInfo
@property (copy, nonatomic) id *stateChangeCompletion; // ivar: _stateChangeCompletion
@property (readonly) Class superclass;


-(id)initWithTransport:(id)arg0 operationQueue:(id)arg1 ;
-(id)securitySession:(id)arg0 didReceiveLocalPairingIdentityRequestWithError:(*id)arg1 ;
-(id)securitySession:(id)arg0 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(void)_closeWithError:(id)arg0 ;
-(void)_openTransport;
-(void)_secureTransport;
-(void)_sendSetupExchangeData:(id)arg0 ;
-(void)doCloseWithError:(id)arg0 completion:(id)arg1 ;
-(void)doOpenWithCompletion:(id)arg0 ;
-(void)securitySession:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)securitySession:(id)arg0 didReceiveSetupExchangeData:(id)arg1 ;
-(void)securitySessionDidOpen:(id)arg0 ;


@end


#endif