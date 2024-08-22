// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKBIGNUMERALSTIMECOMPONENTLABEL_H
#define NTKBIGNUMERALSTIMECOMPONENTLABEL_H

@class UIView, CLKDevice, CLKFont, NSDateFormatter, NSString, UIColor, NSDate, UIFont;


#import "NTKColoringLabel.h"

@interface NTKBigNumeralsTimeComponentLabel : UIView {
    CLKDevice *_device;
    BOOL _useLigatures;
    CLKFont *_filledFont;
    CLKFont *_outlinedFont;
    NTKColoringLabel *_label;
    NTKColoringLabel *_transitioningLabel;
    NSDateFormatter *_formatter;
    NSUInteger _timeComponent;
    NSUInteger _fontVariant;
    NSString *_filledFontSectName;
    NSString *_outlinedFontSectName;
    *mach_header_64 _dsoHandle;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) UIFont *font;
@property (nonatomic) CGFloat fontSize;
@property (nonatomic) NSUInteger style; // ivar: _style
@property (nonatomic) NSInteger textAlignment;
@property (nonatomic) NSUInteger typeface; // ivar: _typeface


+(id)localeForTypeface:(NSUInteger)arg0 ;
-(CGFloat)_lastLineBaseline;
-(id)_attributedStringForTypeface:(NSUInteger)arg0 ;
-(id)_fontForStyle:(NSUInteger)arg0 ;
-(id)initWithDevice:(id)arg0 timeComponent:(NSUInteger)arg1 fontVariant:(NSUInteger)arg2 filledFontSectName:(id)arg3 outlineFontSectName:(id)arg4 dsoHandle:(struct mach_header_64 *)arg5 fontSize:(CGFloat)arg6 useLigatures:(BOOL)arg7 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromColor:(id)arg1 toColor:(id)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromStyle:(NSUInteger)arg1 toStyle:(NSUInteger)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromTypeface:(NSUInteger)arg1 toTypeface:(NSUInteger)arg2 ;
-(void)cleanupTransition;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setupFontsForVariant:(NSUInteger)arg0 fontSize:(CGFloat)arg1 ;


@end


#endif