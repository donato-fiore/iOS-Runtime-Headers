// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIPEOPLEBOOTSTRAPFLOWCONTROLLER_H
#define PXUIPEOPLEBOOTSTRAPFLOWCONTROLLER_H

@class PHPerson;


#import "PXPeopleBootstrapFlowController.h"
#import "PXPeopleBootstrapConfirmationViewController.h"
#import "PXPeopleBootstrapFinalViewController.h"

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController

@property (retain, nonatomic) PXPeopleBootstrapConfirmationViewController *confirmationViewController; // ivar: _confirmationViewController
@property (retain, nonatomic) PXPeopleBootstrapFinalViewController *finalViewController; // ivar: _finalViewController
@property (readonly, nonatomic) PHPerson *sourcePerson;


-(id)_postNamingViewControllers;
-(void)computeViewControllersForBootstrapFlow;
-(void)done:(id)arg0 ;
-(void)recomputeViewControllersForChangeInKeyPath:(id)arg0 ;


@end


#endif