// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI20NAVIGATIONCONTROLLER_H
#define _TTC5TEAUI20NAVIGATIONCONTROLLER_H



#import "TUNavigationController.h"

@interface _TtC5TeaUI20NavigationController : TUNavigationController {
    ? styler;
}




-(BOOL)accessibilityPerformEscape;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 navigationBarClass:(Class)arg1 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(id)popToViewController:(id)arg0 animated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif