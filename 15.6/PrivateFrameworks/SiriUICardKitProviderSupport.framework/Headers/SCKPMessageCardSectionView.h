// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCKPMESSAGECARDSECTIONVIEW_H
#define SCKPMESSAGECARDSECTIONVIEW_H

@class UIView, UITextView, CKTextBalloonView, UIButton, UIVisualEffectView, NSString;
@protocol UITextViewDelegate, SCKPAudioMessageViewDelegate, SCKPMessageCardSectionAttachmentViewDelegate, SCKPMessageCardSectionViewDelegate;


#import "SCKPMessageCardSectionAttachmentView.h"
#import "SCKPAudioMessageView.h"

@interface SCKPMessageCardSectionView : UIView <UITextViewDelegate, SCKPAudioMessageViewDelegate, SCKPMessageCardSectionAttachmentViewDelegate>

 {
    UITextView *_textView;
    CKTextBalloonView *_sentBalloonView;
    UIButton *_sendButton;
    SCKPMessageCardSectionAttachmentView *_attachmentView;
    id<SCKPMessageCardSectionViewDelegate> *_delegate;
    SCKPAudioMessageView *_audioMessageView;
    UIVisualEffectView *_messageBackgroundView;
    int _messageStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger playButtonState;
@property (readonly) Class superclass;


-(BOOL)keyboardIsVisible;
-(id)displayedText;
-(id)initWithMessageCardSection:(id)arg0 delegate:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_sendButtonPressed:(id)arg0 ;
-(void)audioMessagePlayButtonTapped:(id)arg0 ;
-(void)dismissKeyboard;
-(void)layoutSubviews;
-(void)setMessageContents:(id)arg0 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)userDidTapAttachmentView:(id)arg0 ;


@end


#endif