// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIBASEVIEWCONTROLLER_H
#define VUIBASEVIEWCONTROLLER_H

@class UIViewController;



@interface VUIBaseViewController : UIViewController



-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)loadView;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif