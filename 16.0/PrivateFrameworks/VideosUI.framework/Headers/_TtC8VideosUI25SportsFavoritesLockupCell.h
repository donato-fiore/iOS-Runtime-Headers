// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI25SPORTSFAVORITESLOCKUPCELL_H
#define _TTC8VIDEOSUI25SPORTSFAVORITESLOCKUPCELL_H



#import "VUIBaseListViewCell.h"

@interface _TtC8VideosUI25SportsFavoritesLockupCell : VUIBaseListViewCell {
    ? layout;
    ? hideTopSeparator;
    ? hideBottomSeparator;
    ? titleLabel;
    ? logoImageView;
    ? accessoryImageView;
    ? topSeparatorView;
    ? bottomSeparatorView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif