// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUILIBRARYMENUITEMVIEWCELL_H
#define VUILIBRARYMENUITEMVIEWCELL_H

@class NSString;


#import "VUIListCollectionViewCell.h"
#import "VUIVideosImageView.h"
#import "VUISeparatorView.h"
#import "VUILabel.h"

@interface VUILibraryMenuItemViewCell : VUIListCollectionViewCell {
    VUIVideosImageView *_accessoryView;
    VUIVideosImageView *_imageView;
}


@property (readonly, nonatomic) VUISeparatorView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (nonatomic) BOOL hideChevron; // ivar: _hideChevron
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (nonatomic) BOOL shouldAppearAsHeader; // ivar: _shouldAppearAsHeader
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) VUISeparatorView *topSeparatorView; // ivar: _topSeparatorView


-(BOOL)hasImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif