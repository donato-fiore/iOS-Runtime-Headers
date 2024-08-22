// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMNAVBARCANVASVIEW_H
#define CKMNAVBARCANVASVIEW_H

@class UIView, UIButton, UISearchBar;



@interface CKMNavbarCanvasView : UIView

@property (readonly, nonatomic) UIButton *composeButtonView; // ivar: _composeButtonView
@property (readonly, nonatomic) UISearchBar *searchBarView; // ivar: _searchBarView
@property (nonatomic) BOOL shouldLayoutForCollapsedWidth; // ivar: _shouldLayoutForCollapsedWidth


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutForDisplayBelowToolbar;
-(void)_layoutForDisplayInNavbar;
-(void)clearAllItemViews;
-(void)layoutSubviews;


@end


#endif