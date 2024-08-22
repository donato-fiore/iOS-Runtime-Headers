// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIENGAGEMENTREMOTEVIEWTASK_H
#define AMSUIENGAGEMENTREMOTEVIEWTASK_H

@class AMSTask, AMSProcessInfo, NSString, NSError, UIViewController, NSXPCListener, AMSEngagementRequest, AMSEngagementResult;
@protocol AMSUIEngagementTaskHostInterface, AMSBagProtocol, OS_dispatch_group;



@interface AMSUIEngagementRemoteViewTask : AMSTask <AMSUIEngagementTaskHostInterface>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // ivar: _dispatchGroup
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (retain, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (retain, nonatomic) NSXPCListener *remoteListener; // ivar: _remoteListener
@property (retain, nonatomic) AMSEngagementRequest *request; // ivar: _request
@property (retain, nonatomic) AMSEngagementResult *result; // ivar: _result
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)_snapshotBagDataPromise;
-(id)initWithRequest:(id)arg0 presentingViewController:(id)arg1 ;
-(id)presentEngagement;
-(void)_presentViewController:(id)arg0 ;
-(void)_unblock;
-(void)engagementTaskDidFinishWithResult:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)preferredContentSizeDidChange:(struct CGSize )arg0 ;


@end


#endif