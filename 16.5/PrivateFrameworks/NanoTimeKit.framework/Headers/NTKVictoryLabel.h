// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKVICTORYLABEL_H
#define NTKVICTORYLABEL_H

@class CLKUIColoringLabel, UIColor;


#import "NTKVictoryLabel.h"

@interface NTKVictoryLabel : CLKUIColoringLabel

@property (nonatomic) CGFloat additionalPaddingInsets; // ivar: _additionalPaddingInsets
@property (nonatomic) CGVector drawingRectOffset; // ivar: _drawingRectOffset
@property (nonatomic) CGFloat outlineAlpha; // ivar: _outlineAlpha
@property (retain, nonatomic) UIColor *outlineColor; // ivar: _outlineColor
@property (retain, nonatomic) NTKVictoryLabel *outlineLabel; // ivar: _outlineLabel
@property (nonatomic) BOOL requiresDrawingRectAdjustments; // ivar: _requiresDrawingRectAdjustments


+(id)fontDescriptorWithVictoryStyle:(NSUInteger)arg0 ;
+(id)loadFonts:(CGFloat)arg0 style:(NSUInteger)arg1 monospacedNumbers:(BOOL)arg2 ;
+(id)victoryFontWithSize:(CGFloat)arg0 style:(NSUInteger)arg1 ;
+(id)victoryFontWithSize:(CGFloat)arg0 style:(NSUInteger)arg1 monospacedNumbers:(BOOL)arg2 ;
-(BOOL)_shouldHideOutlineLabel;
-(id)outlinedLabelAttributedStringFromAttributedString:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyDrawingOffsetForTextIfNeeded:(id)arg0 ;
-(void)_layoutOutlineLabelIfNeeded;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setAttributedText:(id)arg0 ;
-(void)setFillColor:(id)arg0 ;
-(void)setFillColor:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)setText:(id)arg0 ;
-(void)setTextAlignment:(NSInteger)arg0 ;
-(void)sizeToFit;


@end


#endif