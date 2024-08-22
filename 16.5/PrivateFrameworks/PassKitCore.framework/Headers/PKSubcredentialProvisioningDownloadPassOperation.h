// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALPROVISIONINGDOWNLOADPASSOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGDOWNLOADPASSOPERATION_H

@class NSURL;


#import "PKSubcredentialProvisioningOperation.h"
#import "PKAppletSubcredential.h"

@interface PKSubcredentialProvisioningDownloadPassOperation : PKSubcredentialProvisioningOperation {
    NSURL *_passURL;
    PKAppletSubcredential *_addedCredential;
}




-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)configureExpressModeForPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)downloadPassAtURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)performOperation;
-(void)performOperationWithCompletion:(id)arg0 ;
-(void)updatePassMetadata:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif