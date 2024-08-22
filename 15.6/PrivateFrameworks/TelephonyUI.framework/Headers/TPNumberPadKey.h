// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPNUMBERPADKEY_H
#define TPNUMBERPADKEY_H

@class UIView, UILabel, NSLayoutConstraint;



@interface TPNumberPadKey : UIView

@property (readonly, nonatomic, getter=isAsterisk) BOOL asterisk;
@property (retain, nonatomic) UILabel *digit; // ivar: _digit
@property (retain, nonatomic) NSLayoutConstraint *digitBaseline; // ivar: _digitBaseline
@property (retain, nonatomic) NSLayoutConstraint *letterBaseline; // ivar: _letterBaseline
@property (retain, nonatomic) UILabel *letters; // ivar: _letters
@property (readonly, nonatomic, getter=isPound) BOOL pound;
@property (retain, nonatomic) NSLayoutConstraint *secondaryLetterBaseline; // ivar: _secondaryLetterBaseline
@property (retain, nonatomic) UILabel *secondaryLetters; // ivar: _secondaryLetters


+(float)absoluteTrackingValueForString:(id)arg0 pointSize:(float)arg1 unitsPerEm:(float)arg2 ;
+(void)initialize;
-(CGFloat)digitFontSizeForScreenSizeCategory:(NSUInteger)arg0 language:(NSUInteger)arg1 showLocalizedLetters:(BOOL)arg2 ;
-(CGFloat)letterFontSizeForScreenSizeCategory:(NSUInteger)arg0 language:(NSUInteger)arg1 showLocalizedLetters:(BOOL)arg2 ;
-(CGFloat)secondaryLetterFontSizeForScreenSizeCategory:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)doLayoutNow;
-(void)setFontStylesForHighlightState:(BOOL)arg0 language:(NSUInteger)arg1 showLocalizedLetters:(BOOL)arg2 shouldCenterDigit:(BOOL)arg3 fontColor:(BOOL)arg4 circleDiameter:(CGFloat)arg5 isCarPlay:(BOOL)arg6 screenSizeCategory:(NSUInteger)arg7 ;
-(void)updateBaselineConstraintConstantsFor:(NSUInteger)arg0 language:(NSUInteger)arg1 showLocalizedLetters:(BOOL)arg2 ;


@end


#endif