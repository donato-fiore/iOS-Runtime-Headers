// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGACCOUNTATTESTATIONOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGACCOUNTATTESTATIONOPERATION_H



#import "PKSubcredentialProvisioningSharingSessionOperation.h"
#import "PKAppletSubcredential.h"
#import "PKPaymentWebService.h"
#import "PKAppletSubcredentialSharingInvitationMetadata.h"

@interface PKSubcredentialProvisioningAccountAttestationOperation : PKSubcredentialProvisioningSharingSessionOperation {
    PKAppletSubcredential *_credential;
    PKPaymentWebService *_webService;
    PKAppletSubcredentialSharingInvitationMetadata *_metadata;
    BOOL _operationCompleted;
}




-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)_setAccountAttestationWithSession:(id)arg0 ;
-(void)accountAttesatationAnonymizationSaltWithCompletion:(id)arg0 ;
-(void)performOperation;
-(void)performOperationWithSession:(id)arg0 ;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;


@end


#endif