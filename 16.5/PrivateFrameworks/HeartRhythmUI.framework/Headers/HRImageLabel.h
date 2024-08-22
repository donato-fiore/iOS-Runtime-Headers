// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRIMAGELABEL_H
#define HRIMAGELABEL_H

@class UIView, UIImage, NSLayoutConstraint, NSArray, UIImageView, NSString, UILabel;



@interface HRImageLabel : UIView

@property (nonatomic) BOOL boldText; // ivar: _boldText
@property (nonatomic) NSInteger currentUserInterfaceStyle; // ivar: _currentUserInterfaceStyle
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSInteger imageAlignment; // ivar: _imageAlignment
@property (retain, nonatomic) NSLayoutConstraint *imageLeadingConstraint; // ivar: _imageLeadingConstraint
@property (nonatomic) CGFloat imageLeadingSpacing; // ivar: _imageLeadingSpacing
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) NSArray *imageTextAlignmentConstraints; // ivar: _imageTextAlignmentConstraints
@property (retain, nonatomic) NSLayoutConstraint *imageTrailingConstraint; // ivar: _imageTrailingConstraint
@property (nonatomic) CGFloat imageTrailingSpacing; // ivar: _imageTrailingSpacing
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (copy, nonatomic) id *userInterfaceStyleChanged; // ivar: _userInterfaceStyleChanged


-(BOOL)_isTextTallerThanImage;
-(id)initWIthImage:(id)arg0 text:(id)arg1 ;
-(id)initWithImage:(id)arg0 size:(struct CGSize )arg1 text:(id)arg2 ;
-(id)initWithImage:(id)arg0 size:(struct CGSize )arg1 text:(id)arg2 userInterfaceStyleChanged:(id)arg3 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateCurrentUserInterfaceStyleIfNeeded;
-(void)_updateImageTextAlignmentConstraints;
-(void)_updateTextLabelFont;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif