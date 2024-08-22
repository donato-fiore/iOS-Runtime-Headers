// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRISHAREDUICOMPACTUSERUTTERANCEVIEW_H
#define SIRISHAREDUICOMPACTUSERUTTERANCEVIEW_H

@class SRUIFSpeechRecognitionHypothesis, UIVisualEffectView, NSString, SUICStreamingTextView;
@protocol SUICStreamingTextViewDelegate, SiriSharedUIUserUtteranceEditingDataManaging, SiriSharedUICompactUserUtteranceViewDelegate;


#import "SiriSharedUIStandardView.h"

@interface SiriSharedUICompactUserUtteranceView : SiriSharedUIStandardView <SUICStreamingTextViewDelegate>

 {
    UIEdgeInsets _contentInsets;
    SRUIFSpeechRecognitionHypothesis *_speechRecognitionHypothesis;
    id<SiriSharedUIUserUtteranceEditingDataManaging> *_userUtteranceEditingDataManager;
}


@property (retain, nonatomic, getter=_backgroundView, setter=_setBackgroundView:) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriSharedUICompactUserUtteranceViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, getter=_editableStreamingTextView, setter=_setEditableStreamingTextView:) SUICStreamingTextView *editableStreamingTextView; // ivar: _editableStreamingTextView
@property (retain, nonatomic, getter=_emojiMaskStreamingTextView, setter=_setEmojiMaskStreamingTextView:) SUICStreamingTextView *emojiMaskStreamingTextView; // ivar: _emojiMaskStreamingTextView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEditing; // ivar: _isEditing
@property (retain, nonatomic, getter=_streamingTextView, setter=_setStreamingTextView:) SUICStreamingTextView *streamingTextView; // ivar: _streamingTextView
@property (readonly) Class superclass;


-(id)_createStreamingTextViewForEmojisOnly:(BOOL)arg0 ;
-(id)_fontForStreamingTextView;
-(id)initWithContentInsets:(struct UIEdgeInsets )arg0 cornerRadius:(CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_setStreamingText:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSpeechRecognitionHypothesis:(id)arg0 ;


@end


#endif