// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOUIAUTHORIZATIONVIEWCONTROLLER_H
#define SOUIAUTHORIZATIONVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, NSString;
@protocol _UIRemoteViewControllerContaining, UIGestureRecognizerDelegate, SOUIAuthorizationViewControllerDelegate;



@interface SOUIAuthorizationViewController : UIViewController <_UIRemoteViewControllerContaining, UIGestureRecognizerDelegate>

 {
    UIViewController *_extensionViewController;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SOUIAuthorizationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissCompletionHandler; // ivar: _dismissCompletionHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithExtensionViewController:(id)arg0 hints:(id)arg1 ;
-(void)_cancel;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif