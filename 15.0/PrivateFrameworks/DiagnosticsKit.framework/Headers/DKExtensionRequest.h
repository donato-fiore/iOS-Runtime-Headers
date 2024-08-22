// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKEXTENSIONREQUEST_H
#define DKEXTENSIONREQUEST_H

@class NSString, BKSProcessAssertion, UIViewController;
@protocol DKExtensionHostAdapterDelegate, DKRequest, OS_dispatch_semaphore, DKRequestDelegate, DKExtensionAttributes, NSCopying, DKExtensionHostAdapter;

#import <Foundation/Foundation.h>


@interface DKExtensionRequest : NSObject <DKExtensionHostAdapterDelegate, DKRequest>



@property (nonatomic, getter=isCanceled) BOOL canceled; // ivar: _canceled
@property (nonatomic, getter=isCompleted) BOOL completed; // ivar: _completed
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *connectSemaphore; // ivar: _connectSemaphore
@property (retain, nonatomic) id *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DKRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<DKExtensionAttributes> *extensionAttributes; // ivar: _extensionAttributes
@property (retain, nonatomic) NSObject<NSCopying> *extensionRequestIdentifier; // ivar: _extensionRequestIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<DKExtensionHostAdapter> *hostAdapter; // ivar: _hostAdapter
@property (weak, nonatomic) id *hostServicesDelegate; // ivar: _hostServicesDelegate
@property (nonatomic, getter=isInterrupted) BOOL interrupted; // ivar: _interrupted
@property (retain, nonatomic) id *payload; // ivar: _payload
@property (retain, nonatomic) BKSProcessAssertion *processAssertion; // ivar: _processAssertion
@property (retain, nonatomic) UIViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly, nonatomic) NSObject<NSCopying> *requestIdentifier; // ivar: _requestIdentifier
@property (readonly) Class superclass;


+(id)requestWithExtensionAttributes:(id)arg0 ;
-(BOOL)_extensionContext:(id)arg0 hasEntitlement:(id)arg1 ;
-(id)connectWithError:(*id)arg0 ;
-(id)initWithExtensionAttributes:(id)arg0 ;
-(void)_cancelTimedOutWithInfo:(id)arg0 ;
-(void)_dismissViewControllerWithCompletion:(id)arg0 ;
-(void)_finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)beginWithPayload:(id)arg0 ;
-(void)cancel;
-(void)cancelExtensionRequest;
-(void)cancelWithError:(id)arg0 ;
-(void)complete;
-(void)completeWithPayload:(id)arg0 completion:(id)arg1 ;
-(void)interrupt;


@end


#endif