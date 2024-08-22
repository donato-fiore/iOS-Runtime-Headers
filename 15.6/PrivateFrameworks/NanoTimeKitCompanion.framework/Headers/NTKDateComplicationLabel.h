// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDATECOMPLICATIONLABEL_H
#define NTKDATECOMPLICATIONLABEL_H

@class UIControl, NSString, UILabel, UIView, UIColor, CLKDevice, CLKFont;
@protocol NTKDateComplicationDisplay, NTKControl, NTKComplicationDisplayObserver;



@interface NTKDateComplicationLabel : UIControl <NTKDateComplicationDisplay, NTKControl>

 {
    BOOL _frozen;
    NSString *_currentDateText;
    UILabel *_internalLabel;
    UIView *_highlightView;
    CGSize _cachedSize;
    _NSRange _dayTextRange;
    BOOL _cachedSizeIsValid;
    UIColor *_textColor;
    UIColor *_computedTextColor;
}


@property (nonatomic, setter=_setFirstLineBaselineFrameOriginY:) CGFloat _firstLineBaselineFrameOriginY;
@property (readonly, nonatomic) CGFloat _lastLineBaseline;
@property (nonatomic, setter=_setLastLineBaselineFrameOriginY:) CGFloat _lastLineBaselineFrameOriginY;
@property (retain, nonatomic) UIColor *accentColor; // ivar: _accentColor
@property (readonly, nonatomic) NSInteger accentType; // ivar: _accentType
@property (nonatomic) BOOL canUseCurvedText; // ivar: canUseCurvedText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<NTKComplicationDisplayObserver> *displayObserver; // ivar: displayObserver
@property (retain, nonatomic) CLKFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL legibilityHidden; // ivar: _legibilityHidden
@property (nonatomic) NSUInteger overrideDateStyle; // ivar: _overrideDateStyle
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly, nonatomic) NSInteger sizeStyle; // ivar: _sizeStyle
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) UIEdgeInsets touchEdgeInsets; // ivar: _touchEdgeInsets
@property (nonatomic) BOOL usesLegibility; // ivar: _usesLegibility


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldCancelTouchesInScrollview;
-(CGFloat)_cornerRadius;
-(CGFloat)_firstLineBaselineOffsetFromBoundsTop;
-(CGFloat)_legibtilityShadowRadius;
-(id)_attributedStringAccentingNumbersInString:(id)arg0 ;
-(id)initWithSizeStyle:(NSInteger)arg0 accentType:(NSInteger)arg1 forDevice:(id)arg2 ;
-(struct CGSize )_highlightInset;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyAccentColorAttributes;
-(void)_computeTextColor;
-(void)_invalidateInternalLabelSize;
-(void)_setText:(id)arg0 ;
-(void)_updateTextColor;
-(void)layoutSubviews;
-(void)setDateComplicationText:(id)arg0 withDayRange:(struct _NSRange )arg1 forDateStyle:(NSUInteger)arg2 ;
-(void)setShadowColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif