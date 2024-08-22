// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYCOLLECTIONVIEWCELL_H
#define VUILIBRARYCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIViewController;


#import "VUISeparatorView.h"

@interface VUILibraryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) VUISeparatorView *topSeparatorView; // ivar: _topSeparatorView
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif