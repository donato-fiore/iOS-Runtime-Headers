// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTEXTVIEWCONTROLLER_H
#define ICTEXTVIEWCONTROLLER_H

@class UIViewController, NSDate, NSLayoutConstraint, UIColor, ICTextBackgroundView, NSString, NSMutableSet, ICNote, ICTextController, NSArray, ICViewControllerManager;
@protocol NSLayoutManagerDelegate;


#import "ICAttributionSidebarView.h"
#import "ICTextViewScrollState.h"
#import "ICLayoutManager.h"
#import "ICTextView.h"

@interface ICTextViewController : UIViewController <NSLayoutManagerDelegate>



@property (retain, nonatomic) NSDate *attributionSidebarOpenedDate; // ivar: _attributionSidebarOpenedDate
@property (readonly, nonatomic) NSLayoutConstraint *attributionSidebarTrailingConstraint; // ivar: _attributionSidebarTrailingConstraint
@property (retain, nonatomic) ICAttributionSidebarView *attributionSidebarView; // ivar: _attributionSidebarView
@property (retain, nonatomic) NSLayoutConstraint *attributionSidebarWidthConstraint; // ivar: _attributionSidebarWidthConstraint
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) ICTextBackgroundView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *enabledSubviews; // ivar: _enabledSubviews
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresTaps; // ivar: _ignoresTaps
@property (nonatomic) CGFloat initialContainerWidth; // ivar: _initialContainerWidth
@property (retain, nonatomic) ICTextViewScrollState *initialScrollState; // ivar: _initialScrollState
@property (readonly, nonatomic) ICLayoutManager *layoutManager;
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (nonatomic) BOOL performingInitialSetup; // ivar: _performingInitialSetup
@property (copy, nonatomic) id *splitViewControllerDidEndAnimatedTransitionToStateRequestHandler; // ivar: _splitViewControllerDidEndAnimatedTransitionToStateRequestHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) ICTextController *textController; // ivar: _textController
@property (retain, nonatomic) ICTextView *textView; // ivar: _textView
@property (readonly, nonatomic) ICTextView *textViewIfLoaded;
@property (readonly, nonatomic) NSLayoutConstraint *textViewLeadingConstraint; // ivar: _textViewLeadingConstraint
@property (retain, nonatomic) NSArray *transitionConstraints; // ivar: _transitionConstraints
@property (retain, nonatomic) ICTextViewScrollState *transitionScrollState; // ivar: _transitionScrollState
@property (readonly, weak, nonatomic) ICViewControllerManager *viewControllerManager; // ivar: _viewControllerManager


+(id)createTextViewUsingTextController:(id)arg0 stylingTextUsingSeparateTextStorageForRendering:(BOOL)arg1 note:(id)arg2 containerWidth:(CGFloat)arg3 forManualRendering:(BOOL)arg4 scrollState:(id)arg5 ;
+(id)printFormatterForNote:(id)arg0 withSize:(struct CGSize )arg1 interfaceStyle:(NSInteger)arg2 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)shouldAnimateTransitionForSplitViewController:(id)arg0 ;
-(id)captureContentOffsetStateIfNecessary;
-(id)editorController;
-(id)initWithViewControllerManager:(id)arg0 editorViewController:(id)arg1 note:(id)arg2 initialContainerWidth:(CGFloat)arg3 scrollState:(id)arg4 ;
-(void)applyCapturedContentOffsetStateIfNecessary:(id)arg0 ;
-(void)applyInitialScrollState;
-(void)layoutManager:(id)arg0 didCompleteLayoutForTextContainer:(id)arg1 atEnd:(BOOL)arg2 ;
-(void)layoutManager:(id)arg0 textContainer:(id)arg1 didChangeGeometryFromSize:(struct CGSize )arg2 ;
-(void)layoutManagerDidInvalidateLayout:(id)arg0 ;
-(void)loadView;
-(void)setAttributionSidebarWidth:(CGFloat)arg0 isGestureActive:(BOOL)arg1 animated:(BOOL)arg2 currentVelocity:(CGFloat)arg3 ;
-(void)splitViewControllerDidEndAnimatedTransitionToStateRequest:(id)arg0 ;
-(void)splitViewControllerWillBeginAnimatedTransitionToStateRequest:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif