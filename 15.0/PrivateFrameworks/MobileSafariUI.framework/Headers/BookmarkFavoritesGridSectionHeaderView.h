// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BOOKMARKFAVORITESGRIDSECTIONHEADERVIEW_H
#define BOOKMARKFAVORITESGRIDSECTIONHEADERVIEW_H

@class UICollectionReusableView, NSLayoutConstraint, UIButton, UIView, UILabel;
@protocol BookmarkFavoritesGridSectionHeaderViewDelegate;



@interface BookmarkFavoritesGridSectionHeaderView : UICollectionReusableView {
    NSLayoutConstraint *_leadingTitleConstraint;
    NSLayoutConstraint *_trailingTitleConstraint;
    NSLayoutConstraint *_trailingControlSpaceConstraint;
    NSLayoutConstraint *_trailingAccessoryViewTrailingSpaceConstraint;
    UIButton *_toggleButton;
    BOOL _shouldShowAsToggled;
    BOOL _shouldDisableShowLess;
    CGFloat _horizontalMargin;
    NSInteger _buttonStyle;
    NSInteger _sectionType;
    UIView *_bottomAccessoryView;
    id<BookmarkFavoritesGridSectionHeaderViewDelegate> *_delegate;
}


@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didSelectToggleButton;
-(void)tintColorDidChange;


@end


#endif