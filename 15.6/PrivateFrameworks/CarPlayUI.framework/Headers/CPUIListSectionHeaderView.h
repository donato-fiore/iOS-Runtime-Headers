// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPUILISTSECTIONHEADERVIEW_H
#define CPUILISTSECTIONHEADERVIEW_H

@class UIImageView, UIImage, NSString, UILabel;


#import "CPSTableViewHeaderFooterView.h"
#import "CPUIMediaButton.h"

@interface CPUIListSectionHeaderView : CPSTableViewHeaderFooterView

@property (retain, nonatomic) UIImageView *artworkImageView; // ivar: _artworkImageView
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) CPUIMediaButton *mediaButton; // ivar: _mediaButton
@property (nonatomic) BOOL showsButton; // ivar: _showsButton
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)artworkImage;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)configureButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)setTemplateImage:(id)arg0 ;


@end


#endif