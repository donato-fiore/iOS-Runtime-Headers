// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSENROLLCONTAINERVIEWCONTROLLER_H
#define PSENROLLCONTAINERVIEWCONTROLLER_H

@class UIViewController, BiometricKitUIEnrollViewController;



@interface PSEnrollContainerViewController : UIViewController

@property (retain, nonatomic) BiometricKitUIEnrollViewController *enrollController; // ivar: _enrollController


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)isModalInPresentation;
-(struct CGSize )preferredContentSize;
-(void)dealloc;
-(void)teardown;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif