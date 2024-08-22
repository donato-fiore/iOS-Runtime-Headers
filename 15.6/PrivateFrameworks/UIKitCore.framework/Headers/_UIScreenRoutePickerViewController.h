// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCREENROUTEPICKERVIEWCONTROLLER_H
#define _UISCREENROUTEPICKERVIEWCONTROLLER_H

@class NSString;
@protocol UIAlertControllerContaining, OS_dispatch_semaphore;


#import "UIViewController.h"
#import "UIAlertController.h"
#import "_UIResilientRemoteViewContainerViewController.h"

@interface _UIScreenRoutePickerViewController : UIViewController <UIAlertControllerContaining>

 {
    UIAlertController *_alertController;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    NSObject<OS_dispatch_semaphore> *_remoteViewControllerSemaphore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_requiresCustomPresentationController;
-(NSInteger)modalPresentationStyle;
-(id)_containedAlertController;
-(id)_presentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)remoteViewController;
-(void)_commonInitWithCompletion:(id)arg0 ;
-(void)_setChildViewController:(id)arg0 ;
-(void)dealloc;
-(void)disconnectRoute;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)setCurrentOutputDeviceEnabled:(BOOL)arg0 ;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;


@end


#endif