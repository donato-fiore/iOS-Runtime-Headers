// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSENROLLMENTNAVIGATIONCONTROLLER_H
#define PSENROLLMENTNAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol PSEnrollmentNavigationControllerDismissalDelegate;



@interface PSEnrollmentNavigationController : UINavigationController

@property (weak, nonatomic) NSObject<PSEnrollmentNavigationControllerDismissalDelegate> *dismissalDelegate; // ivar: _dismissalDelegate


-(BOOL)canBeShownFromSuspendedState;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_backgroundColorForModalFormSheet;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif