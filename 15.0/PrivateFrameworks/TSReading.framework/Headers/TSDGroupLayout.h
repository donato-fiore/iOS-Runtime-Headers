// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGROUPLAYOUT_H
#define TSDGROUPLAYOUT_H

@protocol TSDWrappableParent;


#import "TSDContainerLayout.h"
#import "TSDLayoutGeometry.h"
#import "TSDBezierPath.h"

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent>

 {
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    CGRect mBoundsForStandardKnobs;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}


@property (readonly, nonatomic) int wrapContainerMode;


-(BOOL)allowsConnections;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)canFlip;
-(BOOL)providesGuidesForChildLayouts;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)supportsFlipping;
-(BOOL)supportsParentRotation;
-(BOOL)supportsRotation;
-(id)additionalDependenciesForChildLayout:(id)arg0 ;
-(id)computeInfoGeometryDuringResize;
-(id)computeLayoutGeometry;
-(id)descendentWrappables;
-(id)i_computeWrapPath;
-(id)i_externalWrapPath;
-(id)i_wrapPath;
-(id)layoutGeometryFromInfo;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_childWrapPathsFrom:(id)arg0 ;
-(id)reliedOnLayouts;
-(id)visibleGeometries;
-(struct CGRect )alignmentFrame;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )rectForPresentingAnnotationPopoverForSelection:(id)arg0 ;
-(struct CGSize )minimumSize;
-(void)beginDynamicOperation;
-(void)dealloc;
-(void)dragBy:(struct CGPoint )arg0 ;
-(void)endDynamicOperation;
-(void)invalidate;
-(void)invalidateExteriorWrap;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_invalidateDescendentWrapPaths;
-(void)p_invalidateParentForWrap;
-(void)processChangedProperty:(int)arg0 ;
-(void)setDynamicGeometry:(id)arg0 ;
-(void)setGeometry:(id)arg0 ;
-(void)takeRotationFromTracker:(id)arg0 ;
-(void)wrappableChildInvalidated;


@end


#endif