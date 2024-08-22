// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDSHAPELAYOUT_H
#define TSDSHAPELAYOUT_H



#import "TSDStyledLayout.h"
#import "TSDBezierPath.h"
#import "TSDPathSource.h"
#import "TSDEditableBezierPathSource.h"
#import "TSDInfoGeometry.h"
#import "TSDMutableStroke.h"
#import "TSDFill.h"

@interface TSDShapeLayout : TSDStyledLayout {
    ? mShapeInvalidFlags;
    TSDBezierPath *mCachedPath;
    CGRect mCachedPathBounds;
    CGRect mCachedPathBoundsWithoutStroke;
    BOOL mCachedPathIsOpen;
    BOOL mCachedPathIsLineSegment;
    CGRect mCachedAlignmentFrame;
    CGPoint mHeadPoint;
    CGPoint mTailPoint;
    CGPoint mHeadLineEndPoint;
    CGPoint mTailLineEndPoint;
    CGFloat mHeadLineEndAngle;
    CGFloat mTailLineEndAngle;
    NSInteger mHeadCutSegment;
    NSInteger mTailCutSegment;
    CGFloat mHeadCutT;
    CGFloat mTailCutT;
    TSDBezierPath *mCachedClippedPath;
    TSDPathSource *mShrunkenPathSource;
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;
    TSDPathSource *mCachedPathSource;
    TSDPathSource *mResizePathSource;
    TSDInfoGeometry *mResizeInfoGeometry;
    TSDInfoGeometry *mInitialInfoGeometry;
    TSDPathSource *mProvidedPathSource;
    TSDMutableStroke *mDynamicStroke;
}


@property (retain, nonatomic) TSDFill *dynamicFill; // ivar: mDynamicFill
@property (readonly, nonatomic) TSDFill *fill;


-(BOOL)canBeIntersected;
-(BOOL)canResetTextAndObjectHandles;
-(BOOL)isBeingManipulated;
-(BOOL)isInvisible;
-(BOOL)isInvisibleAutosizingShape;
-(BOOL)isStrokeBeingManipulated;
-(BOOL)isTailEndOnLeft;
-(BOOL)p_cachedPathIsLineSegment;
-(BOOL)p_cachedPathIsOpen;
-(BOOL)pathIsLineSegment;
-(BOOL)pathIsOpen;
-(BOOL)shouldBeDisplayedInShowMode;
-(BOOL)supportsResize;
-(BOOL)supportsRotation;
-(CGFloat)headLineEndAngle;
-(CGFloat)lineEndScale;
-(CGFloat)tailLineEndAngle;
-(NSUInteger)numberOfControlKnobs;
-(id)clippedPathForLineEnds;
-(id)computeLayoutGeometry;
-(id)editablePathSource;
-(id)i_computeWrapPath;
-(id)i_computeWrapPathClosed:(BOOL)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)initialInfoGeometry;
-(id)layoutGeometryFromInfo;
-(id)layoutInfoGeometry;
-(id)p_cachedPath;
-(id)p_createClippedPath;
-(id)p_unitePath:(id)arg0 withLineEndForHead:(BOOL)arg1 stroke:(id)arg2 ;
-(id)path;
-(id)pathSource;
-(id)shapeInfo;
-(id)smartPathSource;
-(id)stroke;
-(id)strokeHeadLineEnd;
-(id)strokeTailLineEnd;
-(struct CGAffineTransform )computeLayoutTransform;
-(struct CGPoint )centerForConnecting;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(struct CGPoint )headLineEndPoint;
-(struct CGPoint )headPoint;
-(struct CGPoint )tailLineEndPoint;
-(struct CGPoint )tailPoint;
-(struct CGPoint )unclippedHeadPoint;
-(struct CGPoint )unclippedTailPoint;
-(struct CGRect )aliasedAlignmentFrameForScale:(CGFloat)arg0 ;
-(struct CGRect )alignmentFrame;
-(struct CGRect )alignmentFrameInRoot;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )p_boundsOfLineEndForHead:(BOOL)arg0 transform:(struct CGAffineTransform )arg1 ;
-(struct CGRect )p_cachedPathBounds;
-(struct CGRect )p_cachedPathBoundsWithoutStroke;
-(struct CGRect )pathBounds;
-(struct CGRect )pathBoundsWithoutStroke;
-(struct CGRect )shapeFrameWithTransform:(struct CGAffineTransform )arg0 ;
-(struct CGSize )minimumSize;
-(void)aliasPathForScale:(CGFloat)arg0 adjustedStroke:(*id)arg1 adjustedPath:(*id)arg2 startDelta:(struct CGPoint *)arg3 endDelta:(struct CGPoint *)arg4 ;
-(void)aliasPathForScale:(CGFloat)arg0 originalStroke:(id)arg1 adjustedStroke:(*id)arg2 adjustedPath:(*id)arg3 startDelta:(struct CGPoint *)arg4 endDelta:(struct CGPoint *)arg5 ;
-(void)beginDynamicOperation;
-(void)dealloc;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthChangeDidEnd;
-(void)dynamicStrokeWidthUpdateToValue:(CGFloat)arg0 ;
-(void)endDynamicOperation;
-(void)invalidateFrame;
-(void)invalidatePath;
-(void)invalidatePathBounds;
-(void)p_computeAngle:(*CGFloat)arg0 point:(struct CGPoint *)arg1 cutSegment:(*NSInteger)arg2 cutT:(*CGFloat)arg3 forLineEndAtHead:(BOOL)arg4 ;
-(void)p_invalidateClippedPath;
-(void)p_invalidateHead;
-(void)p_invalidateTail;
-(void)p_updateResizeInfoGeometryFromResizePathSource;
-(void)p_validateHeadAndTail;
-(void)p_validateHeadLineEnd;
-(void)p_validateTailLineEnd;
-(void)processChangedProperty:(int)arg0 ;
-(void)setControlKnobPosition:(NSUInteger)arg0 toPoint:(struct CGPoint )arg1 ;
-(void)setGeometry:(id)arg0 ;


@end


#endif