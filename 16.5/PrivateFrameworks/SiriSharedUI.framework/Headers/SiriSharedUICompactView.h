// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUICOMPACTVIEW_H
#define SIRISHAREDUICOMPACTVIEW_H

@class UIView, NSLayoutConstraint, NSArray;
@protocol SiriSharedUICompactConversationViewDelegate, SiriSharedUICompactResultViewDelegate, SiriSharedUIStackableContentActionHandling, SiriSharedUIAccessibilityFocusing, SiriSharedUICompactConversationViewHosting, SiriSharedUICompactResultViewHosting, SiriSharedUICompactViewDelegate, SiriSharedUIViewStackContainerHosting;


#import "SiriSharedUIStandardView.h"
#import "SiriSharedUIContentPlatterView.h"
#import "SiriSharedUIRectSet.h"

@interface SiriSharedUICompactView : SiriSharedUIStandardView <SiriSharedUICompactConversationViewDelegate, SiriSharedUICompactResultViewDelegate, SiriSharedUIStackableContentActionHandling, SiriSharedUIAccessibilityFocusing>

 {
    id<SiriSharedUICompactConversationViewHosting> *_conversationView;
    id<SiriSharedUICompactResultViewHosting> *_resultView;
    UIView *_textRequestView;
    NSLayoutConstraint *_textRequestViewBottomConstraint;
    NSLayoutConstraint *_conversationExpansionConstraint;
    UIView *_fullScreenEffectContainerView;
}


@property (nonatomic) CGFloat bottomContentInset; // ivar: _bottomContentInset
@property (copy, nonatomic) NSArray *conversationSnippetViews; // ivar: _conversationSnippetViews
@property (readonly, nonatomic) NSObject<SiriSharedUICompactConversationViewHosting> *conversationView;
@property (weak, nonatomic) NSObject<SiriSharedUICompactViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat effectiveBottomContentInset;
@property (nonatomic) BOOL hidesTextRequestView; // ivar: _hidesTextRequestView
@property (readonly, nonatomic) NSObject<SiriSharedUICompactResultViewHosting> *resultView;
@property (copy, nonatomic) NSArray *serverUtterances; // ivar: _serverUtterances
@property (readonly, nonatomic) SiriSharedUIContentPlatterView *snippetView;
@property (copy, nonatomic, getter=_transitionalContentViewFrames, setter=_setTransitionalContentViewFrames:) SiriSharedUIRectSet *transitionalContentViewFrames; // ivar: _transitionalContentViewFrames
@property (readonly, nonatomic) NSObject<SiriSharedUIViewStackContainerHosting> *viewStackContainer; // ivar: _viewStackContainer


-(BOOL)alwaysShowRecognizedSpeech;
-(BOOL)conversationViewShouldAlwaysShowSpeechFeedback:(id)arg0 ;
-(BOOL)hasContentAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)expectedExpandedHeightForConversationView:(id)arg0 ;
-(CGFloat)maximumHeightForConversationView:(id)arg0 ;
-(CGFloat)maximumHeightForResultView:(id)arg0 ;
-(id)_analytics;
-(id)_instrumentationManager;
-(id)initWithFrame:(struct CGRect )arg0 backgroundBlurView:(id)arg1 navigationView:(id)arg2 resultView:(id)arg3 conversationView:(id)arg4 textRequestView:(id)arg5 viewStackContainer:(id)arg6 ;
-(id)parserSpeakableObjectProviderForConversationView:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )contentInsetsForResultView:(id)arg0 ;
-(void)_clearTransitionalContentViewFrameSnapshots;
-(void)_snapshotContentViewFramesForTransition;
-(void)_textRequestViewVisibilityDidChange;
-(void)_updateBottomPadding;
-(void)_updateBottomPaddingAnimatedWithContext:(id)arg0 ;
-(void)_updateBottomPaddingAnimatedWithContext:(id)arg0 alongsideAnimations:(id)arg1 ;
-(void)_updateExpansionConstraints:(BOOL)arg0 ;
-(void)contentDidUpdate:(BOOL)arg0 ;
-(void)conversationView:(id)arg0 didUpdateHeightDuringExpansionTransition:(CGFloat)arg1 didCompleteGesture:(BOOL)arg2 ;
-(void)conversationView:(id)arg0 viewDidAppearForAceObject:(id)arg1 ;
-(void)conversationView:(id)arg0 viewDidDisappearForAceObject:(id)arg1 ;
-(void)conversationViewContentScrolled:(id)arg0 toContentOffset:(struct CGPoint )arg1 ;
-(void)conversationViewDidBeginExpandTransition:(id)arg0 ;
-(void)conversationViewDidResetExpandedState:(id)arg0 ;
-(void)conversationViewDidTransitionToCollapsedState:(id)arg0 ;
-(void)conversationViewDidTransitionToExpandedState:(id)arg0 ;
-(void)conversationViewDidUpdatePresentedContentHeight:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)prepareForUpdatesWithDiff:(NSUInteger)arg0 updateBlock:(id)arg1 ;
-(void)resultViewContentDidLoad:(id)arg0 ;
-(void)resultViewContentDidScroll:(id)arg0 ;
-(void)resultViewContentScrolled:(id)arg0 toContentOffset:(struct CGPoint )arg1 ;
-(void)resultViewDarkenedContentWasTapped:(id)arg0 ;
-(void)setShowSnippetView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSpeechRecognitionHypothesis:(id)arg0 ;
-(void)showFullScreenEffect:(id)arg0 ;
-(void)snippetLayoutDidUpdateForView:(id)arg0 ;
-(void)tapToEditRequestedFromView:(id)arg0 ;


@end


#endif