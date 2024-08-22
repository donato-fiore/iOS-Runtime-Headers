// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEKAPERTUREBUTTON_H
#define CEKAPERTUREBUTTON_H

@class UIButton, UIImageView, NSNumberFormatter, UILabel;
@protocol CEKApertureButtonDelegate;



@interface CEKApertureButton : UIButton

@property (readonly, nonatomic) CGFloat _cachedSpaceWidth; // ivar: __cachedSpaceWidth
@property (readonly, nonatomic) CGFloat _cachedSymbolLabelWidth; // ivar: __cachedSymbolLabelWidth
@property (nonatomic, setter=_setCachedValueLabelWidth:) CGFloat _cachedValueLabelWidth; // ivar: __cachedValueLabelWidth
@property (retain, nonatomic) UIImageView *_circleBackgroundView; // ivar: __circleBackgroundView
@property (readonly, nonatomic) UIImageView *_circleOutlineView; // ivar: __circleOutlineView
@property (readonly, nonatomic) NSNumberFormatter *_decimalFormatter; // ivar: __decimalFormatter
@property (readonly, nonatomic, getter=_isRightToLeftFormatting) BOOL _rightToLeftFormatting; // ivar: __rightToLeftFormatting
@property (readonly, nonatomic) UILabel *_symbolLabel; // ivar: __symbolLabel
@property (readonly, nonatomic) UILabel *_valueLabel; // ivar: __valueLabel
@property (readonly, nonatomic) NSNumberFormatter *_wholeNumberFormatter; // ivar: __wholeNumberFormatter
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) CGFloat apertureValue; // ivar: _apertureValue
@property (weak, nonatomic) NSObject<CEKApertureButtonDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger expansionDirection; // ivar: _expansionDirection
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) BOOL shouldShowApertureValue; // ivar: _shouldShowApertureValue
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets
@property (nonatomic) BOOL wantsBackground; // ivar: _wantsBackground


-(id)_circleImageWithColor:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )_expansionInsets;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_rotateView:(id)arg0 withInterfaceOrientation:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_setCenterAndBoundsForView:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)_setLayer:(id)arg0 highlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackgroundView;
-(void)_updateColorsAnimated:(BOOL)arg0 ;
-(void)_updateSymbolLabelOrientationAnimated:(BOOL)arg0 ;
-(void)_updateValueLabel;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif