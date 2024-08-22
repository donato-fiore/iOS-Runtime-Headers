// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEFLOWNAVIGATIONCONTROLLER_H
#define PXPEOPLEFLOWNAVIGATIONCONTROLLER_H

@class UINavigationController, UIBarButtonItem, UIViewController<PXPeopleFlowViewController>, NSString;
@protocol PXPeopleFlowViewControllerActionDelegate, UINavigationControllerDelegate, PXPeopleFlowController;



@interface PXPeopleFlowNavigationController : UINavigationController <PXPeopleFlowViewControllerActionDelegate, UINavigationControllerDelegate>



@property (retain, nonatomic) UIBarButtonItem *backButton; // ivar: _backButton
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UIViewController<PXPeopleFlowViewController> *currentViewController; // ivar: _currentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (retain, nonatomic) NSObject<PXPeopleFlowController> *flowController; // ivar: _flowController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *nextButton; // ivar: _nextButton
@property (readonly) Class superclass;


-(BOOL)_enableBootstrapSpeedBump;
-(id)initWithFlowController:(id)arg0 ;
-(void)_updateActions;
-(void)back:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)next:(id)arg0 ;
-(void)requestAdvanceToNextInFlow;
-(void)requestCancel;
-(void)requestDone;
-(void)setAdvanceButtonEnabled:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif