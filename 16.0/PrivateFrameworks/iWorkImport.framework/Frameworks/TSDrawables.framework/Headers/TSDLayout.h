// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDLAYOUT_H
#define TSDLAYOUT_H

@class NSArray, NSSet, TSDScrollableContainerLayout, TSUBezierPath;
@protocol TSDWrappableParent, TSDInfo;

#import <Foundation/Foundation.h>

#import "TSDAbstractLayout.h"
#import "TSDLayoutGeometry.h"
#import "TSDInfoGeometry.h"
#import "TSDStroke.h"

@interface TSDLayout : TSDAbstractLayout <TSDWrappableParent>

 {
    CGPoint mBaseAlignmentFrameOriginForFixingInterimPosition;
    CGRect mDirtyRect;
    BOOL mInvalidatingSize;
    ? mAlreadyInvalidatedFlags;
    ? mInvalidFlags;
    CGRect mInitialBoundsForStandardKnobs;
    CGPoint mCapturedInfoGeometryPositionForAttached;
}


@property (readonly, nonatomic) NSArray *additionalLayoutsForRepCreation;
@property (readonly, nonatomic) CGRect alignmentFrameForCaptionEdgeInsetsCalculation;
@property (readonly, nonatomic) NSArray *bidirectionalSizeDependentLayouts;
@property (readonly, nonatomic) CGRect boundsForStandardKnobs;
@property (readonly, nonatomic) BOOL canAspectRatioLockBeChangedByUser;
@property (readonly, nonatomic) BOOL canInspectGeometry;
@property (readonly, nonatomic) CGPoint centerForConnecting;
@property (readonly, nonatomic) CGPoint centerForRotation;
@property (readonly, nonatomic) CGPoint commentPoleUnscaledOffset;
@property (readonly, nonatomic) NSSet *connectedLayouts; // ivar: mConnectedLayouts
@property (readonly, nonatomic) NSArray *dependentLayouts;
@property (readonly, nonatomic) CGFloat descentForInlineLayout;
@property (readonly, nonatomic, getter=isDraggable) BOOL draggable;
@property (copy, nonatomic) TSDLayoutGeometry *dynamicGeometry;
@property (readonly, nonatomic) NSObject *dynamicOverride;
@property (readonly, nonatomic) TSDInfoGeometry *finalInfoGeometryForResize;
@property (readonly, nonatomic) CGRect frameForCaptionPositioning;
@property (readonly, nonatomic) CGRect frameForPartitioning;
@property (readonly, nonatomic) BOOL i_anyAncestorCurrentlyBeingRotatedWantsNormalLayoutDuringDynamicRotation;
@property (readonly, nonatomic) TSDScrollableContainerLayout *i_scrollableContainerParentLayout; // ivar: _i_scrollableContainerParentLayout
@property (readonly, nonatomic) TSUBezierPath *i_wrapPath;
@property (readonly, nonatomic) TSUBezierPath *i_wrapPathIncludingTitleAndCaption;
@property (readonly, nonatomic) NSObject<TSDInfo> *info; // ivar: mInfo
@property (readonly, nonatomic) CGRect initialBoundsForStandardKnobs;
@property (readonly, nonatomic) TSDInfoGeometry *initialInfoGeometry;
@property (readonly, nonatomic) TSDLayoutGeometry *inspectorGeometry;
@property (readonly, nonatomic) CGFloat inspectorGeometryAngleInDegrees;
@property (readonly, nonatomic) BOOL invalidGeometry;
@property (readonly, nonatomic) BOOL isBeingManipulated;
@property (readonly, nonatomic) BOOL isBeingTransformed;
@property (readonly, nonatomic) BOOL isDynamicallyChangingAvailableSpaceForContainedChild;
@property (readonly, nonatomic) BOOL isInGroup;
@property (readonly, nonatomic) BOOL isInTopLevelContainerForEditing;
@property (readonly, nonatomic) BOOL isStrokeBeingManipulated;
@property (readonly, nonatomic) int layoutState; // ivar: mLayoutState
@property (nonatomic) CGSize maximumInlineFrameSize; // ivar: mMaximumInlineFrameSize
@property (readonly, nonatomic) CGPoint minimumPositionOffset; // ivar: mMinimumPositionOffset
@property (readonly, nonatomic) CGSize minimumSize;
@property (readonly, nonatomic) TSDLayoutGeometry *originalGeometry; // ivar: mBaseGeometry
@property (readonly, nonatomic) TSDLayoutGeometry *originalPureGeometry;
@property (readonly, nonatomic) CGAffineTransform originalPureTransformInRoot;
@property (readonly, nonatomic) CGAffineTransform originalTransformForProvidingGuides;
@property (readonly, nonatomic) CGAffineTransform originalTransformInRoot;
@property (readonly, nonatomic) BOOL parentAutosizes;
@property (readonly, nonatomic) TSUBezierPath *pathForClippingConnectionLines;
@property (readonly, nonatomic) TSDLayoutGeometry *pureGeometry;
@property (readonly, nonatomic) TSDLayoutGeometry *pureGeometryInParent;
@property (readonly, nonatomic) TSDLayoutGeometry *pureGeometryInRoot;
@property (readonly, nonatomic) CGAffineTransform pureTransformInRoot;
@property (readonly, nonatomic) NSSet *reliedOnLayouts;
@property (readonly, nonatomic) Class repClassOverride;
@property (readonly, nonatomic) BOOL resizeMayChangeAspectRatio;
@property (readonly, nonatomic, getter=isSelectable) BOOL selectable;
@property (readonly, nonatomic) BOOL shouldBeDisplayedInShowMode;
@property (readonly, nonatomic) BOOL shouldProvideGuidesDuringExclusiveAlignmentOperation;
@property (readonly, nonatomic) BOOL shouldShowCaption;
@property (readonly, nonatomic) BOOL shouldValidate;
@property (readonly, nonatomic) TSDStroke *stroke;
@property (readonly, nonatomic) BOOL supportsParentFlipping;
@property (readonly, nonatomic) BOOL wantsNormalLayoutDuringDynamicRotation;


-(BOOL)allowIntersectionOfChildLayout:(id)arg0 ;
-(BOOL)allowsConnections;
-(BOOL)canvasShouldScrollForSelectionPath:(id)arg0 ;
-(BOOL)childLayoutIsCurrentlyHiddenWhileManipulating:(id)arg0 ;
-(BOOL)containsStartOfPencilAnnotation:(id)arg0 ;
-(BOOL)descendentWrappablesContainsWrappable:(id)arg0 ;
-(BOOL)inspectorGeometryIsAffectedByChangeRecord:(id)arg0 ;
-(BOOL)orderedBefore:(id)arg0 ;
-(BOOL)selectionMustBeEntirelyOnscreenToCountAsVisibleInSelectionPath:(id)arg0 ;
-(BOOL)shouldInvalidateSizeWhenInvalidateSizeOfReliedOnLayout:(id)arg0 ;
-(BOOL)shouldUseCaptionEdgeInsetsInInterimPosition;
-(CGFloat)percentOfUnscaledRectContainedInParentRep:(struct CGRect )arg0 ;
-(CGFloat)scaleForInlineClampingUnrotatedSize:(struct CGSize )arg0 withTransform:(struct CGAffineTransform )arg1 ;
-(CGFloat)viewScaleForZoomingToSelectionPath:(id)arg0 targetPointSize:(CGFloat)arg1 ;
-(id)additionalDependenciesForChildLayout:(id)arg0 ;
-(id)childInfosForChildLayouts;
-(id)childrenForPencilAnnotations;
-(id)computeInfoGeometryDuringResize;
-(id)computeInfoGeometryFromPureLayoutGeometry:(id)arg0 ;
-(id)computeLayoutGeometry;
-(id)containedPencilAnnotations;
-(id)containedPencilAnnotationsIncludingChildren:(BOOL)arg0 ;
-(id)descendentWrappables;
-(id)i_captionAndTitleLayouts;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutController;
-(id)layoutForSelectionPath:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)originPinnedCounterScrollingChildLayouts;
-(id)rootLayout;
-(id)unscaledCommentFlagAnchorInfoForSearchReference:(id)arg0 ;
-(id)unscaledContentRectsToAvoidPencilAnnotationOverlap;
-(id)wrapInvalidationParent;
-(struct CGAffineTransform )layoutTransformInInfoSpace:(struct CGAffineTransform )arg0 ;
-(struct CGAffineTransform )p_additionalTransformForInlineRoot;
-(struct CGPoint )activityLineUnscaledEndPointForSearchReference:(id)arg0 ;
-(struct CGPoint )alignmentFrameOriginForFixingInterimPosition;
-(struct CGPoint )calculatePointFromSearchReference:(id)arg0 ;
-(struct CGPoint )capturedInfoPositionForAttachment;
-(struct CGPoint )convertNaturalPointFromUnscaledCanvas:(struct CGPoint )arg0 ;
-(struct CGPoint )unscaledCommentPoleOrigin;
-(struct CGRect )baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )convertNaturalRectFromUnscaledCanvas:(struct CGRect )arg0 ;
-(struct CGRect )convertNaturalRectToUnscaledCanvas:(struct CGRect )arg0 ;
-(struct CGRect )frameForCulling;
-(struct CGRect )frameForCullingWithBaseFrame:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;
-(struct CGRect )i_frameForCullingWithAdditionalTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )i_takeDirtyRect;
-(struct CGRect )rectInRootForCalculatingActivityLineEndpoint;
-(struct CGRect )rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg0 ;
-(struct CGRect )rectInRootForSelectionPath:(id)arg0 ;
-(struct CGRect )rectInRootForZoomingToSelectionPath:(id)arg0 ;
-(struct CGRect )rectInRootOfAutoZoomContextOfSelectionPath:(id)arg0 ;
-(struct CGSize )maximumFrameSizeForChild:(id)arg0 ;
-(struct CGSize )minimumSizeForResizingKnob:(id)arg0 ;
-(struct CGSize )p_newMaxInlineFrameSize;
-(struct UIEdgeInsets )captionEdgeInsets;
-(void)addConnectedLayout:(id)arg0 ;
-(void)beginDrag;
-(void)beginDynamicOperation;
-(void)beginResize;
-(void)beginRotate;
-(void)calculateAndSetPointsToSearchReference:(id)arg0 ;
-(void)dragBy:(struct CGPoint )arg0 ;
-(void)dragByUnscaled:(struct CGPoint )arg0 ;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthChangeDidEnd;
-(void)dynamicStrokeWidthUpdateToValue:(CGFloat)arg0 ;
-(void)endDrag;
-(void)endDynamicOperation;
-(void)endResize;
-(void)endRotate;
-(void)i_clearInvalidationCache;
-(void)i_counterScrollingChildLayoutsDidChange;
-(void)i_didValidateLayout;
-(void)i_recursivelyClearInvalidationCache;
-(void)i_willValidateLayout;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)invalidate;
-(void)invalidateChildren;
-(void)invalidateExteriorWrap;
-(void)invalidateForChangedPrintingSettings;
-(void)invalidateFrame;
-(void)invalidateInlineAndDepedentsForInlineFrameResize;
-(void)invalidatePosition;
-(void)invalidateSize;
-(void)invalidateTextScalePercent;
-(void)p_calculateClampModelValuesWithAdditionalTransform:(struct CGAffineTransform )arg0 andPerformBlock:(id)arg1 ;
-(void)p_invalidateConnectedLayouts;
-(void)p_invalidateDescendentWrapPaths;
-(void)p_invalidateDescendentWrapPathsInRoot;
-(void)p_recursiveInvalidate;
-(void)p_registerWithLayoutController:(id)arg0 ;
-(void)p_unregisterWithLayoutController:(id)arg0 ;
-(void)p_updateDescendentWrapPathsWithTransform:(struct CGAffineTransform )arg0 ;
-(void)parentDidChange;
-(void)parentWillChangeTo:(id)arg0 ;
-(void)pauseDynamicTransformation;
-(void)processChangedProperty:(int)arg0 ;
-(void)processChanges:(id)arg0 ;
-(void)recursivelyAddLayoutAndChildrenToSet:(id)arg0 ;
-(void)removeConnectedLayout:(id)arg0 ;
-(void)resizeWithTransform:(struct CGAffineTransform )arg0 ;
-(void)setGeometry:(id)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setParent:(id)arg0 ;
-(void)takeRotationFromTracker:(id)arg0 ;
-(void)takeSizeFromTracker:(id)arg0 ;
-(void)transferLayoutGeometryToInfo:(id)arg0 withAdditionalTransform:(struct CGAffineTransform )arg1 assertIfInDocument:(BOOL)arg2 ;
-(void)unregisterFromLayoutController;
-(void)updateChildrenFromInfo;
-(void)updateLayoutGeometryInPreparationForPartitioning;
-(void)updateMaximumInlineFrameSize;
-(void)validate;
-(void)validateFromLastInterimPosition;
-(void)willBeAddedToLayoutController:(id)arg0 ;
-(void)willBeRemovedFromLayoutController:(id)arg0 ;


@end


#endif