// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDCONNECTIONLINEABSTRACTLAYOUT_H
#define TSDCONNECTIONLINEABSTRACTLAYOUT_H

@class TSUBezierPath;
@protocol TSDInfo;


#import "TSDShapeLayout.h"
#import "TSDConnectionLinePathSource.h"
#import "TSDInfoGeometry.h"
#import "TSDLayout.h"
#import "TSDConnectionLineInfo.h"

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout {
    TSUBezierPath *mClippedBezierPath;
    TSDConnectionLinePathSource *mOriginalPathSource;
    TSDConnectionLinePathSource *mConnectedPathSource;
    TSDInfoGeometry *mConnectedInfoGeometry;
    TSUBezierPath *mCachedFromWrapPath;
    TSUBezierPath *mCachedToWrapPath;
    CGFloat mCachedFromOutset;
    CGFloat mCachedToOutset;
    TSUBezierPath *mCachedFromOutsetWrapPath;
    TSUBezierPath *mCachedToOutsetWrapPath;
    TSDLayout *mOldConnectedFrom;
    TSDLayout *mOldConnectedTo;
    BOOL mValidConnections;
    BOOL mVisibleLine;
    CGPoint mLooseEndPosition;
    CGPoint mAcumulatedDrag;
    BOOL mUseResizePoints;
    CGPoint mResizeControlPoints;
}


@property (weak, nonatomic) TSDLayout *connectedFrom; // ivar: mConnectedFrom
@property (weak, nonatomic) NSObject<TSDInfo> *connectedFromInfo; // ivar: mConnectedFromInfo
@property (readonly, nonatomic) TSDConnectionLinePathSource *connectedPathSource;
@property (weak, nonatomic) TSDLayout *connectedTo; // ivar: mConnectedTo
@property (weak, nonatomic) NSObject<TSDInfo> *connectedToInfo; // ivar: mConnectedToInfo
@property (readonly, nonatomic) TSDConnectionLineInfo *connectionLineInfo;
@property (nonatomic) CGFloat dynamicOutsetFrom; // ivar: mDynamicOutsetFrom
@property (nonatomic) CGFloat dynamicOutsetTo; // ivar: mDynamicOutsetTo
@property (nonatomic) NSUInteger dynamicOutsetType; // ivar: mDynamicOutsetType
@property (readonly, nonatomic) CGFloat outsetFrom;
@property (readonly, nonatomic) CGFloat outsetTo;
@property (readonly, nonatomic, getter=isStraightLine) BOOL straightLine;
@property (nonatomic) BOOL useDynamicOutsets; // ivar: mUseDynamicOutsets
@property (readonly, nonatomic) BOOL validLine; // ivar: mValidLine


-(BOOL)canBeIntersected;
-(BOOL)canEndpointsCoincide;
-(BOOL)canResetTextAndObjectHandles;
-(BOOL)i_visibleLine;
-(BOOL)isDraggable;
-(BOOL)isInvisible;
-(BOOL)p_connectedInfoInDocument:(id)arg0 ;
-(BOOL)p_isConnectedToLockedObjects;
-(BOOL)p_isInfoAKeynoteTemplateObject:(id)arg0 ;
-(BOOL)pathIsLineSegment;
-(BOOL)pathIsOpen;
-(BOOL)shouldAdjustForStrokeWidthForCollabCursor;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldValidate;
-(BOOL)supportsFlipping;
-(BOOL)supportsRotation;
-(id)additionalLayoutsForRepCreation;
-(id)clipPath:(id)arg0 onLayout:(id)arg1 outset:(CGFloat)arg2 reversed:(BOOL)arg3 isValid:(*BOOL)arg4 ;
-(id)createConnectedPathFrom:(id)arg0 to:(id)arg1 withControlPoints:(struct CGPoint )arg2 ;
-(id)layoutInfoGeometry;
-(id)p_infoForConnectingToInfo:(id)arg0 ;
-(id)path;
-(id)pathSource;
-(id)reliedOnLayouts;
-(int)wrapType;
-(struct CGPoint )controlPointForPointA:(struct CGPoint )arg0 pointB:(struct CGPoint )arg1 andOriginalA:(struct CGPoint )arg2 originalB:(struct CGPoint )arg3 ;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(struct CGPoint )unclippedHeadPoint;
-(struct CGPoint )unclippedTailPoint;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGSize )minimumSize;
-(void)checkConnections;
-(void)connectedLayoutDisconnected:(id)arg0 ;
-(void)connectedLayoutInvalidated:(id)arg0 ;
-(void)dealloc;
-(void)i_setVisibleLine:(BOOL)arg0 ;
-(void)i_willValidateLayout;
-(void)invalidateAndCleanupConnectedLayouts;
-(void)invalidateConnections;
-(void)invalidatePath;
-(void)invalidatePosition;
-(void)invalidateSize;
-(void)parentDidChange;
-(void)processChangedProperty:(int)arg0 ;
-(void)removeConnections;
-(void)updateConnectedPath;


@end


#endif