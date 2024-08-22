// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDASHBOARDNAVIGATIONCONTROLLER_H
#define HUDASHBOARDNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString, UINavigationBar;
@protocol HUDashboardNavigationBarDelegate;



@interface HUDashboardNavigationController : UINavigationController <HUDashboardNavigationBarDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UINavigationBar *displayedNavigationBar; // ivar: _displayedNavigationBar
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSInteger)preferredStatusBarStyle;
-(id)_targetNavigationBarForUISplitViewControllerSidebarButton;
-(id)childViewControllerForStatusBarStyle;
-(void)navigationBar:(id)arg0 didChangeBackgroundVisibility:(BOOL)arg1 ;


@end


#endif