// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIMODALCONTAINERVIEWCONTROLLER_H
#define SIRIUIMODALCONTAINERVIEWCONTROLLER_H

@class UIViewController;
@protocol SiriUIModalContainerViewControllerDelegate;



@interface SiriUIModalContainerViewController : UIViewController

@property (readonly, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (weak, nonatomic) NSObject<SiriUIModalContainerViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_canShowWhileLocked;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithContentViewController:(id)arg0 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif