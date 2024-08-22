// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGTRACKCREDENTIALOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGTRACKCREDENTIALOPERATION_H

@class NSData;


#import "PKSubcredentialProvisioningPairingSessionOperation.h"
#import "PKAppletSubcredential.h"

@interface PKSubcredentialProvisioningTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {
    BOOL _performingOperation;
    BOOL _hasTrackedCredential;
    BOOL _firstTransactionCompleted;
    PKAppletSubcredential *_subcredential;
    NSData *_trackingAttestation;
    id *_completionHandler;
}




-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg0 withError:(id)arg1 ;
-(void)performOperation;
-(void)performOperationWithCompletion:(id)arg0 ;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)trackCredentialWithAttestation;


@end


#endif