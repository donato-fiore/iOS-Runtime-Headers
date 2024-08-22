// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCAPTIONHASHTAGSENTRYVIEW_H
#define PXCAPTIONHASHTAGSENTRYVIEW_H

@class UIView, NSString, UIFont, UIButton;
@protocol UITextViewDelegate, PXCaptionHashtagsEntryViewDelegate;


#import "PXWidgetSpec.h"
#import "_PXUITextView.h"

@interface PXCaptionHashtagsEntryView : UIView <UITextViewDelegate>



@property (nonatomic) CGFloat cachedEllipsisWidth; // ivar: _cachedEllipsisWidth
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCaptionHashtagsEntryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEditing;
@property (nonatomic) CGFloat maxHeightInEditMode; // ivar: _maxHeightInEditMode
@property (readonly, nonatomic) CGFloat minimumHeightInEdit;
@property (retain, nonatomic) UIButton *moreButton; // ivar: _moreButton
@property (readonly, nonatomic) NSUInteger numberOfHashtagsInText; // ivar: _numberOfHashtagsInText
@property (copy, nonatomic) NSString *originalText; // ivar: _originalText
@property (nonatomic) BOOL showAllText; // ivar: _showAllText
@property (retain, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;
@property (retain, nonatomic) _PXUITextView *textView; // ivar: _textView


-(BOOL)_needsUpdateSize:(*BOOL)arg0 ;
-(BOOL)_shouldShowMoreButton;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(BOOL)textViewShouldBeginEditing:(id)arg0 ;
-(BOOL)textViewShouldEndEditing:(id)arg0 ;
-(CGFloat)_ellipsisWidth;
-(CGFloat)_maxHeight;
-(CGFloat)_preferredHeight:(*BOOL)arg0 ;
-(CGFloat)_preferredHeight:(*BOOL)arg0 forWidth:(CGFloat)arg1 ;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(NSInteger)_currentMaxLines;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)uiTextView;
-(void)_addLinkAttributeToHashtagsInTextView;
-(void)_hideShowButton;
-(void)_removeLinkAttributeInTextView;
-(void)_updateFonts;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)exitEditing;
-(void)layoutSubviews;
-(void)moreButtonTapped:(id)arg0 ;
-(void)resetToOriginalText;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif