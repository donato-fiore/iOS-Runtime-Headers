// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPBROADCASTACTIVITYVIEWCONTROLLER_H
#define RPBROADCASTACTIVITYVIEWCONTROLLER_H

@class UIViewController, UIPopoverPresentationController;
@protocol RPBroadcastActivityViewControllerDelegate;


#import "RPBroadcastActivityHostViewController.h"

@interface RPBroadcastActivityViewController : UIViewController

@property (weak, nonatomic) NSObject<RPBroadcastActivityViewControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *didFinishHandler; // ivar: _didFinishHandler
@property (retain, nonatomic) RPBroadcastActivityHostViewController *hostViewController; // ivar: _hostViewController
@property (retain, nonatomic) UIPopoverPresentationController *popoverPresentationControllerProxy; // ivar: _popoverPresentationControllerProxy


+(void)loadBroadcastActivityViewControllerWithHandler:(id)arg0 ;
+(void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg0 handler:(id)arg1 ;
// +(void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg0 handler:(id)arg1 broadcastActivitiesNotInstalledAlertTitle:(unk)arg2 broadcastActivitiesNotInstalledAlertMessage:(id)arg3 atPoint:(id)arg4 fromWindow:(struct CGPoint )arg5  ;
+(void)viewControllerForExtension:(id)arg0 inputItems:(id)arg1 completionHandler:(id)arg2 ;
-(id)popoverPresentationController;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)extensionDidFinishWithLaunchURL:(id)arg0 broadcastURL:(id)arg1 extensionBundleID:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;


@end


#endif