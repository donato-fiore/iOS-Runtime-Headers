// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIAUTHENTICATETASK_H
#define AMSUIAUTHENTICATETASK_H

@class AMSAuthenticateTask, NSString, UIViewController;
@protocol AMSAuthenticateTaskDelegate, AMSBagProtocol;



@interface AMSUIAuthenticateTask : AMSAuthenticateTask <AMSAuthenticateTaskDelegate>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(id)_createAuthKitUpdateTaskForAccount:(id)arg0 ;
-(id)_presentEngagementRequest:(id)arg0 ;
-(id)initWithAccount:(id)arg0 presentingViewController:(id)arg1 options:(id)arg2 ;
-(id)initWithAccount:(id)arg0 presentingViewController:(id)arg1 options:(id)arg2 bag:(id)arg3 ;
-(id)initWithAuthenticationResults:(id)arg0 presentingViewController:(id)arg1 options:(id)arg2 ;
-(id)initWithAuthenticationResults:(id)arg0 presentingViewController:(id)arg1 options:(id)arg2 bag:(id)arg3 ;
-(id)initWithRequest:(id)arg0 presentingViewController:(id)arg1 ;
-(id)initWithRequest:(id)arg0 presentingViewController:(id)arg1 bag:(id)arg2 ;
-(void)authenticateTask:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif