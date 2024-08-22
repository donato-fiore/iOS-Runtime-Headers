// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIALERTDIALOGTASK_H
#define AMSUIALERTDIALOGTASK_H

@class AMSTask, UIViewController, AMSDialogRequest;



@interface AMSUIAlertDialogTask : AMSTask

@property (readonly, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic) AMSDialogRequest *request; // ivar: _request


+(NSInteger)_keyboardTypeFromType:(NSInteger)arg0 ;
-(BOOL)cancel;
-(id)_createIOSViewControllerFromRequest:(id)arg0 completion:(id)arg1 ;
-(id)initWithRequest:(id)arg0 presentingViewController:(id)arg1 ;
-(id)present;


@end


#endif