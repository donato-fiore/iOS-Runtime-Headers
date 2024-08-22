// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKNANOPASSDAEMONCONNECTION_H
#define NPKNANOPASSDAEMONCONNECTION_H

@class NSString, PKXPCService;
@protocol PKXPCServiceDelegate;

#import <Foundation/Foundation.h>


@interface NPKNanoPassDaemonConnection : NSObject <PKXPCServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKXPCService *remoteService; // ivar: _remoteService
@property (readonly) Class superclass;


-(id)_errorHandlerWithCompletion:(SEL)arg0 ;
-(id)_remoteObjectProxySynchronous:(BOOL)arg0 withFailureHandler:(id)arg1 ;
-(id)init;
-(void)canAcceptInvitationOnRemoteDeviceForInvitation:(id)arg0 completion:(id)arg1 ;
-(void)handleApplicationRedirectRequestOnPairedDeviceForPaymentPass:(id)arg0 transaction:(id)arg1 ;
-(void)handleMetadataRequestOnPairedDevice:(id)arg0 withAssociatedApplicationIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)identityPassPrearmStatusSynchronous:(BOOL)arg0 completion:(id)arg1 ;
-(void)noteWillDeleteAccountsSynchronous:(BOOL)arg0 completion:(id)arg1 ;
-(void)remoteService:(id)arg0 didEstablishConnection:(id)arg1 ;
-(void)remoteService:(id)arg0 didInterruptConnection:(id)arg1 ;
-(void)remoteServiceDidResume:(id)arg0 ;
-(void)remoteServiceDidSuspend:(id)arg0 ;
-(void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)arg0 shouldFetchAnonymizationSaltFromRemoteDevice:(BOOL)arg1 completion:(id)arg2 ;
-(void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)arg0 ;
-(void)statusForReceivedInvitation:(id)arg0 completion:(id)arg1 ;
-(void)statusForSentInvitation:(id)arg0 completion:(id)arg1 ;


@end


#endif