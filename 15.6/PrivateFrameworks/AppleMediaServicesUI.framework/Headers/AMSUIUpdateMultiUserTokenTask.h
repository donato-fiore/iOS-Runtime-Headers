// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIUPDATEMULTIUSERTOKENTASK_H
#define AMSUIUPDATEMULTIUSERTOKENTASK_H

@class AMSTask, ACAccount, NSUUID, UIViewController;



@interface AMSUIUpdateMultiUserTokenTask : AMSTask

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


+(BOOL)_errorIsRecoverable:(id)arg0 ;
-(id)initWithAccount:(id)arg0 homeIdentifier:(id)arg1 viewController:(id)arg2 ;
-(id)performTask;


@end


#endif