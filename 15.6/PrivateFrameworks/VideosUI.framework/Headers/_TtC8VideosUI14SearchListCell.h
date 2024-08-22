// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI14SEARCHLISTCELL_H
#define _TTC8VIDEOSUI14SEARCHLISTCELL_H



#import "VUIBaseListViewCell.h"
#import "VUIButton.h"
#import "VUILabel.h"

@interface _TtC8VideosUI14SearchListCell : VUIBaseListViewCell {
    ? layout;
    ? cellImageView;
    ? monogramView;
    ? accessoryImageView;
    ? badgeView;
    ? $__lazy_storage_$_bottomSeparatorView;
}


@property (nonatomic, retain) VUIButton *buttonView; // ivar: buttonView
@property (nonatomic, retain) VUILabel *subtitleLabel; // ivar: subtitleLabel
@property (nonatomic, retain) VUILabel *titleLabel; // ivar: titleLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif