// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXACTIONSTACKEDVIEWCONTROLLER_H
#define _PXACTIONSTACKEDVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _PXActionStackedViewController : UIViewController {
    CGFloat _separatorHeight;
    NSArray *_separatorViews;
}


@property (readonly, copy, nonatomic) NSArray *viewControllers; // ivar: _viewControllers


-(id)initWithViewControllers:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)loadView;
-(void)viewWillLayoutSubviews;


@end


#endif