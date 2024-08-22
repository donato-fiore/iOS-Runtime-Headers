// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALPROVISIONINGPAIRINGSESSIONOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGPAIRINGSESSIONOPERATION_H

@class NSString;
@protocol PKAppletSubcredentialPairingSessionDelegate;


#import "PKSubcredentialProvisioningSessionOperation.h"

@interface PKSubcredentialProvisioningPairingSessionOperation : PKSubcredentialProvisioningSessionOperation <PKAppletSubcredentialPairingSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(id)pairingSession;
-(void)appletSubcredentialPairingSession:(id)arg0 didEndPairingWithError:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didEndPairingWithSubcredential:(id)arg1 registrationData:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didFinishPreWarmWithResult:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didFinishProbingTerminalWithError:(id)arg1 brandCode:(NSUInteger)arg2 ;
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg0 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg0 withError:(id)arg1 ;


@end


#endif