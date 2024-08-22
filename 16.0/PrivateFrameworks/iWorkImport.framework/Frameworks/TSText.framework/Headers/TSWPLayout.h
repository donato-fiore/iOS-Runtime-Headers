// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPLAYOUT_H
#define TSWPLAYOUT_H

@class TSDLayout, TSDLayout<TSWPLayoutParent>, NSMutableSet, NSMutableArray, TSDCanvas, NSString, TSUBezierPath, TSPObject<TSDHint>;
@protocol TSKChangeSourceObserver, TSWPLayoutTarget, TSWPLayoutOwner, TSDWrapInvalidationParent, TSWPStyleProviding, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPTopicNumberHints;


#import "TSWPLayoutManager.h"
#import "TSWPStorage.h"

@interface TSWPLayout : TSDLayout <TSKChangeSourceObserver, TSWPLayoutTarget, TSWPLayoutOwner, TSDWrapInvalidationParent, TSWPStyleProviding>

 {
    TSWPLayoutManager *_layoutManager;
    BOOL _textLayoutValid;
    NSUInteger _lastLayoutMgrChangeCount;
    TSDLayout<TSWPLayoutParent> *_wpLayoutParent;
    NSMutableSet *_markedHiddenInlineDrawableLayouts;
}


@property (readonly, nonatomic) BOOL alwaysIncludesSpaceAfter;
@property (readonly, nonatomic) BOOL alwaysIncludesSpaceBefore;
@property (readonly, nonatomic) CGPoint anchorPoint;
@property (retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property (readonly, nonatomic) NSUInteger autosizeFlags;
@property (readonly, nonatomic) TSDCanvas *canvas;
@property (readonly, nonatomic) NSMutableArray *columns; // ivar: _columns
@property (readonly, nonatomic) _NSRange containedTextRange;
@property (readonly, nonatomic) CGSize currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (readonly, nonatomic) NSObject<TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CFLocale hyphenationLocale;
@property (readonly, nonatomic) Class inlineTableOfContentsLayoutClass;
@property (readonly, nonatomic) TSUBezierPath *interiorClippingPath;
@property (readonly, nonatomic) BOOL isInstructional;
@property (nonatomic) BOOL isLayingOutIntoTarget; // ivar: _isLayingOutIntoTarget
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly, nonatomic) BOOL isOverflowing;
@property (readonly, nonatomic) BOOL layoutIsValid;
@property (readonly, nonatomic) TSWPLayoutManager *layoutManager;
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
@property (readonly, nonatomic) TSWPStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPageNumbers;
@property (readonly, nonatomic) BOOL textIsHidden;
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) BOOL textLayoutValid;
@property (nonatomic) BOOL useBlackTextColor; // ivar: _useBlackTextColor
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) BOOL wantsLineFragments;


-(*void)initialLayoutState;
-(BOOL)caresAboutStorageChanges;
-(BOOL)childLayoutIsCurrentlyHiddenWhileManipulating:(id)arg0 ;
-(BOOL)containsStartOfPencilAnnotation:(id)arg0 ;
-(BOOL)containsStartOfRange:(struct _NSRange )arg0 ;
-(BOOL)descendersCannotClip;
-(BOOL)invalidateForPageCountChange;
-(BOOL)isLastTarget;
-(BOOL)isLayoutOffscreen;
-(BOOL)needsAdditionalOffsetBasedOnPartitioningOfParent;
-(BOOL)p_shouldAssertDependenciesAreCorrect;
-(BOOL)parentAutosizes;
-(BOOL)selectionMustBeEntirelyOnscreenToCountAsVisibleInSelectionPath:(id)arg0 ;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldInvalidateSizeWhenInvalidateSizeOfReliedOnLayout:(id)arg0 ;
-(BOOL)shouldProvideSizingGuides;
-(BOOL)shouldValidate;
-(BOOL)wantsToProvideStylesForTextLayout:(id)arg0 ;
-(CGFloat)textScaleForChild:(id)arg0 ;
-(CGFloat)viewScaleForZoomingToSelectionPath:(id)arg0 targetPointSize:(CGFloat)arg1 ;
-(Class)repClassOverride;
-(id)addPartitionableAttachmentLayout:(id)arg0 ;
-(id)additionalDependenciesForChildLayout:(id)arg0 ;
-(id)columnMetricsForCharIndex:(NSUInteger)arg0 outRange:(struct _NSRange *)arg1 ;
-(id)computeLayoutGeometry;
-(id)containedPencilAnnotations;
-(id)currentAnchoredDrawableLayouts;
-(id)currentInlineDrawableLayouts;
-(id)dependentLayouts;
-(id)initWithInfo:(id)arg0 ;
-(id)initWithInfo:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)initWithInfo:(id)arg0 storage:(id)arg1 frame:(struct CGRect )arg2 ;
-(id)interiorWrapSegments;
-(id)layoutForInlineDrawable:(id)arg0 ;
-(id)p_firstAncestorRespondingToSelector:(SEL)arg0 ;
-(id)p_styleProvidingAncestor;
-(id)p_wpLayoutParent;
-(id)pageAnchorDetailsForPencilAnnotationAtSelectionPath:(id)arg0 attachedType:(NSInteger)arg1 ;
-(id)reliedOnLayouts;
-(id)styleProvider;
-(id)styleProviderForTextLayout:(id)arg0 ;
-(id)textColorOverride;
-(id)textWrapper;
-(id)unscaledContentRectsToAvoidPencilAnnotationOverlap;
-(id)validatedLayoutForAnchoredDrawable:(id)arg0 ;
-(struct CGPoint )capturedInfoPositionForAttachment;
-(struct CGPoint )p_calculateReferencePointFromSelection:(id)arg0 ;
-(struct CGRect )p_protectedRectWithinLayoutForSelectionRect:(struct CGRect )arg0 ;
-(struct CGRect )p_rectForSelectionPath:(id)arg0 useParagraphModeRects:(BOOL)arg1 ;
-(struct CGRect )p_rectInRootForSelectionPath:(id)arg0 useParagraphModeRects:(BOOL)arg1 forZoom:(BOOL)arg2 ;
-(struct CGRect )rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg0 ;
-(struct CGRect )rectInRootForSelectionPath:(id)arg0 ;
-(struct CGRect )rectInRootForZoomingToSelectionPath:(id)arg0 ;
-(struct CGRect )rectInRootOfAutoZoomContextOfSelectionPath:(id)arg0 ;
-(struct CGRect )targetRectForCanvasRect:(struct CGRect )arg0 ;
-(struct CGSize )maximumFrameSizeForChild:(id)arg0 ;
-(struct CGSize )p_maximumFrameSizeForChild:(id)arg0 ;
-(struct CGSize )p_maximumFrameSizeForChild:(id)arg0 foundInColumn:(*id)arg1 ;
-(void)beginResizeWrapInvalidationCluster;
-(void)clearHiddenInlineDrawableLayoutMarks;
-(void)didLayoutChangingDirtyRanges;
-(void)didLayoutIntoTarget;
-(void)didLayoutWithLayoutManager:(id)arg0 ;
-(void)endResizeWrapInvalidationCluster;
-(void)i_validateTextLayout;
-(void)invalidate;
-(void)invalidateForChangedPrintingSettings;
-(void)invalidateForFootnoteNumberingChange;
-(void)invalidateForcingFullReLayOut;
-(void)invalidateParentForAutosizing;
-(void)invalidateSize;
-(void)invalidateTextLayout;
-(void)layoutManager:(id)arg0 didClearDirtyRangeWithDelta:(NSInteger)arg1 afterCharIndex:(NSUInteger)arg2 ;
-(void)layoutManagerNeedsLayout:(id)arg0 ;
-(void)markHiddenInlineDrawableLayout:(id)arg0 ;
-(void)p_clearOutLayoutManager;
-(void)p_invalidateTextLayout;
-(void)parentDidChange;
-(void)parentWillChangeTo:(id)arg0 ;
-(void)setNeedsDisplayInTargetRect:(struct CGRect )arg0 ;
-(void)updateChildrenFromInfo;
-(void)validate;
-(void)willBeAddedToLayoutController:(id)arg0 ;
-(void)willBeRemovedFromLayoutController:(id)arg0 ;
-(void)willLayoutIntoTarget;
-(void)wrappableChildInvalidated:(id)arg0 ;


@end


#endif