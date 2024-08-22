// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUMARQUEELABEL_H
#define MRUMARQUEELABEL_H

@class UIView, UIFont, BSUIEmojiLabelView, MPUMarqueeView, NSString, UIColor;



@interface MRUMarqueeLabel : UIView

@property (weak, nonatomic) UIView *animationReferenceView; // ivar: _animationReferenceView
@property (nonatomic) CGFloat contentGap; // ivar: _contentGap
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (nonatomic) UIEdgeInsets fadeEdgeInsets; // ivar: _fadeEdgeInsets
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic) BSUIEmojiLabelView *label; // ivar: _label
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled; // ivar: _marqueeEnabled
@property (retain, nonatomic) MPUMarqueeView *marqueeView; // ivar: _marqueeView
@property (nonatomic) NSInteger numberOfLines; // ivar: _numberOfLines
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(void)addCoordinatedMarqueeView:(id)arg0 ;
-(void)layoutSubviews;
-(void)mru_applyVisualStylingWithColor:(id)arg0 alpha:(CGFloat)arg1 blendMode:(NSInteger)arg2 ;
-(void)mt_applyVisualStyling:(id)arg0 ;


@end


#endif