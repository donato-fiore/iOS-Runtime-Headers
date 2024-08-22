// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLETSUBCREDENTIALPAIRINGSESSION_H
#define PKAPPLETSUBCREDENTIALPAIRINGSESSION_H

@class NSString, DAKeyPairingSession;
@protocol DAKeyPairingDelegate, PKAppletSubcredentialPairingSessionDelegate;


#import "PKDASession.h"

@interface PKAppletSubcredentialPairingSession : PKDASession <DAKeyPairingDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAppletSubcredentialPairingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DAKeyPairingSession *session;
@property (readonly) Class superclass;


+(id)createSessionWithDelegate:(id)arg0 ;
-(id)prewarmWithManufacturerIdentifier:(id)arg0 ;
-(id)probeTerminalForPairingStatus;
-(id)startPairingWithKeyDisplayName:(id)arg0 pairingPassword:(id)arg1 radioTechnologies:(NSUInteger)arg2 ;
-(id)trackSubcredential:(id)arg0 slotIdentifier:(id)arg1 confidentialMailboxData:(id)arg2 ephemeralPublicKey:(id)arg3 withReceipt:(id)arg4 ;
-(void)didFinishFirstTransactionForSession:(id)arg0 error:(id)arg1 ;
-(void)didFinishPreWarmWithResult:(id)arg0 ;
-(void)didFinishProbingWithBrandCode:(NSUInteger)arg0 error:(id)arg1 ;
-(void)didStartPairing;
-(void)keyPairingSession:(id)arg0 didFinishPairingWithKey:(id)arg1 trackingRequest:(id)arg2 error:(id)arg3 ;


@end


#endif