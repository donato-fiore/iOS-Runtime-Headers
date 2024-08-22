// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSSEARCHBROWSERHEADERVIEW_H
#define STSSEARCHBROWSERHEADERVIEW_H

@class UIView, NSLayoutConstraint, UISearchBar;



@interface STSSearchBrowserHeaderView : UIView {
    NSLayoutConstraint *_searchBarHeight;
}


@property (readonly, nonatomic) UISearchBar *searchBar; // ivar: _searchBar


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)updateConstraints;


@end


#endif