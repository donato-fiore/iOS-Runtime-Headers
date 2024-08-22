// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPUIBANNERVIEWBUTTON_H
#define CPUIBANNERVIEWBUTTON_H

@class UIControl, UIView, NSLayoutConstraint, UIImageView, UILabel;



@interface CPUIBannerViewButton : UIControl

@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (retain, nonatomic) NSLayoutConstraint *imageCenterConstraint; // ivar: _imageCenterConstraint
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (nonatomic) BOOL wantsChevronImage; // ivar: _wantsChevronImage


+(id)_chevronImageForTraitCollection:(id)arg0 ;
+(id)buttonWithChevronImage;
+(id)buttonWithOK;
+(id)buttonWithText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupImagesIfNecessary;
-(void)_updateFontIfNecessary;
-(void)_updateImageConstraint;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif