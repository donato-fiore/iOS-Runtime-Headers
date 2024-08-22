// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLECONFIGURATIONVIEW_H
#define WFVARIABLECONFIGURATIONVIEW_H

@class UIInputView, NSString, UINavigationController;
@protocol UINavigationControllerDelegate;


#import "WFVariableConfigurationViewController.h"

@interface WFVariableConfigurationView : UIInputView <UINavigationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFVariableConfigurationViewController *viewController; // ivar: _viewController


-(CGFloat)preferredHeight;
-(id)initWithVariable:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif