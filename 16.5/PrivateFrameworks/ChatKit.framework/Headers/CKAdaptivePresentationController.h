// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKADAPTIVEPRESENTATIONCONTROLLER_H
#define CKADAPTIVEPRESENTATIONCONTROLLER_H

@class UIPopoverPresentationController, NSString, UIViewController;
@protocol UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate;

#import <Foundation/Foundation.h>

#import "CKPresentationControllerWindow.h"

@interface CKAdaptivePresentationController : NSObject <UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate>



@property (retain, nonatomic) UIPopoverPresentationController *currentPresentationController; // ivar: _currentPresentationController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalHandler; // ivar: _dismissalHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *presentationHandler; // ivar: _presentationHandler
@property (retain, nonatomic) CKPresentationControllerWindow *presentationWindow; // ivar: _presentationWindow
@property (retain, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)_cleanup;
// -(void)_presentViewController:(id)arg0 fromViewController:(id)arg1 presentationHandler:(id)arg2 barButtonItemPresentationHandler:(unk)arg3 dismissalHandler:(id)arg4 animated:(unk)arg5 completion:(id)arg6  ;
-(void)alertControllerViewDidDisappear:(id)arg0 ;
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
// -(void)presentViewController:(id)arg0 fromViewController:(id)arg1 barButtonItemPresentationHandler:(id)arg2 dismissalHandler:(unk)arg3 animated:(id)arg4 completion:(unk)arg5  ;
// -(void)presentViewController:(id)arg0 fromViewController:(id)arg1 presentationHandler:(id)arg2 dismissalHandler:(unk)arg3 animated:(id)arg4 completion:(unk)arg5  ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif