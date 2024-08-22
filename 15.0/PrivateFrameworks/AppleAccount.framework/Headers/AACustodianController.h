// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AACUSTODIANCONTROLLER_H
#define AACUSTODIANCONTROLLER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "AACustodianDaemonConnection.h"

@interface AACustodianController : NSObject {
    AACustodianDaemonConnection *_daemonConnection;
    NSString *_ownerCustodianAltDSID;
    NSData *_encryptedPRKC;
}




-(BOOL)cancelCustodianRecoveryWithSessionID:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg0 ;
-(void)displayInvitationUIWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)displayTrustedContactFlowWithModel:(id)arg0 completion:(id)arg1 ;
-(void)fetchCustodianHealthStatusWithCompletion:(id)arg0 ;
-(void)fetchCustodianPasswordResetInformationWithSessionID:(id)arg0 completion:(id)arg1 ;
-(void)fetchCustodianRecoveryConfigurationWithCompletion:(id)arg0 ;
-(void)fetchCustodianRecoveryKeysWithSessionID:(id)arg0 completion:(id)arg1 ;
-(void)fetchCustodianshipInfoWithCompletion:(id)arg0 ;
-(void)fetchCustodianshipInfoWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchSuggestedCustodiansWithCompletion:(id)arg0 ;
-(void)fetchTrustedContactsWithCompletion:(id)arg0 ;
-(void)generateCustodianRecoveryCodeWithContext:(id)arg0 completion:(id)arg1 ;
-(void)pullTrustedContactsFromCloudKitWithCompletion:(id)arg0 ;
-(void)reSendCustodianInvitationWithCustodianID:(id)arg0 completion:(id)arg1 ;
-(void)removeCustodian:(id)arg0 completion:(id)arg1 ;
-(void)respondToCustodianRequestWithResponse:(id)arg0 completion:(id)arg1 ;
-(void)setupCustodianshipWithContext:(id)arg0 completion:(id)arg1 ;
-(void)startCustodianRecoveryWithContext:(id)arg0 completion:(id)arg1 ;
-(void)startHealthCheckWithCompletion:(id)arg0 ;
-(void)startManateeMigrationWithCompletion:(id)arg0 ;
-(void)stopBeingCustodian:(id)arg0 completion:(id)arg1 ;
-(void)validateCustodianRecoveryCodeWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif