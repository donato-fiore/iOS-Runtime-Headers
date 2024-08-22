// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI16TABBARCONTROLLER_H
#define _TTC5TEAUI16TABBARCONTROLLER_H

@class UITabBarController, NSArray;



@interface _TtC5TeaUI16TabBarController : UITabBarController {
    ? barView;
    ? tabBarOrder;
    ? primaryTabBarItemIdentifier;
    ? extendedDelegate;
    ? styler;
}


@property (nonatomic, copy) NSArray *viewControllers;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif