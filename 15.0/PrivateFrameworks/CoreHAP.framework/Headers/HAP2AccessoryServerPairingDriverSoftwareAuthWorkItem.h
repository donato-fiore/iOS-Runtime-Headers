// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERPAIRINGDRIVERSOFTWAREAUTHWORKITEM_H
#define HAP2ACCESSORYSERVERPAIRINGDRIVERSOFTWAREAUTHWORKITEM_H

@class NSError, NSString;
@protocol HAPAuthSessionDelegate, HAP2AccessoryServerEncoding, HAP2AccessoryServerSecureTransport;


#import "HAP2AccessoryServerPairingDriverWorkItem.h"
#import "HAPAuthSession.h"
#import "HAPAccessoryProtocolInfo.h"
#import "HAPPairSetupSession.h"

@interface HAP2AccessoryServerPairingDriverSoftwareAuthWorkItem : HAP2AccessoryServerPairingDriverWorkItem <HAPAuthSessionDelegate>

 {
    BOOL _sendPDUHeader;
}


@property (retain, nonatomic) HAPAuthSession *authSession; // ivar: _authSession
@property (retain, nonatomic) HAPAccessoryProtocolInfo *authenticatedProtocolInfo; // ivar: _authenticatedProtocolInfo
@property (retain, nonatomic) NSError *cancelError; // ivar: _cancelError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerEncoding> *encoding; // ivar: _encoding
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPPairSetupSession *pairingSession; // ivar: _pairingSession
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerSecureTransport> *transport; // ivar: _transport


+(id)doSoftwareAuth;
-(BOOL)_isProtocolInfoValid:(id)arg0 ;
-(void)_handleAuthCompleteWithError:(id)arg0 ;
-(void)_sendSoftwareAuthMessageWithData:(id)arg0 completion:(id)arg1 ;
-(void)_softwareAuthFinished;
-(void)_startSoftwareAuth;
-(void)_validateAccessoryInfoWithCompletion:(id)arg0 ;
-(void)authSession:(id)arg0 authComplete:(id)arg1 ;
-(void)authSession:(id)arg0 authenticateUUID:(id)arg1 token:(id)arg2 ;
-(void)authSession:(id)arg0 confirmUUID:(id)arg1 token:(id)arg2 ;
-(void)authSession:(id)arg0 sendAuthExchangeData:(id)arg1 ;
-(void)authSession:(id)arg0 validateUUID:(id)arg1 token:(id)arg2 ;
-(void)cancelWithError:(id)arg0 ;
-(void)runForPairingDriver:(id)arg0 ;


@end


#endif