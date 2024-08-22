// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCARTWORKVIEW_H
#define ASCARTWORKVIEW_H

@class UIView, NSString, UIImage, UIImageView, UIColor;


#import "ASCBorderView.h"
#import "ASCScreenshotDisplayConfiguration.h"

@interface ASCArtworkView : UIView

@property (readonly, nonatomic) ASCBorderView *borderView; // ivar: _borderView
@property (retain, nonatomic) NSString *decoration; // ivar: _decoration
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (copy, nonatomic) ASCScreenshotDisplayConfiguration *screenshotDisplayConfiguration; // ivar: _screenshotDisplayConfiguration


-(CGFloat)cornerRadiusForContentRect:(struct CGRect )arg0 ;
-(NSUInteger)cornerMaskForContentRect:(struct CGRect )arg0 ;
-(id)cornerCurveForContentRect:(struct CGRect )arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )contentRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)setDataChanged;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;


@end


#endif