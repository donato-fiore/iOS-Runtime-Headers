// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIDEBARVIEWCONTROLLER_H
#define SIDEBARVIEWCONTROLLER_H

@class UIViewController, UIView;



@interface SidebarViewController : UIViewController {
    UIView *_verticalSeparator;
}


@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, nonatomic) CGFloat separatorWidth;


-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif