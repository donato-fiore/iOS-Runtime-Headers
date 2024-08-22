// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMPUSERNOTIFICATIONVIEWCONTROLLER_H
#define AMPUSERNOTIFICATIONVIEWCONTROLLER_H

@class UIViewController, NSString, UIColor;
@protocol AMPUserNotificationContentDelegate, UNNotificationContentExtension, AMSURLBagContract;


#import "AMPUserNotificationContentViewController.h"

@interface AMPUserNotificationViewController : UIViewController <AMPUserNotificationContentDelegate, UNNotificationContentExtension>



@property (retain, nonatomic) NSObject<AMSURLBagContract> *bagContract; // ivar: _bagContract
@property (retain, nonatomic) AMPUserNotificationContentViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect mediaPlayPauseButtonFrame;
@property (readonly, copy, nonatomic) UIColor *mediaPlayPauseButtonTintColor;
@property (readonly, nonatomic) NSUInteger mediaPlayPauseButtonType;
@property (readonly) Class superclass;


+(id)userNotificationFromNotification:(id)arg0 ;
-(void)didReceiveNotification:(id)arg0 ;
-(void)didReceiveNotificationResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)openNotification;
-(void)renderUserNotification:(id)arg0 ;
-(void)viewController:(id)arg0 didUpdatePreferredContentSize:(struct CGSize )arg1 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif