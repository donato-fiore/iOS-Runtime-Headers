// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKFRIENDREQUESTVIEWCONTROLLER_H
#define GKFRIENDREQUESTVIEWCONTROLLER_H

@class NSString, NSArray, UIViewController;
@protocol GKFriendRequestViewControllerDelegate;


#import "GKHostedViewController.h"

@interface GKFriendRequestViewController : GKHostedViewController

@property (retain, nonatomic) NSString *chatGUID; // ivar: _chatGUID
@property (weak, nonatomic) NSObject<GKFriendRequestViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *friendCode; // ivar: _friendCode
@property (retain, nonatomic) NSString *friendSupportPageURL; // ivar: _friendSupportPageURL
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (weak, nonatomic) UIViewController *requestingViewController; // ivar: _requestingViewController


+(void)addFriends:(id)arg0 ;
+(void)addFriends:(id)arg0 recipients:(id)arg1 ;
+(void)presentAlertControllerOn:(id)arg0 withMessage:(id)arg1 andTitle:(id)arg2 ;
+(void)presentFriendRequestOn:(id)arg0 forRecipients:(id)arg1 withFriendCode:(id)arg2 andFriendSupportPageURL:(id)arg3 ;
-(id)_presentingViewController;
-(id)init;
-(id)serviceSideViewControllerClassName;
-(void)notifyDelegateOnWillFinish;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif