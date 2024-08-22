// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMULTIPARTLABEL_H
#define MKMULTIPARTLABEL_H

@class UIView, UITextView, NSDictionary, UIFont, UIColor, NSString;


#import "_MKMultiPartLabelMetrics.h"
#import "MKMultiPartAttributedString.h"

@interface MKMultiPartLabel : UIView {
    UITextView *_textView;
    CGRect _previousBounds;
    NSDictionary *_cachedTextAttributes;
    NSDictionary *_lastAppliedNonColorAttributes;
}


@property (retain, nonatomic) _MKMultiPartLabelMetrics *data; // ivar: _data
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIColor *highlightedTextColor; // ivar: _highlightedTextColor
@property (nonatomic) NSInteger lineBreakMode;
@property (retain, nonatomic) MKMultiPartAttributedString *multiPartString; // ivar: _multiPartString
@property (nonatomic) NSUInteger numberOfLines;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) UIEdgeInsets textInset;


+(id)_formattedStringsCache;
-(id)_addDefaultAttributesToAttributedString:(id)arg0 ;
-(id)_attributedAdjustedMultiPartStringFromString:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupTextView;
-(void)_updateColorsForCurrentState;
-(void)_updateStrings;
-(void)_updateTextViewTextAndInvalidateLayout:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)setContentCompressionResistancePriority:(float)arg0 forAxis:(NSInteger)arg1 ;
-(void)setContentHuggingPriority:(float)arg0 forAxis:(NSInteger)arg1 ;


@end


#endif