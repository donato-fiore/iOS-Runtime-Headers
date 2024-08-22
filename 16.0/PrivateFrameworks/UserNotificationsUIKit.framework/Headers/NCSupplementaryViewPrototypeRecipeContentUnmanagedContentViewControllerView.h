// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCSUPPLEMENTARYVIEWPROTOTYPERECIPECONTENTUNMANAGEDCONTENTVIEWCONTROLLERVIEW_H
#define NCSUPPLEMENTARYVIEWPROTOTYPERECIPECONTENTUNMANAGEDCONTENTVIEWCONTROLLERVIEW_H

@class UIView, UISegmentedControl, UILabel;
@protocol NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate;



@interface NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerView : UIView {
    UIView *_unmanagedView;
    UISegmentedControl *_unmanagedSegmentControl;
    UILabel *_unmanagedTitleLabel;
}


@property (weak, nonatomic) NSObject<NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate> *delegate; // ivar: _delegate


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif