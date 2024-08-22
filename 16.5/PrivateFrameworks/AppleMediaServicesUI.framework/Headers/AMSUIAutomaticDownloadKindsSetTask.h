// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIAUTOMATICDOWNLOADKINDSSETTASK_H
#define AMSUIAUTOMATICDOWNLOADKINDSSETTASK_H

@class AMSTask, ACAccount, NSString, NSArray, AMSAutomaticDownloadKindsSetTask, UIViewController;
@protocol AMSBagConsumer, AMSRequestPresentationDelegate, AMSBagProtocol;



@interface AMSUIAutomaticDownloadKindsSetTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *enabledMediaKinds; // ivar: _enabledMediaKinds
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSAutomaticDownloadKindsSetTask *task; // ivar: _task
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


+(id)createBagForSubProfile;
-(id)initWithEnabledMediaKinds:(id)arg0 account:(id)arg1 bag:(id)arg2 viewController:(id)arg3 ;
-(id)perform;
-(void)handleAuthenticateRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif