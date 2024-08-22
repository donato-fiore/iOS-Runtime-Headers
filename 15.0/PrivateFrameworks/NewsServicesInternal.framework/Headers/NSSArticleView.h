// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSARTICLEVIEW_H
#define NSSARTICLEVIEW_H

@class UIView, UILabel, UIImageView;


#import "NSSArticleInternal.h"

@interface NSSArticleView : UIView

@property (retain, nonatomic) NSSArticleInternal *article; // ivar: _article
@property (weak, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (weak, nonatomic) UILabel *excerptLabel; // ivar: _excerptLabel
@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (weak, nonatomic) UILabel *publisherLabel; // ivar: _publisherLabel
@property (weak, nonatomic) UIImageView *publisherLogoImageView; // ivar: _publisherLogoImageView
@property (weak, nonatomic) UIView *thumbnailContainerView; // ivar: _thumbnailContainerView
@property (weak, nonatomic) UIImageView *thumbnailImageView; // ivar: _thumbnailImageView
@property (weak, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)_updateFonts;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif