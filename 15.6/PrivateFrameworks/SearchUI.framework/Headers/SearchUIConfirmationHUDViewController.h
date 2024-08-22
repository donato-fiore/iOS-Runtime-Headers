// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICONFIRMATIONHUDVIEWCONTROLLER_H
#define SEARCHUICONFIRMATIONHUDVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIViewControllerTransitioningDelegate;


#import "SearchUIConfirmationHUDView.h"

@interface SearchUIConfirmationHUDViewController : UIViewController <UIViewControllerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SearchUIConfirmationHUDView *view;


-(BOOL)_canShowWhileLocked;
-(NSInteger)preferredUserInterfaceStyle;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(void)setTitle:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif