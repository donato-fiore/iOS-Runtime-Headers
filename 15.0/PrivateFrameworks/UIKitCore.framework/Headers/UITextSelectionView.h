// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTSELECTIONVIEW_H
#define UITEXTSELECTIONVIEW_H

@class CAKeyframeAnimation, NSArray;


#import "UIView.h"
#import "UITextSelection.h"
#import "UITextRangeView.h"
#import "UITextInteractionAssistant.h"

@interface UITextSelectionView : UIView {
    UITextSelection *m_selection;
    UITextRangeView *m_rangeView;
    BOOL m_caretShowingNow;
    BOOL m_caretAnimating;
    BOOL m_ghostApperarance;
    BOOL m_caretVisible;
    BOOL m_activated;
    BOOL m_wasShowingCommands;
    BOOL m_delayShowingCommands;
    BOOL m_dictationReplacementsMode;
    BOOL m_shouldEmphasizeNextSelectionRects;
    int m_showingCommandsCounter;
    BOOL m_deferSelectionCommands;
    *__CFRunLoopObserver m_observer;
    BOOL m_activeCaret;
    BOOL m_isSuspended;
    int m_showingCommandsCounterForRotate;
    NSUInteger _activeGrabberSuppressionAssertions;
    CAKeyframeAnimation *_caretBlinkAnimation;
    id *_floatingCaretBlinkAssertion;
    NSUInteger _viewDidCommitNotification;
    NSUInteger _viewDidStopNotification;
}


@property (nonatomic) BOOL caretBlinks; // ivar: m_caretBlinks
@property (readonly, nonatomic) UIView *caretView; // ivar: m_caretView
@property (nonatomic) BOOL caretVisible;
@property (readonly, nonatomic) UIView *floatingCaretView; // ivar: m_floatingCaretView
@property (nonatomic) BOOL forceRangeView; // ivar: m_forceRangeView
@property (nonatomic) BOOL ghostAppearance;
@property (readonly, weak, nonatomic) UITextInteractionAssistant *interactionAssistant; // ivar: m_interactionAssistant
@property (nonatomic) BOOL isIndirectFloatingCaret; // ivar: _isIndirectFloatingCaret
@property (readonly, nonatomic) BOOL isInstalledInSelectionContainerView; // ivar: m_isInstalledInSelectionContainerView
@property (nonatomic) CGRect previousGhostCaretRect; // ivar: _previousGhostCaretRect
@property (readonly, nonatomic) UITextRangeView *rangeView;
@property (retain, nonatomic) NSArray *replacements; // ivar: m_replacements
@property (readonly, nonatomic) UITextSelection *selection;
@property (readonly, nonatomic) BOOL selectionCommandsShowing;
@property (nonatomic) CGRect stashedCaretRect; // ivar: _stashedCaretRect
@property (nonatomic) BOOL visible; // ivar: m_visible


-(BOOL)_shouldUseIndirectFloatingCaret;
-(BOOL)_viewUsesAsynchronousProtocol;
-(BOOL)activeCaret;
-(BOOL)affectedByScrollerNotification:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)point:(struct CGPoint )arg0 isNearCursorRect:(struct CGRect )arg1 ;
-(BOOL)shouldBeVisible;
-(BOOL)shouldSuppressSelectionHandles;
-(BOOL)updateCalloutBarRects:(id)arg0 effectsWindow:(id)arg1 rectsToEvade:(id)arg2 ;
-(id)_actingParentViewForGestureRecognizers;
-(id)_customSelectionContainerView;
-(id)dynamicCaret;
-(id)dynamicCaretList;
-(id)ghostCaretViewColor;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithInteractionAssistant:(id)arg0 ;
-(id)obtainGrabberSuppressionAssertion;
-(id)scrollView;
-(struct CGPoint )floatingCursorPositionForPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )floatingCursorPositionForPoint:(struct CGPoint )arg0 lineSnapping:(BOOL)arg1 ;
-(struct CGRect )clippedTargetRect:(struct CGRect )arg0 ;
-(void)_hideCaret:(int)arg0 ;
-(void)_registerForViewAnimationNotificationsIfNecessary;
-(void)_setCaretBlinkAnimationEnabled:(BOOL)arg0 ;
-(void)_showCaret:(int)arg0 ;
-(void)_showCommandsWithReplacements:(id)arg0 forDictation:(BOOL)arg1 afterDelay:(CGFloat)arg2 ;
-(void)_showCommandsWithReplacements:(id)arg0 isForContextMenu:(BOOL)arg1 forDictation:(BOOL)arg2 rectsToEvade:(id)arg3 ;
-(void)_showSelectionCommandsForContextMenu:(BOOL)arg0 ;
-(void)_unregisterForViewAnimationNotificationsIfNecessary;
-(void)_updateViewAnimateNotificationObservationIfNecessary;
-(void)activate;
-(void)animateBoxShrinkOn:(id)arg0 ;
-(void)animateCaret:(id)arg0 toPosition:(struct CGPoint )arg1 withSize:(struct CGSize )arg2 ;
-(void)animateExpanderOn:(id)arg0 ;
-(void)animatePulsingDirectCaret:(id)arg0 ;
-(void)animatePulsingIndirectCaret:(id)arg0 ;
-(void)appearOrFadeIfNecessary;
-(void)beginFloatingCaretView;
-(void)beginFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)calculateReplacementsWithGenerator:(id)arg0 andShowAfterDelay:(CGFloat)arg1 ;
-(void)cancelDelayedCommandRequests;
-(void)clearCaret;
-(void)clearRangeAnimated:(BOOL)arg0 ;
-(void)configureForHighlightMode;
-(void)configureForPencilDeletionPreviewMode;
-(void)configureForPencilHighlightMode;
-(void)configureForReplacementMode;
-(void)configureForSelectionMode;
-(void)deactivate;
-(void)deactivateAndCollapseSelection:(BOOL)arg0 ;
-(void)dealloc;
-(void)deferredUpdateSelectionCommands;
-(void)deferredUpdateSelectionRects;
-(void)detach;
-(void)didMoveToSuperview;
-(void)didRotate:(id)arg0 ;
-(void)didSuspend:(id)arg0 ;
-(void)doneMagnifying;
-(void)endFloatingCaretView;
-(void)endFloatingCursor;
-(void)hideCaret:(int)arg0 ;
-(void)hideSelectionCommands;
-(void)hideSelectionCommandsAfterDelay:(CGFloat)arg0 ;
-(void)inputModeDidChange:(id)arg0 ;
-(void)inputViewDidAnimate;
-(void)inputViewDidChange;
-(void)inputViewDidMove;
-(void)inputViewWillAnimate;
-(void)inputViewWillChange;
-(void)inputViewWillMove:(id)arg0 ;
-(void)installIfNecessary;
-(void)invalidate;
-(void)layoutChangedByScrolling:(BOOL)arg0 ;
-(void)prepareForMagnification;
-(void)releaseGrabberHandleSuppressionAssertion:(id)arg0 ;
-(void)removeFromSuperview;
-(void)scaleDidChange:(id)arg0 ;
-(void)scaleWillChange:(id)arg0 ;
-(void)selectionDidScroll:(id)arg0 ;
-(void)selectionDidTranslateForReachability:(id)arg0 ;
-(void)selectionWillScroll:(id)arg0 ;
-(void)selectionWillTranslateForReachability:(id)arg0 ;
-(void)setEmphasisOnNextSelectionRects;
-(void)showCalloutBarAfterDelay:(CGFloat)arg0 ;
-(void)showCaret:(int)arg0 ;
-(void)showCommandsWithReplacements:(id)arg0 ;
-(void)showInitialCaret;
-(void)showReplacementsWithGenerator:(id)arg0 forDictation:(BOOL)arg1 afterDelay:(CGFloat)arg2 ;
-(void)showSelectionCommands;
-(void)showSelectionCommandsAfterDelay:(CGFloat)arg0 ;
-(void)textSelectionViewActivated:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateBaseIsStartWithDocumentPoint:(struct CGPoint )arg0 ;
-(void)updateDocumentHasContent:(BOOL)arg0 ;
-(void)updateFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)updateFloatingCursorAtPoint:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(void)updateRangeViewForSelectionMode;
-(void)updateSelectionCommands;
-(void)updateSelectionDots;
-(void)updateSelectionRects;
-(void)updateSelectionRectsIfNeeded;
-(void)updateSelectionWithDocumentPoint:(struct CGPoint )arg0 ;
-(void)validateWithInteractionAssistant:(id)arg0 ;
-(void)viewAnimate:(id)arg0 ;
-(void)wilLResume:(id)arg0 ;
-(void)willBeginFloatingCursor:(BOOL)arg0 ;
-(void)willMoveToSuperview;
-(void)willRotate:(id)arg0 ;
-(void)windowDidResignOrBecomeKey;


@end


#endif