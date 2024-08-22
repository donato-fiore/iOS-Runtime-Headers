// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDIMAGELAYOUT_H
#define TSDIMAGELAYOUT_H

@class TSDImageAdjustments;


#import "TSDMediaLayout.h"
#import "TSDLayoutGeometry.h"
#import "TSDMaskLayout.h"
#import "TSDBezierPath.h"
#import "TSDInfoGeometry.h"

@interface TSDImageLayout : TSDMediaLayout {
    TSDLayoutGeometry *mImageGeometry;
    TSDMaskLayout *mMaskLayout;
    *CGPath mPathToStroke;
    CGAffineTransform mLayoutToImageTransform;
    CGAffineTransform mLayoutToMaskTransform;
    BOOL mMaskIntersectsImage;
    TSDBezierPath *mTracedPath;
    int mHasAlpha;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    BOOL mIsUpdatingImageAdjustments;
    TSDImageAdjustments *mDynamicImageAdjustments;
}


@property (readonly, nonatomic, getter=isInInstantAlphaMode) BOOL inInstantAlphaMode; // ivar: mInInstantAlphaMode
@property (readonly, nonatomic, getter=isInMaskEditMode) BOOL inMaskEditMode;
@property (readonly, nonatomic, getter=isInMaskScaleMode) BOOL inMaskScaleMode; // ivar: mScalingInMaskMode
@property (readonly, nonatomic) BOOL isDraggingInMaskEditMode;
@property (readonly, nonatomic) BOOL isResizingInMaskEditMode;
@property (readonly, nonatomic) BOOL isRotatingInMaskEditMode;
@property (readonly, nonatomic) int maskEditMode; // ivar: mMaskEditMode
@property (readonly, nonatomic) int maskEditModeForDragging;
@property (readonly, nonatomic) int maskEditModeForLayoutState;
@property (readonly, nonatomic) int maskEditModeForResizing;
@property (readonly, nonatomic) int maskEditModeForRotating;


-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)hasAlpha;
-(BOOL)hasMaskingPath;
-(BOOL)i_useBaseCapturedAlignmentFrameOriginForInline;
-(BOOL)isDynamicallyChangingImageAdjustments;
-(BOOL)isInvisible;
-(BOOL)maskIntersectsImage;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldRenderFrameStroke;
-(BOOL)shouldSnapWhileResizing;
-(BOOL)supportsRotation;
-(id)computeLayoutGeometry;
-(id)currentInfoGeometry;
-(id)geometryForTransforming;
-(id)i_computeWrapPath;
-(id)imageAdjustments;
-(id)imageGeometry;
-(id)imageGeometryInRoot;
-(id)imageInfo;
-(id)initWithInfo:(id)arg0 ;
-(id)inspectorGeometry;
-(id)layoutGeometryFromInfo;
-(id)maskLayout;
-(id)originalImageGeometry;
-(id)smartPathSource;
-(id)visibleGeometries;
-(struct CGAffineTransform )imageDataToVisualSizeTransform;
-(struct CGAffineTransform )layoutToImageTransform;
-(struct CGAffineTransform )layoutToMaskTransform;
-(struct CGAffineTransform )layoutTransformInInfoSpace:(struct CGAffineTransform )arg0 ;
-(struct CGPath *)pathToStroke;
-(struct CGPoint )centerForConnecting;
-(struct CGPoint )centerForRotation;
-(struct CGPoint )centerForRotationInMaskMode;
-(struct CGRect )alignmentFrameForProvidingGuidesInRoot;
-(struct CGRect )boundsInfluencingExteriorWrap;
-(struct CGRect )computeAlignmentFrameInRoot:(BOOL)arg0 ;
-(struct CGRect )pathBoundsWithoutStroke;
-(struct CGSize )sizeOfFrameRectIncludingCoverage;
-(void)beginDrag;
-(void)beginDynamicOperation;
-(void)beginEditingImageInMaskEditMode;
-(void)beginEditingMaskInMaskEditMode;
-(void)beginInstantAlphaMode;
-(void)beginResize;
-(void)dealloc;
-(void)dragBy:(struct CGPoint )arg0 ;
-(void)dynamicImageAdjustmentsChangeDidBegin;
-(void)dynamicImageAdjustmentsChangeDidEnd;
-(void)dynamicImageAdjustmentsUpdateToValue:(id)arg0 ;
-(void)endDrag;
-(void)endDynamicOperation;
-(void)endInstantAlphaMode;
-(void)endMaskEditMode;
-(void)maskModeScaleDidBegin;
-(void)maskModeScaleDidEnd;
-(void)maskWasApplied;
-(void)maskWasReset;
-(void)offsetGeometryBy:(struct CGPoint )arg0 ;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_setDynamicInfoGeometry:(id)arg0 ;
-(void)processChangedProperty:(int)arg0 ;
-(void)resizeWithTransform:(struct CGAffineTransform )arg0 asChild:(BOOL)arg1 ;
-(void)takeRotationFromTracker:(id)arg0 ;
-(void)updateChildrenFromInfo;


@end


#endif