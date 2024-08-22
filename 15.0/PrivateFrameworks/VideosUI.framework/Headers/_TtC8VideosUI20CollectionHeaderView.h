// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI20COLLECTIONHEADERVIEW_H
#define _TTC8VIDEOSUI20COLLECTIONHEADERVIEW_H

@class UICollectionReusableView, VUIImageView, UIView;


#import "VUIButton.h"

@interface _TtC8VideosUI20CollectionHeaderView : UICollectionReusableView {
    ? containerView;
    ? viewLayout;
    ? applySafeAreaInsets;
    ? titleView;
    ? subtitleView;
    ? imageView;
    ? buttonView;
}


@property (nonatomic, readonly) VUIButton *accessibilityButtonView;
@property (nonatomic, readonly) VUIImageView *accessibilityImageView;
@property (nonatomic, readonly) UIView *accessibilitySubtitleView;
@property (nonatomic, readonly) UIView *accessibilityTitleView;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)tintColorDidChange;


@end


#endif