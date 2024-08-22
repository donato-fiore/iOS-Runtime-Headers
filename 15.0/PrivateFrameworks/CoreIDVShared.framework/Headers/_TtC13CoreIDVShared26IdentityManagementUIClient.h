// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC13COREIDVSHARED26IDENTITYMANAGEMENTUICLIENT_H
#define _TTC13COREIDVSHARED26IDENTITYMANAGEMENTUICLIENT_H

@protocol _TtP13CoreIDVShared28IdentityManagementUIProtocol_;

#import <Foundation/Foundation.h>


@interface _TtC13CoreIDVShared26IdentityManagementUIClient : NSObject <_TtP13CoreIDVShared28IdentityManagementUIProtocol_>

 {
    ? serverConnection;
    ? disconnectHandler;
    ? remoteObjectProxy;
    ? remoteObjectProxyError;
}




-(id)init;
-(void)deleteBoundACLWithCompletion:(id)arg0 ;
-(void)fetchImageQualitySettingsWithCompletion:(id)arg0 ;
-(void)fetchTermsAndConditionsWithCompletion:(id)arg0 ;
-(void)getLivenessConfigWithCompletion:(id)arg0 ;
-(void)isWatchPaired:(id)arg0 ;
-(void)prepareForProofingDisplay:(id)arg0 proofingOptions:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)prepareForProofingIdentity:(id)arg0 completion:(id)arg1 ;
-(void)proofIdentity:(id)arg0 completion:(id)arg2 ;
-(void)proofIdentityUsing:(id)arg0 completion:(id)arg1 ;
-(void)proofingCancelled:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)proofingFlowAvailability:(id)arg0 ;
-(void)provisionIdentityWithState:(id)arg0 proofingOptions:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)retrieveBioBindingUnboundACL:(id)arg0 ;
-(void)retrieveBoundACL:(id)arg0 ;
-(void)retrievePasscodeBindingUnboundACL:(id)arg0 ;
-(void)setGlobalBoundACLWithData:(id)arg0 type:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setModifiedGlobalBoundACLWithData:(id)arg0 externalizedLAContext:(id)arg1 completion:(id)arg2 ;
-(void)uploadLivenessVideoWithFileHandle:(id)arg0 encryptionKey:(id)arg1 nonce:(id)arg2 atURLForInternalDiagnosticsOnFailedLivenessCheck:(id)arg3 withCompletion:(id)arg4 ;
-(void)verifyAccountStatusWithCompletion:(id)arg0 ;


@end


#endif