// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUEXPANDINGLABEL_H
#define MUEXPANDINGLABEL_H

@class UIView, NSTextContainer, NSTextStorage, NSLayoutManager, UITextView, UILabel, NSString, UIFont, UITapGestureRecognizer, NSAttributedString, UIColor;
@protocol UIGestureRecognizerDelegate, UITextViewDelegate;



@interface MUExpandingLabel : UIView <UIGestureRecognizerDelegate, UITextViewDelegate>

 {
    NSUInteger _expansionMode;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    NSLayoutManager *_textLayoutManager;
    UITextView *_textView;
    UILabel *_showMoreLabel;
    NSString *_showLessText;
    UIFont *_showLessFont;
    UITapGestureRecognizer *_showMoreTapRecognizer;
    BOOL _isPerformingLayout;
}


@property (nonatomic) BOOL allowLessText; // ivar: _allowLessText
@property (copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *labelResizedBlock; // ivar: _labelResizedBlock
@property (nonatomic) NSUInteger numberOfLinesWhenCollapsed; // ivar: _numberOfLinesWhenCollapsed
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (retain, nonatomic) UIFont *showLessFont;
@property (copy, nonatomic) NSString *showLessText;
@property (retain, nonatomic) UIColor *showLessTextColor; // ivar: _showLessTextColor
@property (retain, nonatomic) UIFont *showMoreFont;
@property (copy, nonatomic) NSString *showMoreText;
@property (retain, nonatomic) UIColor *showMoreTextColor; // ivar: _showMoreTextColor
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;


-(BOOL)_canShowAllText;
-(BOOL)_canShowLess;
-(BOOL)_isShowingUserExpanded;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isShowingExpanded;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_expand;
-(void)_mkExpandingLabelComonInit;
-(void)_setExpansionMode:(NSUInteger)arg0 ;
-(void)infoCardThemeChanged;
-(void)layoutSubviews;


@end


#endif