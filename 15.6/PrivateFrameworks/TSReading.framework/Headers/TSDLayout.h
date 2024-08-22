// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDLAYOUT_H
#define TSDLAYOUT_H

@class NSSet, NSString;
@protocol TSKSearchTarget, TSDAttachmentLayout, TSDInfo;


#import "TSDAbstractLayout.h"
#import "TSDLayoutGeometry.h"

@interface TSDLayout : TSDAbstractLayout <TSKSearchTarget, TSDAttachmentLayout>

 {
    CGPoint mBaseAlignmentFrameOriginForFixingInterimPosition;
    CGPoint mBaseCapturedAlignmentFrameOriginForInline;
    CGRect mDirtyRect;
    ? mInvalidFlags;
    CGRect mInitialBoundsForStandardKnobs;
    CGPoint mCapturedInfoGeometryPositionForInline;
    CGPoint mCapturedAlignmentFrameOriginForInline;
}


@property (readonly, nonatomic) BOOL attachmentLayoutDisplacedByDropCap;
@property (readonly, nonatomic) BOOL canAspectRatioLockBeChangedByUser;
@property (readonly, nonatomic) NSSet *connectedLayouts; // ivar: mConnectedLayouts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TSDLayoutGeometry *dynamicGeometry;
@property (readonly, nonatomic) BOOL hasFinishedIterativePositioning; // ivar: mHasFinishedIterativePositioning
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TSDInfo> *info; // ivar: mInfo
@property (readonly, nonatomic) BOOL invalidGeometry;
@property (readonly, nonatomic) BOOL isStrokeBeingManipulated;
@property (retain, nonatomic) id *iterativePositioningState; // ivar: mIterativePositioningState
@property (readonly, nonatomic) int layoutState; // ivar: mLayoutState
@property (readonly, nonatomic) TSDLayoutGeometry *originalGeometry; // ivar: mBaseGeometry
@property (readonly, nonatomic) BOOL resizeMayChangeAspectRatio;
@property (readonly) Class superclass;


+(id)descendentWrappablesOfLayout:(id)arg0 ;
-(BOOL)allowsConnections;
-(BOOL)canFlip;
-(BOOL)dependentsRelyOnSize;
-(BOOL)i_useBaseCapturedAlignmentFrameOriginForInline;
-(BOOL)isBeingManipulated;
-(BOOL)isBeingTransformed;
-(BOOL)isInGroup;
-(BOOL)isInTopLevelContainerForEditing;
-(BOOL)orderedBefore:(id)arg0 ;
-(BOOL)shouldBeDisplayedInShowMode;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
-(BOOL)shouldProvideSizingGuides;
-(BOOL)shouldValidate;
-(BOOL)wantsRoundedInlinePosition;
-(CGFloat)inlineCenteredAlignmentOffset;
-(CGFloat)inlineVerticalOffset;
-(CGFloat)scaleForInlineClampingUnrotatedSize:(struct CGSize )arg0 withGeometry:(id)arg1 ;
-(Class)repClassOverride;
-(id)additionalDependenciesForChildLayout:(id)arg0 ;
-(id)additionalGuides;
-(id)additionalLayoutsForRepCreation;
-(id)childSearchTargets;
-(id)computeInfoGeometryDuringResize;
-(id)computeInfoGeometryFromLayoutGeometry:(id)arg0 ;
-(id)computeLayoutGeometry;
-(id)dependentLayouts;
-(id)i_externalWrapPath;
-(id)i_layoutGeometryProvider;
-(id)i_wrapPath;
-(id)initWithInfo:(id)arg0 ;
-(id)initialInfoGeometry;
-(id)inspectorGeometry;
-(id)layoutController;
-(id)layoutGeometryFromInfo;
-(id)layoutGeometryFromProvider;
-(id)originalPureGeometry;
-(id)pureGeometry;
-(id)pureGeometryInRoot;
-(id)reliedOnLayouts;
-(id)rootLayout;
-(id)searchTarget;
-(id)stroke;
-(struct CGAffineTransform )layoutTransformInInfoSpace:(struct CGAffineTransform )arg0 ;
-(struct CGAffineTransform )originalPureTransformInRoot;
-(struct CGAffineTransform )originalTransformForProvidingGuides;
-(struct CGAffineTransform )originalTransformInRoot;
-(struct CGAffineTransform )pureTransformInRoot;
-(struct CGPoint )alignmentFrameOriginForFixingInterimPosition;
-(struct CGPoint )calculatePointFromSearchReference:(id)arg0 ;
-(struct CGPoint )capturedInfoPositionForAttachment;
-(struct CGPoint )centerForConnecting;
-(struct CGPoint )centerForRotation;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )i_takeDirtyRect;
-(struct CGRect )initialBoundsForStandardKnobs;
-(struct CGRect )rectForPresentingAnnotationPopoverForSelection:(id)arg0 ;
-(struct CGRect )rectForSelection:(id)arg0 ;
-(struct CGSize )maximumFrameSizeForChild:(id)arg0 ;
-(struct CGSize )maximumSizeForChildLayout:(id)arg0 ;
-(struct CGSize )minimumSize;
-(void)addConnectedLayout:(id)arg0 ;
-(void)beginDrag;
-(void)beginDynamicOperation;
-(void)beginResize;
-(void)beginRotate;
-(void)dealloc;
-(void)dragBy:(struct CGPoint )arg0 ;
-(void)dragByUnscaled:(struct CGPoint )arg0 ;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthChangeDidEnd;
-(void)dynamicStrokeWidthUpdateToValue:(CGFloat)arg0 ;
-(void)endDrag;
-(void)endDynamicOperation;
-(void)endRotate;
-(void)finishIterativePositioning;
-(void)i_accumulateLayoutsIntoSet:(id)arg0 ;
-(void)i_setBaseCapturedAlignmentFrameOriginForInline;
-(void)invalidate;
-(void)invalidateChildren;
-(void)invalidateExteriorWrap;
-(void)invalidateFrame;
-(void)invalidatePosition;
-(void)invalidateSize;
-(void)layoutSearchForAnnotationWithHitBlock:(id)arg0 ;
-(void)p_invalidateConnectedLayouts;
-(void)p_recursiveInvalidate;
-(void)p_registerWithLayoutController:(id)arg0 ;
-(void)p_unregisterWithLayoutController:(id)arg0 ;
-(void)parentDidChange;
-(void)parentWillChangeTo:(id)arg0 ;
-(void)pauseDynamicTransformation;
-(void)processChangedProperty:(int)arg0 ;
-(void)processChanges:(id)arg0 ;
-(void)removeConnectedLayout:(id)arg0 ;
-(void)resizeWithTransform:(struct CGAffineTransform )arg0 asChild:(BOOL)arg1 ;
-(void)setAdjustedInterimPositionX:(CGFloat)arg0 ;
-(void)setAdjustedInterimPositionY:(CGFloat)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setParent:(id)arg0 ;
-(void)takeRotationFromTracker:(id)arg0 ;
-(void)unregisterFromLayoutController;
-(void)updateChildrenFromInfo;
-(void)validate;
-(void)validateFromLastInterimPosition;
-(void)wasAddedToLayoutController:(id)arg0 ;
-(void)wasRemovedFromLayoutController:(id)arg0 ;
-(void)willBeAddedToLayoutController:(id)arg0 ;
-(void)willBeRemovedFromLayoutController:(id)arg0 ;
-(void)willLayoutInlineWithTextAttributes:(struct __CFDictionary *)arg0 columnWidth:(CGFloat)arg1 ;


@end


#endif