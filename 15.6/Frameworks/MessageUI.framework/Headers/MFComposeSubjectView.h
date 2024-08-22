// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFCOMPOSESUBJECTVIEW_H
#define MFCOMPOSESUBJECTVIEW_H

@class NSString, UITextView;
@protocol NSLayoutManagerDelegate, UITextViewDelegate, MFComposeSubjectViewDelegate;


#import "MFMailComposeHeaderView.h"
#import "MFConfirmationButton.h"

@interface MFComposeSubjectView : MFMailComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate>

 {
    BOOL _delegateRespondsToTextChange;
    BOOL _delegateRespondsToWillRemoveContent;
    BOOL _needsExclusionPathUpdate;
}


@property (nonatomic) BOOL allowsNotifyOption; // ivar: _allowsNotifyOption
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFComposeSubjectViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MFConfirmationButton *notifyButton; // ivar: _notifyButton
@property (nonatomic, getter=isNotifyOptionSelected) BOOL notifyOptionSelected;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UITextView *textView; // ivar: _textView
@property (nonatomic) CGFloat trailingButtonMidlineInsetFromLayoutMargin; // ivar: _trailingButtonMidlineInsetFromLayoutMargin


-(BOOL)_canBecomeFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)endEditing:(BOOL)arg0 ;
-(BOOL)isEndEditingText:(id)arg0 ;
-(BOOL)keyboardInput:(id)arg0 shouldInsertText:(id)arg1 isMarkedText:(BOOL)arg2 ;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)_textContainerExclusionPathsWithNotifyButton:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureNotifyGlyphs;
-(void)_showNotifyButtonIfNeeded;
-(void)_textInputDidChange:(id)arg0 ;
-(void)_updateExclusionPathsIfNeeded;
-(void)_updateTextContainerInsets;
-(void)dealloc;
-(void)displayMetricsDidChange;
-(void)layoutManager:(id)arg0 didCompleteLayoutForTextContainer:(id)arg1 atEnd:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)refreshPreferredContentSize;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsExclusionPathUpdate;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif