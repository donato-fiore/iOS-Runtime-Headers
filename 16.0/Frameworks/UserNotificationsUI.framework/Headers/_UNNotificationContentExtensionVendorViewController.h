// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UNNOTIFICATIONCONTENTEXTENSIONVENDORVIEWCONTROLLER_H
#define _UNNOTIFICATIONCONTENTEXTENSIONVENDORVIEWCONTROLLER_H

@class UIViewController, UIScrollViewDelayedTouchesBeganGestureRecognizer, NSString, UIViewController<UNNotificationContentExtension>;
@protocol _UNNotificationContentExtensionVendorContainer;



@interface _UNNotificationContentExtensionVendorViewController : UIViewController <_UNNotificationContentExtensionVendorContainer>

 {
    atomic_flag _invalidationOnceFlag;
    UIScrollViewDelayedTouchesBeganGestureRecognizer *_touchDelayGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIViewController<UNNotificationContentExtension> *extensionViewController; // ivar: _extensionViewController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
-(BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
-(BOOL)canBecomeFirstResponder;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)_extensionBundleIdentifier;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)notificationExtensionVendorContext;
-(void)_invalidateExtensionContext;
-(void)_setupExtensionViewController:(id)arg0 ;
-(void)_willAppearInRemoteViewController:(id)arg0 ;
-(void)addChildViewController:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)dealloc;
-(void)delayed:(id)arg0 ;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)preserveInputViews;
-(void)restoreInputViews;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif