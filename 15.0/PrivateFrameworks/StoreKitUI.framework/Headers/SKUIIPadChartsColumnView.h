// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIIPADCHARTSCOLUMNVIEW_H
#define SKUIIPADCHARTSCOLUMNVIEW_H

@class UIView, NSArray, UIViewController;



@interface SKUIIPadChartsColumnView : UIView {
    NSInteger _selectedViewControllerIndex;
}


@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (copy, nonatomic) NSArray *contentViewControllers; // ivar: _contentViewControllers
@property (readonly, nonatomic) UIViewController *selectedViewController;


-(void)_addSelectedViewController;
-(void)layoutSubviews;


@end


#endif