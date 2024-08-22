// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIAUTHKITUPDATETASK_H
#define AMSUIAUTHKITUPDATETASK_H

@class AMSAuthKitUpdateTask, UIViewController;



@interface AMSUIAuthKitUpdateTask : AMSAuthKitUpdateTask

@property (readonly, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


-(NSUInteger)_authenticationType;
-(id)_createAuthKitContext;
-(id)_createAuthKitController;
-(id)initWithAccount:(id)arg0 presentingViewController:(id)arg1 options:(id)arg2 ;
-(void)_configureAuthKitContext:(id)arg0 ;


@end


#endif