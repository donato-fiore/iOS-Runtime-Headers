// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUIP33_ED65E62AB2E9DEC955C1CAF6BA7C69F726CUSTOMNAVIGATIONCONTROLLER_H
#define _TTC12GAMECENTERUIP33_ED65E62AB2E9DEC955C1CAF6BA7C69F726CUSTOMNAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol UINavigationControllerDelegate;



@interface _TtC12GameCenterUIP33_ED65E62AB2E9DEC955C1CAF6BA7C69F726CustomNavigationController : UINavigationController <UINavigationControllerDelegate>

 {
    ? dismissHandler;
    ? shouldShowCloseButton;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)donePressed:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;


@end


#endif