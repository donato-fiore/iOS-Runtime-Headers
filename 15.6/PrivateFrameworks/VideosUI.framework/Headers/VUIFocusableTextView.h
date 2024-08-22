// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIFOCUSABLETEXTVIEW_H
#define VUIFOCUSABLETEXTVIEW_H

@class TVFocusableTextView, NSString;
@protocol VUILabelBaselineProtocol;


#import "VUILabel.h"
#import "VUITextLayout.h"

@interface VUIFocusableTextView : TVFocusableTextView <VUILabelBaselineProtocol>



@property (retain, nonatomic) VUILabel *computationLabel; // ivar: _computationLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) VUITextLayout *textLayout; // ivar: _textLayout
@property (retain, nonatomic) VUITextLayout *titleTextLayout; // ivar: _titleTextLayout


+(id)textViewWithElement:(id)arg0 textLayout:(id)arg1 existingTextView:(id)arg2 ;
+(id)textViewWithElement:(id)arg0 textLayout:(id)arg1 titleElement:(id)arg2 titleLayout:(id)arg3 existingTextView:(id)arg4 ;
+(id)textViewWithString:(id)arg0 textLayout:(id)arg1 existingTextView:(id)arg2 ;
+(id)textViewWithString:(id)arg0 textLayout:(id)arg1 titleString:(id)arg2 titleLayout:(id)arg3 existingTextView:(id)arg4 ;
-(CGFloat)bottomMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)topMarginToLabel:(id)arg0 withBaselineMargin:(CGFloat)arg1 ;
-(CGFloat)topMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)vui_baselineOffsetFromBottom;
-(void)_updateTextColor;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif