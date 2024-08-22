// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKCOMPANIONVIEWSERVICECONNECTION_H
#define NPKCOMPANIONVIEWSERVICECONNECTION_H

@class PKXPCService, NSString;
@protocol PKXPCServiceDelegate, NPKCompanionViewServiceConnectionClientProtocol, NPKCompanionViewServiceConnectionDelegate;

#import <Foundation/Foundation.h>


@interface NPKCompanionViewServiceConnection : NSObject <PKXPCServiceDelegate, NPKCompanionViewServiceConnectionClientProtocol>

 {
    PKXPCService *_remoteService;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKCompanionViewServiceConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_errorHandlerWithCompletion:(SEL)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)handleCompanionItemSelectionRequestCancelledForRequestIdentifier:(id)arg0 ;
-(void)handleCompanionItemSelectionRequestFinishedWithRenewalAmount:(id)arg0 serviceProviderData:(id)arg1 forRequestIdentifier:(id)arg2 ;
-(void)handleCompanionValueEntryCancelledForRequestIdentifier:(id)arg0 ;
-(void)handleCompanionValueEntryFinishedWithCurrencyAmount:(id)arg0 forRequestIdentifier:(id)arg1 ;
-(void)presentRemotePassItemSelectionViewControllerForRequest:(id)arg0 contact:(id)arg1 completion:(id)arg2 ;
-(void)presentRemotePassValueEntryViewControllerForRequest:(id)arg0 contact:(id)arg1 completion:(id)arg2 ;
-(void)remoteService:(id)arg0 didEstablishConnection:(id)arg1 ;
-(void)remoteService:(id)arg0 didInterruptConnection:(id)arg1 ;
-(void)serviceResumed;
-(void)serviceSuspended;


@end


#endif