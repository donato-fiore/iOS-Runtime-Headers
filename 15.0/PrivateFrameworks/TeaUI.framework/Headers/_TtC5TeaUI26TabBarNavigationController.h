// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI26TABBARNAVIGATIONCONTROLLER_H
#define _TTC5TEAUI26TABBARNAVIGATIONCONTROLLER_H

@class TtC5TeaUI20NavigationController, NSString, UITabBarItem, NSArray;



@interface _TtC5TeaUI26TabBarNavigationController : TtC5TeaUI20NavigationController {
    ? rootViewController;
    ? commandCenter;
    ? animateAlongsideTabBarSnapshot;
    ? viewControllerDepth;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) UITabBarItem *tabBarItem;
@property (nonatomic, copy) NSArray *viewControllers;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 navigationBarClass:(Class)arg1 ;


@end


#endif