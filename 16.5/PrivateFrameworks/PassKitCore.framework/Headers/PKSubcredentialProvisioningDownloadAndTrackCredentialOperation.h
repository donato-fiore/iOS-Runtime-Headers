// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALPROVISIONINGDOWNLOADANDTRACKCREDENTIALOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGDOWNLOADANDTRACKCREDENTIALOPERATION_H

@class NSError;


#import "PKSubcredentialProvisioningPairingSessionOperation.h"
#import "PKSubcredentialProvisioningDownloadPassOperation.h"
#import "PKSubcredentialProvisioningTrackCredentialOperation.h"

@interface PKSubcredentialProvisioningDownloadAndTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {
    PKSubcredentialProvisioningDownloadPassOperation *_downloadOperation;
    PKSubcredentialProvisioningTrackCredentialOperation *_trackOperation;
    NSError *_downloadOperationError;
    NSError *_trackOperationError;
}




-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg0 withError:(id)arg1 ;
-(void)performOperation;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;


@end


#endif