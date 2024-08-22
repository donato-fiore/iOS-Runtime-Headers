// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISCROLLINGTABBARCONTENTCOLLECTIONVIEW_H
#define SKUISCROLLINGTABBARCONTENTCOLLECTIONVIEW_H

@protocol SKUIScrollingTabBarContentCollectionViewDelegate;


#import "SKUIViewControllerContainerCollectionView.h"

@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView

@property (nonatomic) NSObject<SKUIScrollingTabBarContentCollectionViewDelegate> *delegate;
@property (readonly, nonatomic, getter=isPerformingLayout) BOOL performingLayout; // ivar: _performingLayout


-(void)_reuseCell:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif