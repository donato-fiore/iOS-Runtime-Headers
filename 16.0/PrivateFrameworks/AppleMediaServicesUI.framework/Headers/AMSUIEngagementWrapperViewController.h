// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIENGAGEMENTWRAPPERVIEWCONTROLLER_H
#define AMSUIENGAGEMENTWRAPPERVIEWCONTROLLER_H

@class NSString, UIViewController;
@protocol UIAdaptivePresentationControllerDelegate;


#import "AMSUICommonViewController.h"

@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController <UIAdaptivePresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissBlock; // ivar: _dismissBlock
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 ;
-(void)_setup;
-(void)_setupContentSize;
-(void)dealloc;
-(void)loadView;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif