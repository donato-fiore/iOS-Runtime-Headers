// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPINTERACTIVECANVASCONTROLLER_H
#define TSWPINTERACTIVECANVASCONTROLLER_H

@class NSString;
@protocol TSDGestureTarget;


#import "TSDInteractiveCanvasController.h"

@interface TSWPInteractiveCanvasController : TSDInteractiveCanvasController <TSDGestureTarget>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL handleHyperlinksWithTextGRs;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEditingText;
@property (readonly, nonatomic) BOOL isTearingDown; // ivar: _isTearingDown
@property (readonly, nonatomic) BOOL shouldRespondToTextHyperlinks;
@property (readonly) Class superclass;


-(BOOL)canHandleGesture:(id)arg0 ;
-(BOOL)cellCommentsAllowedForTableInfo:(id)arg0 ;
-(BOOL)handleGesture:(id)arg0 ;
-(BOOL)hyperlinkPopoverIsShown;
-(BOOL)showsComments;
-(BOOL)suppressDoubleTapForSelection;
-(BOOL)textRepsShouldTileAggressively;
-(BOOL)zoomColumnAtPoint:(struct CGPoint )arg0 ;
-(id)_repsForStorage:(id)arg0 ;
-(id)beginEditingRepForInfo:(id)arg0 ;
-(id)closestRepToPoint:(struct CGPoint )arg0 ;
-(id)closestRepToPoint:(struct CGPoint )arg0 forStorage:(id)arg1 ;
-(id)infosToHideForCanvas:(id)arg0 ;
-(id)p_beginEditingPossibleContainedRep:(*id)arg0 ;
-(id)p_repsForStorage:(id)arg0 ;
-(struct CGImage *)textImageFromRect:(struct CGRect )arg0 ;
-(struct CGRect )scrollFocusRectForModel:(id)arg0 withSelection:(id)arg1 ;
-(void)closeHyperlinkPopover;
-(void)dealloc;
-(void)didBeginEditingText;
-(void)gestureSequenceDidEnd;
-(void)gestureSequenceWillBegin;
-(void)p_recursivelyAddRep:(id)arg0 forStorage:(id)arg1 toSet:(id)arg2 ;
-(void)resumeEditing;
-(void)setShowsComments:(BOOL)arg0 ;
-(void)showHyperlinkInfoForField:(id)arg0 inRep:(id)arg1 openInEditMode:(BOOL)arg2 ;
-(void)teardown;
-(void)willEndEditingText;
-(void)withLayoutForModel:(id)arg0 withSelection:(id)arg1 performBlock:(id)arg2 ;


@end


#endif