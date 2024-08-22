// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIUSERDEFAULTSACTIVITYPRESENTABLEVIEWCONTROLLER_H
#define _UIUSERDEFAULTSACTIVITYPRESENTABLEVIEWCONTROLLER_H

@class UIViewController;



@interface _UIUserDefaultsActivityPresentableViewController : UIViewController

@property (retain, nonatomic) UIViewController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) UIViewController *userDefaultsViewController; // ivar: _userDefaultsViewController


-(id)initWithUserDefaultsViewController:(id)arg0 ;
-(void)_loadNavigationController;
-(void)viewDidLoad;


@end


#endif