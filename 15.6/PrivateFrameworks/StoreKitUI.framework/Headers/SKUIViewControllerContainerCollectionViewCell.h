// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIVIEWCONTROLLERCONTAINERCOLLECTIONVIEWCELL_H
#define SKUIVIEWCONTROLLERCONTAINERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSIndexPath, UIViewController, UIView;


#import "SKUIViewControllerContainerView.h"

@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell {
    SKUIViewControllerContainerView *_viewControllerContainerView;
}


@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (nonatomic) BOOL managesViewControllerContainerViewLayout; // ivar: _managesViewControllerContainerViewLayout
@property (nonatomic) CGFloat maximumContentWidth; // ivar: _maximumContentWidth
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UIView *viewControllerContainerView;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif