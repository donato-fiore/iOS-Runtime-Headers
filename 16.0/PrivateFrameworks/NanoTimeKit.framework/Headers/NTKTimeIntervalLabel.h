// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKTIMEINTERVALLABEL_H
#define NTKTIMEINTERVALLABEL_H

@class UIView, CLKDevice, UILabel, NSString, NSMutableArray, NSMutableDictionary, CLKFont, UIColor;



@interface NTKTimeIntervalLabel : UIView {
    CLKDevice *_device;
    CGFloat _currentTextTime;
    NSInteger _style;
    UILabel *_label;
    UILabel *_suffix;
    UILabel *_prefix;
    NSString *_text;
    NSMutableArray *_digits;
    NSMutableDictionary *_images;
    CGFloat _staticLabelWidth;
    CGFloat _digitWidth;
    BOOL _isShowingDigits;
    BOOL _labelWasSized;
    BOOL _isSigned;
}


@property (readonly, nonatomic) CGFloat actualWidth;
@property (copy, nonatomic) id *didResizeHandler; // ivar: _didResizeHandler
@property (retain, nonatomic) CLKFont *font; // ivar: _font
@property (nonatomic) BOOL frozen; // ivar: _frozen
@property (copy, nonatomic) NSString *prefix;
@property (readonly, nonatomic) BOOL showSubSeconds; // ivar: _showSubSeconds
@property (copy, nonatomic) NSString *suffix;
@property (nonatomic) BOOL suffixSmallCaps; // ivar: _suffixSmallCaps
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) CGSize textSize; // ivar: _textSize
@property (nonatomic) CGFloat time; // ivar: _time


-(BOOL)shouldShowDigits;
-(CGFloat)_labelWidth;
-(id)_cachedImageForDigit:(NSUInteger)arg0 ;
-(id)_localImageForDigit:(NSUInteger)arg0 ;
-(id)formatTimeInterval;
-(id)getTimeText;
-(id)initWithMonospacedFontOfSize:(CGFloat)arg0 color:(id)arg1 style:(NSInteger)arg2 forDevice:(id)arg3 ;
-(id)initWithMonospacedFontOfSize:(CGFloat)arg0 color:(id)arg1 style:(NSInteger)arg2 signed:(BOOL)arg3 forDevice:(id)arg4 ;
-(id)initWithMonospacedFontOfSize:(CGFloat)arg0 forDevice:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidateDigitImages;
-(void)_localeChanged;
-(void)calculateMetrics;
-(void)createDigitViews;
-(void)dealloc;
-(void)forceTime:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)recalculateSize;
-(void)setLabelText:(id)arg0 ;
-(void)sizeToFitLabelIfNeeded;


@end


#endif