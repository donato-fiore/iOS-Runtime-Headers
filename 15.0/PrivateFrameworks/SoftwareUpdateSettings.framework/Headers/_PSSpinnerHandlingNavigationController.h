// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSSPINNERHANDLINGNAVIGATIONCONTROLLER_H
#define _PSSPINNERHANDLINGNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol UINavigationControllerDelegate;



@interface _PSSpinnerHandlingNavigationController : UINavigationController <UINavigationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_removeSpinnerViewControllerIfNeeded;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif