// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRISHAREDUICOMPACTCONVERSATIONVIEW_H
#define SIRISHAREDUICOMPACTCONVERSATIONVIEW_H

@class PLPlatterView, UIView, NSDictionary, NSMutableArray, NSArray, NSString, SRUIFSpeechRecognitionHypothesis;
@protocol SiriSharedUICompactUserUtteranceViewDelegate, SiriSharedUICompactServerUtteranceViewDelegate, SiriSharedUIExpandablePlatterPanGestureRecognizerDelegate, UIScrollViewDelegate, SiriSharedUICompactConversationViewHosting, SiriSharedUICompactConversationViewDelegate, SiriSharedUIStackableContentDelegate;


#import "SiriSharedUIStandardView.h"
#import "SiriSharedUICompactUserUtteranceView.h"
#import "SiriSharedUIAdaptiveGrabberView.h"
#import "SiriSharedUIAnimationContext.h"
#import "SiriSharedUIExpandablePlatterPanGestureRecognizer.h"
#import "SiriSharedUIStandardScrollView.h"
#import "SiriSharedUICompactServerUtteranceView.h"
#import "SiriSharedUIViewStackConstraints.h"

@interface SiriSharedUICompactConversationView : SiriSharedUIStandardView <SiriSharedUICompactUserUtteranceViewDelegate, SiriSharedUICompactServerUtteranceViewDelegate, SiriSharedUIExpandablePlatterPanGestureRecognizerDelegate, UIScrollViewDelegate, SiriSharedUICompactConversationViewHosting>

 {
    SiriSharedUICompactUserUtteranceView *_userUtteranceView;
    PLPlatterView *_platterView;
    UIView *_containerView;
    NSDictionary *_conversationSnippetVibrancyViews;
    SiriSharedUIAdaptiveGrabberView *_grabberView;
    BOOL _automaticallyCollapseWhenResultIsScrolled;
    CGFloat _currentExpandedGestureHeight;
    BOOL _waitingForFinalSpeechHypothesis;
    BOOL _requestedAppearanceAnimation;
    BOOL _runningAnimatedFadeOut;
    BOOL _runningPrepareForUpdates;
    NSMutableArray *_prepareForUpdatesPendingCompletionBlocks;
    CGFloat _minimumRoundedRectHeight;
}


@property (retain, nonatomic) SiriSharedUIAnimationContext *animationContextForFrameAndLayoutUpdate; // ivar: animationContextForFrameAndLayoutUpdate
@property (nonatomic) NSInteger attachmentType; // ivar: attachmentType
@property (nonatomic) CGFloat attachmentYOffset; // ivar: attachmentYOffset
@property (readonly, nonatomic, getter=willAutomaticallyCollapseWhenResultIsScrolled) BOOL automaticallyCollapseWhenResultIsScrolled;
@property (retain, nonatomic) UIView *conversationSnippetContainerView; // ivar: _conversationSnippetContainerView
@property (copy, nonatomic) NSArray *conversationSnippetViews; // ivar: _conversationSnippetViews
@property (nonatomic) NSInteger currentExpandablePlatterStyle; // ivar: _currentExpandablePlatterStyle
@property (readonly, nonatomic, getter=isCurrentlyTrackingGesture) BOOL currentlyTrackingGesture; // ivar: _currentlyTrackingGesture
@property (retain, nonatomic) NSArray *customAttachmentConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriSharedUICompactConversationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SiriSharedUIExpandablePlatterPanGestureRecognizer *expandablePlatterGesture; // ivar: _expandablePlatterGesture
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize portraitContentSize;
@property (retain, nonatomic) SiriSharedUIStandardScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic, getter=_serverUtteranceView, setter=_setServerUtteranceView:) SiriSharedUICompactServerUtteranceView *serverUtteranceView; // ivar: _serverUtteranceView
@property (copy, nonatomic) NSArray *serverUtterances; // ivar: _serverUtterances
@property (nonatomic) BOOL showingCollapsedUI; // ivar: _showingCollapsedUI
@property (copy, nonatomic) SRUIFSpeechRecognitionHypothesis *speechRecognitionHypothesis; // ivar: _speechRecognitionHypothesis
@property (retain, nonatomic) SiriSharedUIViewStackConstraints *stackConstraints; // ivar: stackConstraints
@property (weak, nonatomic) NSObject<SiriSharedUIStackableContentDelegate> *stackContainerDelegate; // ivar: stackContainerDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL useLowerPriorityHeightConstraint; // ivar: useLowerPriorityHeightConstraint


-(BOOL)_shouldAddVibrancyForSnippet:(id)arg0 ;
-(BOOL)contentSupportsCollapsingForHeight:(CGFloat)arg0 ;
-(BOOL)layerHasOpacity;
-(BOOL)transitionToExpandablePlatterStyle:(NSInteger)arg0 ;
-(id)_conversationAppearAnimation;
-(id)_conversationDisappearAnimation;
-(id)_keyForSnippet:(id)arg0 ;
-(id)hostingView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStreamingTextView:(id)arg0 emojiMaskStreamingTextView:(id)arg1 ;
-(id)parserSpeakableObjectProviderForServerUtterance:(id)arg0 ;
-(id)prepareForUpdatesPendingCompletionBlocks;
-(struct CGSize )_fittingSize;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 forSnippet:(id)arg1 ;
-(struct CGSize )_sizeThatFitsAllSnippets:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_adjustCornerRadiusForSnippetView:(id)arg0 vibrancyView:(id)arg1 ;
-(void)_resetExpansionStateForNewContent;
-(void)_setupSubviews;
-(void)_updateExpandableDrawerUI;
-(void)_updateExpandedHeight;
-(void)animateAppearanceIfNeeded;
-(void)animateFadeOutWithCompletion:(id)arg0 ;
-(void)didCompleteAnimatedFadeOut;
-(void)expandablePlatterGesture:(id)arg0 didCompleteTransitionToStyle:(NSInteger)arg1 phaseHeight:(CGFloat)arg2 ;
-(void)expandablePlatterGesture:(id)arg0 trackingGestureDidUpdateHeight:(CGFloat)arg1 ;
-(void)expandablePlatterGestureDidBeginWithRecognizer:(id)arg0 ;
-(void)expandablePlatterGestureDidEndWithRecognizer:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForUpdatesToServerUtterance:(BOOL)arg0 conversationSnippetViews:(BOOL)arg1 speechRecognitionHypothesis:(BOOL)arg2 updateBlock:(id)arg3 ;
-(void)relayout;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)serverUtteranceView:(id)arg0 utteranceViewDidAppear:(id)arg1 ;
-(void)serverUtteranceView:(id)arg0 utteranceViewDidDisappear:(id)arg1 ;
-(void)setShowCollapsedUI:(BOOL)arg0 ;
-(void)snippetContentDidUpdate;
-(void)updateContentSizeWithAnimation:(BOOL)arg0 ;
-(void)userUtteranceView:(id)arg0 speechRecognitionHypothesisDidAppear:(id)arg1 ;
-(void)userUtteranceView:(id)arg0 speechRecognitionHypothesisDidDisappear:(id)arg1 ;
-(void)userUtteranceViewContentHeightDidUpdate:(id)arg0 ;
-(void)userUtteranceViewTapped:(id)arg0 ;


@end


#endif