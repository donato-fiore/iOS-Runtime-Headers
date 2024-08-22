// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGPAIRINGOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGPAIRINGOPERATION_H

@class NSString;
@protocol PKAppletSubcredentialPairingSessionDelegate;


#import "PKSubcredentialProvisioningPairingSessionOperation.h"

@interface PKSubcredentialProvisioningPairingOperation : PKSubcredentialProvisioningPairingSessionOperation <PKAppletSubcredentialPairingSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)appletSubcredentialPairingSession:(id)arg0 didEndPairingWithError:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didEndPairingWithSubcredential:(id)arg1 registrationData:(id)arg2 ;
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg0 ;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;


@end


#endif