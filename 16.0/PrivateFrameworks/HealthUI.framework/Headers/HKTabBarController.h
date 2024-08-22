// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKTABBARCONTROLLER_H
#define HKTABBARCONTROLLER_H

@class UITabBarController, NSString, UIViewController;
@protocol UITabBarControllerDelegate;



@interface HKTabBarController : UITabBarController <UITabBarControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *previousViewController; // ivar: _previousViewController
@property (readonly) Class superclass;


-(NSUInteger)tabBarControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)setTabBarControlsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tabBarController:(id)arg0 didSelectViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif