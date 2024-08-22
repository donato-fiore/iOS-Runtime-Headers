// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUIROOTVIEWCONTROLLER_H
#define AXUIROOTVIEWCONTROLLER_H

@class UIViewController;



@interface AXUIRootViewController : UIViewController



+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_canShowWhileLocked;
-(BOOL)accessibilityPostScreenChangedForChildViewController:(id)arg0 isAddition:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif