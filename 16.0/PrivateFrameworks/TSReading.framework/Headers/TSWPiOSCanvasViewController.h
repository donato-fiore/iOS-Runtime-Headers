// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPIOSCANVASVIEWCONTROLLER_H
#define TSWPIOSCANVASVIEWCONTROLLER_H

@class NSMutableArray, TSUColor, NSString, UIGestureRecognizer, UITapGestureRecognizer, UITextInteraction;
@protocol UITextInteractionDelegate, UITextLinkInteraction, UIDragInteractionDelegate;


#import "TSDiOSCanvasViewController.h"
#import "TSWPTwoPartAction.h"
#import "TSWPHyperlinkField.h"
#import "TSWPRep.h"
#import "TSWPInteractiveCanvasController.h"
#import "TSWPLongPressGestureRecognizer.h"
#import "TSWPSwipeGestureRecognizer.h"

@interface TSWPiOSCanvasViewController : TSDiOSCanvasViewController <UITextInteractionDelegate, UITextLinkInteraction, UIDragInteractionDelegate>

 {
    TSWPTwoPartAction *_delayedTapAction;
    NSMutableArray *_gestureRecognizers;
    BOOL _isInteractingWithHyperLink;
    BOOL _linkInteractionIsLongPress;
    TSWPHyperlinkField *_interactionHyperlinkField;
    TSWPRep *_interactionHyperLinkRep;
}


@property (readonly, nonatomic) TSUColor *backgroundColorForMagnifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIGestureRecognizer *hyperlinkGestureRecognizer; // ivar: _hyperlinkGestureRecognizer
@property (readonly) TSWPInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) TSWPLongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (readonly, nonatomic) UITapGestureRecognizer *secondarySingleTapGestureRecognizer; // ivar: _secondarySingleTapGestureRecognizer
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextInteraction *textInteraction; // ivar: _textInteraction
@property (readonly, nonatomic) TSWPSwipeGestureRecognizer *textLeftSwipeGestureRecognizer; // ivar: _leftSwipeGestureRecognizer
@property (readonly, nonatomic) TSWPSwipeGestureRecognizer *textRightSwipeGestureRecognizer; // ivar: _rightSwipeGestureRecognizer


-(BOOL)_shouldAllowInteractionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)canDisplayHyperlinkUI;
-(BOOL)hasDelayedTapAction;
-(BOOL)hyperlinkUIShouldShow;
-(BOOL)hyperlinkUIShouldShowCustomUI;
-(BOOL)interactionShouldBegin:(id)arg0 ;
-(BOOL)interactionShouldBegin:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(BOOL)interactionShouldSuppressSystemUI:(id)arg0 ;
-(BOOL)isInteractingWithLink;
-(BOOL)mightHaveLinks;
-(BOOL)onlyAllowTextSwipesWhenEditing;
-(BOOL)shouldHideCanvasLayerInMagnifier;
-(BOOL)willInteractWithLinkAtPoint:(struct CGPoint )arg0 ;
-(id)_dragItemsForInteraction:(id)arg0 session:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)_hitRepAtPoint:(struct CGPoint )arg0 ;
-(id)_hyperLinkFieldAtPoint:(struct CGPoint )arg0 ;
-(id)actionForHyperlink:(id)arg0 inRep:(id)arg1 gesture:(id)arg2 ;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)hyperlinkUICustomStringForURLString:(id)arg0 ;
-(id)p_newSwipeGestureRecognizerWithDirection:(int)arg0 numberOfTouchesRequired:(unsigned int)arg1 ;
-(void)_clearSelectedRange;
-(void)_requestTextItemConstrainedToLineAtPoint:(struct CGPoint )arg0 resultHandler:(id)arg1 ;
-(void)_resetAndClearInteractions;
-(void)_resetLinkInteraction;
-(void)addSwipeGestureRecognizers;
-(void)cancelDelayedTapAction;
-(void)cancelInteractionWithLink;
-(void)dealloc;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)finishDelayedTapAction;
-(void)gestureSequenceDidEnd;
-(void)gestureSequenceWillBegin;
-(void)hyperlinkUIDidHide;
-(void)hyperlinkUIShowCustomUIforRep:(id)arg0 field:(id)arg1 ;
-(void)hyperlinkUIWillShow;
-(void)interactionDidEnd:(id)arg0 ;
-(void)interactionWillBegin:(id)arg0 ;
-(void)p_addSwipeGestureRecognizer:(id)arg0 failRequiredFor:(id)arg1 ;
-(void)removeSwipeGestureRecognizers;
-(void)setUpGestureDependenciesForNewCopyOfTextGesture:(id)arg0 ;
-(void)setUpGestureRecognizers;
-(void)startDelayedTapAction:(id)arg0 ;
-(void)startInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)startLongInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)tapLinkAtPoint:(struct CGPoint )arg0 ;
-(void)teardown;
-(void)updateInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)validateInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif