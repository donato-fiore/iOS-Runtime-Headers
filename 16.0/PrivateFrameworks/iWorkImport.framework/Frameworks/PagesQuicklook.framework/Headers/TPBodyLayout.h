// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPBODYLAYOUT_H
#define TPBODYLAYOUT_H

@class TSDLayout, NSMutableSet, NSMutableArray, TSDCanvas, NSString, TSPObject<TSDHint>, TSWPStorage;
@protocol TSWPLayoutTarget, TPAttachmentLayoutParent, TPFootnotePageDelegate, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPTopicNumberHints;


#import "TPFootnoteHeightMeasurer.h"

@interface TPBodyLayout : TSDLayout <TSWPLayoutTarget, TPAttachmentLayoutParent, TPFootnotePageDelegate>

 {
    TPFootnoteHeightMeasurer *_footnoteHeightMeasurer;
    NSMutableSet *_inlineDrawableLayouts;
    NSMutableSet *_markedHiddenInlineDrawableLayouts;
}


@property (readonly, nonatomic) BOOL alwaysIncludesSpaceAfter;
@property (readonly, nonatomic) BOOL alwaysIncludesSpaceBefore;
@property (readonly, nonatomic) CGPoint anchorPoint;
@property (retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout; // ivar: _anchoredDrawablesForRelayout
@property (readonly, nonatomic) NSUInteger autosizeFlags;
@property (readonly, nonatomic) TSDCanvas *canvas;
@property (readonly, nonatomic) NSMutableArray *columns; // ivar: _columns
@property (readonly, nonatomic) CGSize currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (readonly, nonatomic) NSObject<TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CFLocale hyphenationLocale;
@property (readonly, nonatomic) Class inlineTableOfContentsLayoutClass;
@property (readonly, nonatomic) BOOL isInstructional;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly, nonatomic) BOOL layoutIsValid;
@property (readonly, nonatomic) BOOL marginsAreMirrored;
@property (readonly, nonatomic) CGRect maskRect;
@property (readonly, nonatomic) CGFloat maxAnchorInBlockDirection;
@property (readonly, nonatomic) CGSize maxSize;
@property (readonly, nonatomic) CGSize minSize;
@property (readonly, nonatomic) NSInteger naturalAlignment;
@property (readonly, nonatomic) int naturalDirection;
@property (readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (readonly, nonatomic) NSObject<TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumberHints;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSUInteger pageNumber;
@property (readonly, nonatomic) CGPoint position;
@property (readonly, nonatomic) NSObject<TSWPOffscreenColumn> *previousTargetLastColumn;
@property (readonly, nonatomic) BOOL repShouldPreventCaret;
@property (readonly, nonatomic) _NSRange restrictedLayoutCharRange;
@property (readonly, nonatomic) BOOL shouldHyphenate;
@property (readonly, nonatomic) BOOL shouldIgnoreAnchoredAttachments;
@property (readonly, nonatomic) BOOL shouldWrapAroundExternalDrawables;
@property (readonly, nonatomic) TSWPStorage *storage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPageNumbers;
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) BOOL wantsLineFragments;


+(struct CGSize )minimumBodySize;
-(BOOL)canHaveFootnotesFromPreviousTarget:(id)arg0 ;
-(BOOL)childLayoutIsCurrentlyHiddenWhileManipulating:(id)arg0 ;
-(BOOL)containsStartOfPencilAnnotation:(id)arg0 ;
-(BOOL)containsStartOfRange:(struct _NSRange )arg0 ;
-(BOOL)descendersCannotClip;
-(BOOL)excludeFromNearestVisibleRectSearchForSelectionPath:(id)arg0 ;
-(BOOL)invalidateForPageCountChange;
-(BOOL)isFootnoteContainerOnSamePageAsTarget:(id)arg0 ;
-(BOOL)isLastTarget;
-(BOOL)isLayoutOffscreen;
-(BOOL)needsInflation;
-(BOOL)processWidowAndInflation;
-(BOOL)selectionMustBeEntirelyOnscreenToCountAsVisibleInSelectionPath:(id)arg0 ;
-(BOOL)shouldInvalidateSizeWhenInvalidateSizeOfReliedOnLayout:(id)arg0 ;
-(BOOL)shouldProvideSizingGuides;
-(CGFloat)contentBlockHeight;
-(CGFloat)textScaleForChild:(id)arg0 ;
-(CGFloat)viewScaleForZoomingToSelectionPath:(id)arg0 targetPointSize:(CGFloat)arg1 ;
-(id)addPartitionableAttachmentLayout:(id)arg0 ;
-(id)columnMetricsForCharIndex:(NSUInteger)arg0 outRange:(struct _NSRange *)arg1 ;
-(id)computeLayoutGeometry;
-(id)containedPencilAnnotations;
-(id)currentAnchoredDrawableLayouts;
-(id)currentInlineDrawableLayouts;
-(id)existingAttachmentLayoutForInfo:(id)arg0 ;
-(id)interiorClippingPath;
-(id)layoutForInlineDrawable:(id)arg0 ;
-(id)p_layoutForDrawable:(id)arg0 inContainingLayout:(id)arg1 ;
-(id)pageController;
-(id)parentLayoutForPartitionableAttachment:(id)arg0 atPosition:(struct CGPoint )arg1 ;
-(id)textColorOverride;
-(id)unscaledCommentFlagAnchorInfoForSearchReference:(id)arg0 ;
-(id)unscaledContentRectsToAvoidPencilAnnotationOverlap;
-(id)validatedLayoutForAnchoredDrawable:(id)arg0 ;
-(struct CGPoint )activityLineUnscaledEndPointForSearchReference:(id)arg0 ;
-(struct CGPoint )anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint )arg0 ;
-(struct CGPoint )calculatePointFromSearchReference:(id)arg0 ;
-(struct CGPoint )capturedInfoPositionForAttachment;
-(struct CGPoint )layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint )arg0 ;
-(struct CGRect )p_rectForSelection:(id)arg0 useParagraphModeRects:(BOOL)arg1 ;
-(struct CGRect )rectForPresentingAnnotationPopoverForSelectionPath:(id)arg0 ;
-(struct CGRect )rectForSelection:(id)arg0 ;
-(struct CGRect )rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg0 ;
-(struct CGRect )rectInRootForSelectionPath:(id)arg0 ;
-(struct CGRect )rectInRootOfAutoZoomContextOfSelectionPath:(id)arg0 ;
-(struct CGRect )targetRectForCanvasRect:(struct CGRect )arg0 ;
-(struct CGSize )maximumFrameSizeForChild:(id)arg0 ;
-(void)addAttachmentLayout:(id)arg0 ;
-(void)clearHiddenInlineDrawableLayoutMarks;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)invalidateSize;
-(void)markHiddenInlineDrawableLayout:(id)arg0 ;
-(void)p_addLayoutIfAttached:(id)arg0 ;
-(void)p_killDrawableLayouts:(id)arg0 ;
-(void)parentWillChangeTo:(id)arg0 ;
-(void)replaceChild:(id)arg0 with:(id)arg1 ;
-(void)setChildren:(id)arg0 ;
-(void)setNeedsDisplayInTargetRect:(struct CGRect )arg0 ;
-(void)setNeedsInflation;
-(void)unregisterFromLayoutController;
-(void)updateStartCharIndexWithDirtyRanges:(id)arg0 ;
-(void)validate;
-(void)willBeRemovedFromLayoutController:(id)arg0 ;
-(void)willInflate;


@end


#endif