// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IAMMODALVIEWCONTROLLER_H
#define IAMMODALVIEWCONTROLLER_H

@class UIViewController, UIView, NSString;
@protocol _UISheetPresentationControllerDelegate, IAMViewControllerMetricsDelegate;



@interface IAMModalViewController : UIViewController <_UISheetPresentationControllerDelegate>



@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<IAMViewControllerMetricsDelegate> *metricsDelegate; // ivar: _metricsDelegate
@property (nonatomic) BOOL shouldPresentFullscreen; // ivar: _shouldPresentFullscreen
@property (readonly) BOOL shouldUsePadLayout; // ivar: _shouldUsePadLayout
@property (readonly) Class superclass;
@property (copy, nonatomic) id *viewControllerWillDismissBlock; // ivar: _viewControllerWillDismissBlock


-(BOOL)shouldAutorotate;
-(NSInteger)preferredStatusBarStyle;
-(id)_presentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif