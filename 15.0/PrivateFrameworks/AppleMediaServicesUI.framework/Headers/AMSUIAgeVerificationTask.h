// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIAGEVERIFICATIONTASK_H
#define AMSUIAGEVERIFICATIONTASK_H

@class AMSTask, ACAccount, NSString, NSDictionary, AMSAgeVerificationTask, UIViewController;
@protocol AMSBagConsumer, AMSRequestPresentationDelegate, AMSBagProtocol;



@interface AMSUIAgeVerificationTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) NSString *pincode;
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSAgeVerificationTask *task; // ivar: _task
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


+(id)createBagForSubProfile;
-(id)_performTaskForAccount:(id)arg0 withBag:(id)arg1 viewController:(id)arg2 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 options:(id)arg2 viewController:(id)arg3 ;
-(id)isVerificationNeeded;
-(id)performTask;
-(void)handleAuthenticateRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif