// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SMUTVFOCUSABLETEXTVIEW_H
#define _SMUTVFOCUSABLETEXTVIEW_H

@class TVFocusableTextView, NSAttributedString, UIColor, NSString;
@protocol SMUTVFocusableTextView;



@interface _SMUTVFocusableTextView : TVFocusableTextView <SMUTVFocusableTextView>



@property (nonatomic) BOOL _textTruncating; // ivar: __textTruncating
@property (nonatomic, getter=isAlwaysFocusable) BOOL alwaysFocusable;
@property (nonatomic) BOOL alwaysShowBackground;
@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (nonatomic) NSInteger descriptionTextAlignment;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (retain, nonatomic) UIColor *descriptionTextHighlightColor;
@property (nonatomic) BOOL disableFocus;
@property (nonatomic) NSUInteger focusSizeIncrease;
@property (retain, nonatomic) UIColor *highlightBackgroundColor;
@property (nonatomic) CGFloat maximumLineWidth; // ivar: _maximumLineWidth
@property (nonatomic) NSUInteger maximumNumberOfLines;
@property (nonatomic) CGFloat moreHighlightPadding;
@property (nonatomic) BOOL moreLabelOnNewLine;
@property (retain, nonatomic) NSString *moreLabelText;
@property (retain, nonatomic) UIColor *moreLabelTextColor;
@property (nonatomic) UIEdgeInsets padding;
@property (copy, nonatomic) id *playHandler;
@property (copy, nonatomic) id *selectionHandler;
@property (readonly, nonatomic, getter=isTextTruncating) BOOL textTruncating;
@property (nonatomic) BOOL trackHorizontal;




@end


#endif