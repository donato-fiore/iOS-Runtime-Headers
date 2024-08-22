// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUICURVEDCOLORINGLABEL_H
#define CLKUICURVEDCOLORINGLABEL_H

@class UIView;


#import "CLKUIColoringLabel.h"
#import "CLKUICurvedLabel.h"

@interface CLKUICurvedColoringLabel : CLKUIColoringLabel {
    CLKUICurvedLabel *_curvedLabel;
}


@property (nonatomic) CGFloat centerAngle;
@property (nonatomic) CGFloat circleRadius;
@property (nonatomic) CGFloat imagePadding;
@property (nonatomic) NSUInteger imagePlacement;
@property (weak, nonatomic) UIView *imageView;
@property (nonatomic) CGSize imageViewOverrideSize;
@property (nonatomic) BOOL interior;
@property (nonatomic) CGFloat maxAngularWidth;
@property (readonly, nonatomic) CGRect textBoundingRect;


-(BOOL)isTextTruncated;
-(CGFloat)_firstLineBaseline;
-(CGFloat)_lastLineBaseline;
-(CGFloat)alpha;
-(CGFloat)maxWidth;
-(NSInteger)numberOfLines;
-(id)attributedText;
-(id)color;
-(id)font;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)text;
-(id)textColor;
-(id)textProviderFont;
-(struct CGAffineTransform )transformForImage;
-(struct CGPoint )centerForImage;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setAnimationAlpha:(CGFloat)arg0 ;
-(void)_setUpSnapshot;
-(void)getTextCenter:(struct CGPoint *)arg0 startAngle:(*CGFloat)arg1 endAngle:(*CGFloat)arg2 ;
-(void)invalidateCachedSize;
-(void)layoutSubviews;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setMaxWidth:(CGFloat)arg0 ;
-(void)setNumberOfLines:(NSInteger)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;
-(void)setTextProviderFont:(id)arg0 ;
-(void)setTracking:(CGFloat)arg0 ;
-(void)setUsesTextProviderTintColoring:(BOOL)arg0 ;
-(void)sizeToFit;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif