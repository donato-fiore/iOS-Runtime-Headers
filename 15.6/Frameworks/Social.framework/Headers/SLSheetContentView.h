// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLSHEETCONTENTVIEW_H
#define SLSHEETCONTENTVIEW_H

@class UIView, NSMutableArray, NSMutableDictionary, UILabel, UITextView;


#import "SLSheetTextComposeView.h"

@interface SLSheetContentView : UIView {
    SLSheetTextComposeView *_textComposeView;
    NSMutableArray *_constraints;
    NSMutableDictionary *_intrinsicSizes;
    CGFloat _previewTopMargin;
    CGFloat _textViewTopMargin;
    UIView *_bottomSeparator;
    UIView *_autoCompletionModeSeparator;
    BOOL _autoCompletionMode;
    CGFloat _autoCompletionTextViewHeight;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (readonly, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UIView *previewView; // ivar: _previewView
@property (readonly, nonatomic) UITextView *textView;


-(CGFloat)_previewMarginForContentSize:(struct CGSize )arg0 ;
-(CGFloat)_textTopMarginForContentSize:(struct CGSize )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_setConstraints;
-(void)_setupConstraints;
-(void)_setupView;
-(void)adjustComposeViewForPreview;
-(void)beginAutoCompletionMode;
-(void)endAutoCompletionMode;
-(void)layoutSubviews;
-(void)preflightAutoCompletionModeWithApparentHeight:(CGFloat)arg0 ;
-(void)resetPreview;
-(void)setIntrinsicSize:(struct CGSize )arg0 forVerticalSizeClass:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updatePreviewMargin;
-(void)updateTextViewMargin;


@end


#endif