// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMPACTPLATTERVIEWCONTROLLER_H
#define WFCOMPACTPLATTERVIEWCONTROLLER_H

@class UIViewController, NSString, UIPanGestureRecognizer, UIScrollView;
@protocol WFCompactPlatterSizingDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, WFCompactPlatterPresentation, WFCompactPlatterContentContainer;


#import "WFCompactPlatterView.h"
#import "WFCompactPlatterTransitioningDelegate.h"

@interface WFCompactPlatterViewController : UIViewController <WFCompactPlatterSizingDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, WFCompactPlatterPresentation>



@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect gestureOriginFrame; // ivar: _gestureOriginFrame
@property (nonatomic) CGPoint gestureTranslation; // ivar: _gestureTranslation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInteractingWithPlatter;
@property (nonatomic) CGSize minimumPlatterSize; // ivar: _minimumPlatterSize
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture; // ivar: _panGesture
@property (weak, nonatomic) NSObject<WFCompactPlatterContentContainer> *platterContentContainer; // ivar: _platterContentContainer
@property (nonatomic) BOOL platterHeightAnimationsDisabled; // ivar: _platterHeightAnimationsDisabled
@property (readonly, weak, nonatomic) WFCompactPlatterView *platterView; // ivar: _platterView
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (retain, nonatomic) WFCompactPlatterTransitioningDelegate *wf_transitioningDelegate; // ivar: _wf_transitioningDelegate


-(BOOL)_canShowWhileLocked;
-(BOOL)allowsInteractiveDismissal;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 withMaximumVisibleHeight:(CGFloat)arg1 ;
-(CGFloat)maximumExpectedVisibleContentHeight;
-(CGFloat)platterHeightForWidth:(CGFloat)arg0 withMaximumHeight:(CGFloat)arg1 ;
-(id)init;
// -(void)animateInteractive:(BOOL)arg0 animationBlock:(id)arg1 completion:(unk)arg2  ;
-(void)handlePan:(id)arg0 ;
-(void)invalidateContentSize;
-(void)invalidatePlatterSize;
-(void)loadView;
-(void)platterInteractionDidBegin;
-(void)platterInteractionDidFinish;
-(void)platterInteractionRequestedDismissal;
-(void)platterViewDidInvalidateSize:(id)arg0 ;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setTransitioningDelegate:(id)arg0 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)updateContentSizeAndPlatterPosition;
-(void)updatePlatterPosition;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif