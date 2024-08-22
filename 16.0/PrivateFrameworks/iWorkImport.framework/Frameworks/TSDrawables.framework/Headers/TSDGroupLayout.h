// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGROUPLAYOUT_H
#define TSDGROUPLAYOUT_H

@class TSUBezierPath, NSOrderedSet;
@protocol TSDWrappableParent;


#import "TSDContainerLayout.h"
#import "TSDLayoutGeometry.h"

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent>

 {
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    CGRect mBoundsForStandardKnobs;
    TSUBezierPath *mCachedWrapPath;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    NSOrderedSet *mCachedGroupedChildren;
    CGFloat mClampingScaleForChildLayouts;
    CGRect mBoundsForChildren;
    BOOL mHasInvalidated;
}


@property (readonly, nonatomic) CGRect i_boundsForChildren;
@property (readonly, nonatomic) CGFloat i_clampingScaleForChildLayouts;
@property (readonly, nonatomic) NSOrderedSet *i_groupedChildren;
@property (readonly, nonatomic) BOOL i_isClampedToParentByScaling;


-(BOOL)allowsConnections;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)descendentWrappablesContainsWrappable:(id)arg0 ;
-(BOOL)isDraggable;
-(BOOL)protected_isNonGroupedDescendant:(id)arg0 ;
-(BOOL)providesGuidesForChildLayouts;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)shouldBeIncludedInParentFrameForCulling;
-(BOOL)supportsFlipping;
-(BOOL)supportsParentFlipping;
-(BOOL)supportsRotation;
-(id)additionalDependenciesForChildLayout:(id)arg0 ;
-(id)childInfosForChildLayouts;
-(id)computeInfoGeometryDuringResize;
-(id)computeLayoutGeometry;
-(id)descendentWrappables;
-(id)i_computeBaseLayoutGeometry;
-(id)i_computeWrapPath;
-(id)i_wrapPath;
-(id)i_wrapPathIncludingTitleAndCaption;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_childWrapPathsFrom:(id)arg0 inDescendents:(id)arg1 includingTitleAndCaption:(BOOL)arg2 ;
-(id)p_groupInfo;
-(id)pathForClippingConnectionLines;
-(id)reliedOnLayouts;
-(id)visibleGeometries;
-(struct CGAffineTransform )transformForFindHighlightsOfChild:(id)arg0 ;
-(struct CGRect )alignmentFrame;
-(struct CGRect )alignmentFrameForCaptionEdgeInsetsCalculation;
-(struct CGRect )baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )clipRect;
-(struct CGRect )computeBoundsForStandardKnobs;
-(struct CGRect )frameForCaptionPositioning;
-(struct CGRect )frameForCullingWithBaseFrame:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;
-(struct CGRect )rectInRootForCalculatingActivityLineEndpoint;
-(struct CGRect )rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg0 ;
-(struct CGRect )rectInRootForSelectionPath:(id)arg0 ;
-(struct CGSize )minimumSize;
-(void)beginDynamicOperation;
-(void)dragBy:(struct CGPoint )arg0 ;
-(void)endDynamicOperation;
-(void)i_clearInvalidationCache;
-(void)invalidate;
-(void)invalidateExteriorWrap;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_invalidateParentForWrap;
-(void)processChangedProperty:(int)arg0 ;
-(void)setDynamicGeometry:(id)arg0 ;
-(void)transferLayoutGeometryToInfo:(id)arg0 withAdditionalTransform:(struct CGAffineTransform )arg1 assertIfInDocument:(BOOL)arg2 ;
-(void)updateChildrenFromInfo;
-(void)updateLayoutGeometryInPreparationForPartitioning;


@end


#endif