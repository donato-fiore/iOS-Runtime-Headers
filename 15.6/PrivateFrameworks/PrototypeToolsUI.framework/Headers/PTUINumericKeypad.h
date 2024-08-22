// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTUINUMERICKEYPAD_H
#define PTUINUMERICKEYPAD_H

@class UIView, UILabel, NSArray, NSMutableArray, NSNumber, NSString;
@protocol _KeypadButtonTarget, PTUINumericKeypadDelegate;


#import "_KeypadButton.h"
#import "_KeypadDismissButton.h"

@interface PTUINumericKeypad : UIView <_KeypadButtonTarget>

 {
    id<PTUINumericKeypadDelegate> *_delegate;
    BOOL _showing;
    UILabel *_valueLabel;
    NSArray *_digitButtons;
    _KeypadButton *_dotButton;
    _KeypadButton *_signButton;
    _KeypadButton *_clearButton;
    _KeypadButton *_backspaceButton;
    _KeypadDismissButton *_dismissButton;
    UIView *_backgroundView;
    NSMutableArray *_digitsBeforeDot;
    NSMutableArray *_digitsAfterDot;
    BOOL _negative;
    BOOL _hasDot;
    NSNumber *_cachedNumberValue;
    NSString *_cachedStringValue;
}


@property (nonatomic) CGFloat doubleValue;
@property (retain, nonatomic) NSString *stringValue;


+(id)sharedKeypad;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_layoutButtonRow:(id)arg0 atY:(CGFloat)arg1 ;
-(CGFloat)_layoutButtonRow:(id)arg0 atY:(CGFloat)arg1 stretch:(BOOL)arg2 ;
-(NSUInteger)_remainingAllowedDigits;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_appendDigit:(NSUInteger)arg0 ;
-(void)_appendDot;
-(void)_backspace;
-(void)_changeSign;
-(void)_clear;
-(void)_dismissButtonPress;
-(void)_flash;
-(void)_updateDisplayedValue;
-(void)hideAnimated:(BOOL)arg0 ;
-(void)keyPress:(id)arg0 ;
-(void)layoutSubviews;
-(void)showAnimated:(BOOL)arg0 forDelegate:(id)arg1 ;


@end


#endif