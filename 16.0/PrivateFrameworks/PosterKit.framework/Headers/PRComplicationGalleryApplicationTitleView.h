// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONGALLERYAPPLICATIONTITLEVIEW_H
#define PRCOMPLICATIONGALLERYAPPLICATIONTITLEVIEW_H

@class UIView, NSLayoutConstraint, UIImage, UIImageView, UILabel, NSString, NSLayoutAnchor;



@interface PRComplicationGalleryApplicationTitleView : UIView

@property (retain, nonatomic) NSLayoutConstraint *contentBottomConstraint; // ivar: _contentBottomConstraint
@property (nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint; // ivar: _contentLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentTopConstraint; // ivar: _contentTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentTrailingConstraint; // ivar: _contentTrailingConstraint
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // ivar: _imageHeightConstraint
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // ivar: _imageWidthConstraint
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) NSLayoutAnchor *titleLabelLeadingAnchor;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif