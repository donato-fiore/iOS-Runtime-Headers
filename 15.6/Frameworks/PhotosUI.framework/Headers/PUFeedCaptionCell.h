// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUFEEDCAPTIONCELL_H
#define PUFEEDCAPTIONCELL_H

@class PXUIButton, UIImage, PXFeedSectionInfo, UILabel;


#import "PUFeedCell.h"

@interface PUFeedCaptionCell : PUFeedCell

@property (nonatomic) NSUInteger captionItemIndex; // ivar: _captionItemIndex
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) BOOL hideCaption; // ivar: _hideCaption
@property (nonatomic) BOOL isLiked;
@property (retain, nonatomic) PXUIButton *likeButton; // ivar: _likeButton
@property (readonly, nonatomic) UIImage *likedImage;
@property (readonly, nonatomic) UIImage *notLikedImage;
@property (retain, nonatomic) PXFeedSectionInfo *sectionInfo; // ivar: _sectionInfo
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_shouldHideLikeButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInRect:(struct CGRect )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_handleLikeButtonTap:(id)arg0 ;
-(void)_updateLikeButton;
-(void)_updateSubtitle;
-(void)_updateTitle;
-(void)_updateUI;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif