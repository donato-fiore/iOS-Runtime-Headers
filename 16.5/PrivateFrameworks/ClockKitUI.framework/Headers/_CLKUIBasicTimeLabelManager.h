// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLKUIBASICTIMELABELMANAGER_H
#define _CLKUIBASICTIMELABELMANAGER_H

@class CLKDevice, UILabel, CLKTimeFormatter, NSString, NSAttributedString, UIColor, UIView;
@protocol _CLKUITimeLabelManager;

#import <Foundation/Foundation.h>

#import "CLKUITimeLabelStyle.h"

@interface _CLKUIBasicTimeLabelManager : NSObject <_CLKUITimeLabelManager>

 {
    CLKDevice *_device;
    UILabel *_label;
    CLKTimeFormatter *_timeFormatter;
    NSString *_timeText;
    CLKUITimeLabelStyle *_style;
    CGFloat _maxWidth;
    NSAttributedString *_correctAttributedText;
    BOOL _showsDesignator;
    BOOL _showSubstringToSeparator;
    BOOL _showSubstringFromSeparator;
    BOOL _hideMinutesIfZero;
    BOOL _primary;
    CGSize _cachedIntrinsicSize;
    UIEdgeInsets _cachedOpticalEdgeInsets;
    BOOL _cachedOpticalEdgeInsetsIsValid;
    UIColor *_textColor;
    NSAttributedString *_minutesBlinkerAttributedText;
    NSAttributedString *_secondsBlinkerAttributedText;
    _NSRange _minutesBlinkerRange;
    _NSRange _secondsBlinkerRange;
    CGRect _boundingRectOfMinutesBlinkerAttributedText;
    CGRect _boundingRectOfSecondsBlinkerAttributedText;
}


@property (nonatomic) BOOL animationsPaused; // ivar: _animationsPaused
@property (readonly, nonatomic) CGSize intrinsicSize;
@property (readonly, nonatomic) UIEdgeInsets opticalInsets;
@property (nonatomic) BOOL showSeconds; // ivar: _showSeconds
@property (nonatomic) BOOL showsBlinker; // ivar: _showsBlinker
@property (nonatomic) BOOL showsNumbers; // ivar: _showsNumbers
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIView *view;


-(CGFloat)_lastLineBaseline;
-(id)_attributedTextShowingBlinker:(BOOL)arg0 numbers:(BOOL)arg1 ;
-(id)_initForDevice:(id)arg0 primary:(BOOL)arg1 withTimeFormatter:(id)arg2 options:(NSUInteger)arg3 labelFactory:(id)arg4 ;
-(id)effectiveAttributedText;
-(id)effectiveFont;
-(id)initWithForDevice:(id)arg0 timeFormatter:(id)arg1 options:(NSUInteger)arg2 labelFactory:(id)arg3 ;
-(id)minutesDesignatorAttributedText;
-(id)secondsDesignatorAttributedText;
-(struct CGRect )_boundingRectOfBlinkerAtRange:(struct _NSRange )arg0 ;
-(struct CGRect )_boundingRectOfMinutesBlinker;
-(struct CGRect )_boundingRectOfSecondsBlinker;
-(struct CGSize )sizeThatFits;
-(void)_updateAttributedText;
-(void)enumerateUnderlyingLabelsWithBlock:(id)arg0 ;
-(void)setMaxWidth:(CGFloat)arg0 ;
-(void)setShowsDesignator:(BOOL)arg0 ;
-(void)setStyle:(id)arg0 ;
-(void)sizeViewToFit;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTimeText;


@end


#endif