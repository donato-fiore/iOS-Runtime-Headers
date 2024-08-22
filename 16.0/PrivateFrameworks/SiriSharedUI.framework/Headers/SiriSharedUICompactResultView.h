// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRISHAREDUICOMPACTRESULTVIEW_H
#define SIRISHAREDUICOMPACTRESULTVIEW_H

@class NSArray, NSString, UIButton;
@protocol SiriSharedUIContentPlatterViewDelegate, SiriSharedUICompactResultViewHosting, SiriSharedUICompactResultViewDelegate, SiriSharedUIStackableContentDelegate;


#import "SiriSharedUIStandardView.h"
#import "SiriSharedUIAnimationContext.h"
#import "SiriSharedUIPanDismissalGestureRecognizer.h"
#import "SiriSharedUIContentPlatterView.h"
#import "SiriSharedUIViewStackConstraints.h"

@interface SiriSharedUICompactResultView : SiriSharedUIStandardView <SiriSharedUIContentPlatterViewDelegate, SiriSharedUICompactResultViewHosting>



@property (retain, nonatomic) SiriSharedUIAnimationContext *animationContextForFrameAndLayoutUpdate; // ivar: animationContextForFrameAndLayoutUpdate
@property (nonatomic) NSInteger attachmentType; // ivar: attachmentType
@property (nonatomic) CGFloat attachmentYOffset; // ivar: attachmentYOffset
@property (retain, nonatomic) NSArray *customAttachmentConstraints; // ivar: customAttachmentConstraints
@property (nonatomic) CGFloat darkenIntensity; // ivar: _darkenIntensity
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriSharedUICompactResultViewDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SiriSharedUIPanDismissalGestureRecognizer *dismissalGestureRecognizer; // ivar: dismissalGestureRecognizer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_overlayButton) UIButton *overlayButton; // ivar: _overlayButton
@property (readonly, nonatomic) CGSize portraitContentSize;
@property (nonatomic) CGSize previousContentSize; // ivar: _previousContentSize
@property (nonatomic) CGFloat previousSeparatorContentHeight; // ivar: _previousSeparatorContentHeight
@property (nonatomic) BOOL snippetNeedsSizing; // ivar: _snippetNeedsSizing
@property (readonly, nonatomic) SiriSharedUIContentPlatterView *snippetView; // ivar: _snippetView
@property (retain, nonatomic) SiriSharedUIViewStackConstraints *stackConstraints; // ivar: stackConstraints
@property (weak, nonatomic) NSObject<SiriSharedUIStackableContentDelegate> *stackContainerDelegate; // ivar: stackContainerDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL useLowerPriorityHeightConstraint;


-(BOOL)_isSnippetAnimatingInsertionOrRemoval;
-(id)_snippetInsertAnimation;
-(id)_snippetRemovalAnimation;
-(id)hostingView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_maxSizeForSnippet;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_overlayButtonWasTouchedUpInside:(id)arg0 ;
-(void)contentPlatterView:(id)arg0 didScrollWithContentOffset:(struct CGPoint )arg1 ;
-(void)contentPlatterViewScrolledToContentOffset:(struct CGPoint )arg0 ;
-(void)layoutSubviews;
-(void)relayout;
-(void)setNeedsLayout;
-(void)setShowDimmingView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setShowSnippetView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)snippetContentDidUpdate;


@end


#endif