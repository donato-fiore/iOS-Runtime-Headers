// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCONNECTIONLINEABSTRACTLAYOUT_H
#define TSDCONNECTIONLINEABSTRACTLAYOUT_H



#import "TSDShapeLayout.h"
#import "TSDBezierPath.h"
#import "TSDConnectionLinePathSource.h"
#import "TSDInfoGeometry.h"
#import "TSDLayout.h"

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout {
    TSDBezierPath *mClippedBezierPath;
    TSDConnectionLinePathSource *mOriginalPathSource;
    TSDConnectionLinePathSource *mConnectedPathSource;
    TSDInfoGeometry *mConnectedInfoGeometry;
    TSDBezierPath *mCachedFromWrapPath;
    TSDBezierPath *mCachedToWrapPath;
    CGFloat mCachedFromOutset;
    CGFloat mCachedToOutset;
    TSDBezierPath *mCachedFromOutsetWrapPath;
    TSDBezierPath *mCachedToOutsetWrapPath;
    TSDLayout *mOldConnectedFrom;
    TSDLayout *mOldConnectedTo;
    BOOL mValidConnections;
    BOOL mVisibleLine;
    CGPoint mLooseEndPosition;
    CGPoint mAcumulatedDrag;
    BOOL mUseResizePoints;
    CGPoint mResizeControlPoints;
}


@property (nonatomic) TSDLayout *connectedFrom; // ivar: mConnectedFrom
@property (readonly, nonatomic) TSDConnectionLinePathSource *connectedPathSource;
@property (nonatomic) TSDLayout *connectedTo; // ivar: mConnectedTo
@property (nonatomic) CGFloat dynamicOutsetFrom; // ivar: mDynamicOutsetFrom
@property (nonatomic) CGFloat dynamicOutsetTo; // ivar: mDynamicOutsetTo
@property (readonly, nonatomic) CGFloat outsetFrom;
@property (readonly, nonatomic) CGFloat outsetTo;
@property (nonatomic) BOOL useDynamicOutsets; // ivar: mUseDynamicOutsets
@property (readonly, nonatomic) BOOL validLine; // ivar: mValidLine


-(BOOL)canBeIntersected;
-(BOOL)canEndpointsCoincide;
-(BOOL)canFlip;
-(BOOL)canResetTextAndObjectHandles;
-(BOOL)isInvisible;
-(BOOL)isStraightLine;
-(BOOL)pathIsLineSegment;
-(BOOL)pathIsOpen;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldValidate;
-(BOOL)supportsFlipping;
-(BOOL)supportsResize;
-(BOOL)supportsRotation;
-(id)additionalLayoutsForRepCreation;
-(id)clipPath:(id)arg0 onLayout:(id)arg1 outset:(CGFloat)arg2 reversed:(BOOL)arg3 isValid:(*BOOL)arg4 ;
-(id)connectionLineInfo;
-(id)createConnectedPathFrom:(id)arg0 to:(id)arg1 withControlPoints:(struct CGPoint )arg2 ;
-(id)layoutInfoGeometry;
-(id)p_infoForConnectingToInfo:(id)arg0 ;
-(id)path;
-(id)pathSource;
-(id)reliedOnLayouts;
-(int)wrapType;
-(struct CGPoint )controlPointForPointA:(struct CGPoint )arg0 pointB:(struct CGPoint )arg1 andOriginalA:(struct CGPoint )arg2 originalB:(struct CGPoint )arg3 ;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(struct CGPoint )i_accumulatedDrag;
-(struct CGPoint )unclippedHeadPoint;
-(struct CGPoint )unclippedTailPoint;
-(struct CGRect )boundsForStandardKnobs;
-(void)beginDynamicOperation;
-(void)checkConnections;
-(void)connectedLayoutInvalidated:(id)arg0 ;
-(void)dealloc;
-(void)endDynamicOperation;
-(void)invalidateConnections;
-(void)invalidatePath;
-(void)invalidatePosition;
-(void)parentDidChange;
-(void)pauseDynamicTransformation;
-(void)processChangedProperty:(int)arg0 ;
-(void)removeConnections;
-(void)updateConnectedPath;
-(void)updateRepPath;
-(void)validate;


@end


#endif