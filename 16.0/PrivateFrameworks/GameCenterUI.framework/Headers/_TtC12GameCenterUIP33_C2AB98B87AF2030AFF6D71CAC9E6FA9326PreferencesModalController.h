// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUIP33_C2AB98B87AF2030AFF6D71CAC9E6FA9326PREFERENCESMODALCONTROLLER_H
#define _TTC12GAMECENTERUIP33_C2AB98B87AF2030AFF6D71CAC9E6FA9326PREFERENCESMODALCONTROLLER_H

@class UINavigationController;
@protocol UINavigationControllerDelegate;



@interface _TtC12GameCenterUIP33_C2AB98B87AF2030AFF6D71CAC9E6FA9326PreferencesModalController : UINavigationController <UINavigationControllerDelegate>



@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic) CGSize preferredContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)didTapDone;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;


@end


#endif