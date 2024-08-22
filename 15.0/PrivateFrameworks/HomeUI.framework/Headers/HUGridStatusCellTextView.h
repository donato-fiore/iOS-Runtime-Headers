// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDSTATUSCELLTEXTVIEW_H
#define HUGRIDSTATUSCELLTEXTVIEW_H

@class UIView, NSAttributedString, UIColor, NSArray;


#import "HUGridStatusCellLayoutOptions.h"

@interface HUGridStatusCellTextView : UIView

@property (retain, nonatomic) HUGridStatusCellLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly, nonatomic) NSAttributedString *shortTitle; // ivar: _shortTitle
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (retain, nonatomic) NSArray *textLines; // ivar: _textLines
@property (readonly, nonatomic) NSAttributedString *title; // ivar: _title


-(id)_commonTextAttributesWithLineBreakMode:(NSInteger)arg0 ;
-(id)_effectiveTextColor;
-(id)font;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_parseTitleLines;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif