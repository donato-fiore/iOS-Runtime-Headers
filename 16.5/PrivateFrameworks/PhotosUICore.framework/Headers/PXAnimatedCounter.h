// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXANIMATEDCOUNTER_H
#define PXANIMATEDCOUNTER_H

@class UIView, UILabel, NSMutableArray, UIFont;



@interface PXAnimatedCounter : UIView

@property NSUInteger animationsInProgress; // ivar: _animationsInProgress
@property (readonly) UILabel *backingLabel; // ivar: _backingLabel
@property (readonly) NSMutableArray *digitLabels; // ivar: _digitLabels
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property CGSize maxDigitSize; // ivar: _maxDigitSize
@property (nonatomic) NSUInteger number; // ivar: _number
@property CGSize previousSize; // ivar: _previousSize


-(CGFloat)_xOffsetForBackingLabel:(id)arg0 ;
-(NSInteger)preferredAnimationStyleForNumber:(NSUInteger)arg0 ;
-(NSUInteger)_numDigitsForNumber:(NSInteger)arg0 ;
-(id)_labelForDigit:(NSUInteger)arg0 ;
-(id)_numberStringForNumber:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithNumber:(NSUInteger)arg0 ;
-(struct CGSize )requiredSizeForNumber:(NSUInteger)arg0 ;
-(void)_calculateLargestDigitSize;
-(void)_setCounterToNumber:(NSUInteger)arg0 ;
-(void)_updateFramesForShownDigits;
-(void)_updateSizeIfNeeded;
-(void)commonInit;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif