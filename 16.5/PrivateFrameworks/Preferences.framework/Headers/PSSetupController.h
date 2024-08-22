// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSETUPCONTROLLER_H
#define PSSETUPCONTROLLER_H

@class NSDictionary, UIViewController<PSController>;


#import "PSRootController.h"

@interface PSSetupController : PSRootController {
    NSDictionary *_rootInfo;
    UIViewController<PSController> *_parentController;
    PSRootController *_parentRootController;
}




-(BOOL)popupStyleIsModal;
-(BOOL)usePopupStyle;
-(id)controller;
-(id)init;
-(id)parentController;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)handleURL:(id)arg0 ;
-(void)popControllerOnParent;
-(void)pushControllerOnParentWithSpecifier:(id)arg0 ;
-(void)setParentController:(id)arg0 ;
-(void)setupController;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)statusBarWillChangeHeight:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif