// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREVIEWSFACEBOOKVIEW_H
#define SKUIREVIEWSFACEBOOKVIEW_H

@class UIView, UILabel, UIImageView, NSArray, UIControl;


#import "SKUIClientContext.h"
#import "SKUIColorScheme.h"

@interface SKUIReviewsFacebookView : UIView {
    SKUIClientContext *_clientContext;
    UILabel *_friendsLabel;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UIView *_separatorView;
}


@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSArray *friendNames; // ivar: _friendNames
@property (readonly, nonatomic) UIControl *likeToggleButton; // ivar: _likeButton
@property (nonatomic, getter=isUserLiked) BOOL userLiked; // ivar: _userLiked


-(id)_composedStringForNames:(id)arg0 userLiked:(BOOL)arg1 ;
-(id)initWithClientContext:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadFriendNamesLabel;
-(void)_reloadLikeButtonState;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif