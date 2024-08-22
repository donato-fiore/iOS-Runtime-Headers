// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGROUPREP_H
#define TSDGROUPREP_H

@protocol TSDMagicMoveMatching;


#import "TSDContainerRep.h"

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>





+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 withSlop:(struct CGSize )arg1 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)handleDoubleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)handleSingleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)intersectsUnscaledRect:(struct CGRect )arg0 ;
-(BOOL)isDraggable;
-(BOOL)shouldShowCommentHighlight;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)wantsToHandleTapsWhenLocked;
-(Class)layerClass;
-(id)allRepsContainedInGroup;
-(struct CGColor *)selectionHighlightColor;
-(struct CGPoint )convertNaturalPointFromUnscaledCanvas:(struct CGPoint )arg0 ;
-(struct CGRect )clipRect;
-(struct CGRect )frameInUnscaledCanvas;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)processChangedProperty:(int)arg0 ;
-(void)recursivelyDrawInContext:(struct CGContext *)arg0 ;
-(void)setNeedsDisplay;


@end


#endif