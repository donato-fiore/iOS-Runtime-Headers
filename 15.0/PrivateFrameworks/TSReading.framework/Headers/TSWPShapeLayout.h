// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSHAPELAYOUT_H
#define TSWPSHAPELAYOUT_H

@protocol TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver, TSWPShapeLayoutDelegate;


#import "TSDShapeLayout.h"
#import "TSDWrapPolygon.h"
#import "TSWPLayout.h"
#import "TSWPPadding.h"

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver>

 {
    TSDWrapPolygon *_cachedInteriorWrapPolygon;
    BOOL _observingStorage;
}


@property (readonly, nonatomic) CGSize adjustedInsets;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) BOOL autosizes;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) TSWPLayout *containedLayout; // ivar: _containedLayout
@property NSObject<TSWPShapeLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) CGFloat textScaleFactor;


-(BOOL)allowsLastLineTruncation:(id)arg0 ;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)isInvisibleAutosizingShape;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)supportsRotation;
-(BOOL)textLayoutShouldLayoutVertically:(id)arg0 ;
-(BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 outWidth:(*CGFloat)arg2 outGap:(*CGFloat)arg3 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(id)childSearchTargets;
-(id)children;
-(id)dependentLayouts;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)instructionalStorageForContainedStorage:(id)arg0 storageKind:(int)arg1 ;
-(id)interiorClippingPath;
-(id)interiorWrapPath;
-(id)interiorWrapPolygon;
-(id)pathSource;
-(id)textWrapper;
-(struct CGAffineTransform )autosizedTransform;
-(struct CGAffineTransform )autosizedTransformForInfoGeometry:(id)arg0 ;
-(struct CGAffineTransform )computeLayoutTransform;
-(struct CGPoint )autosizePositionOffset;
-(struct CGPoint )autosizePositionOffsetForFixedWidth:(BOOL)arg0 height:(BOOL)arg1 ;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(unsigned int)autosizeFlagsForTextLayout:(id)arg0 ;
-(unsigned int)cropLine:(struct CGRect )arg0 lineSegmentRects:(struct CGRect )arg1 ;
-(unsigned int)maxLineCountForTextLayout:(id)arg0 ;
-(unsigned int)verticalAlignmentForTextLayout:(id)arg0 ;
-(void)addChild:(id)arg0 ;
-(void)createContainedLayoutForEditing;
-(void)createContainedLayoutForInstructionalText;
-(void)dealloc;
-(void)destroyContainedLayoutForInstructionalText;
-(void)insertChild:(id)arg0 above:(id)arg1 ;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChild:(id)arg0 below:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;
-(void)invalidatePath;
-(void)invalidateSize;
-(void)processChangedProperty:(int)arg0 ;
-(void)replaceChild:(id)arg0 with:(id)arg1 ;
-(void)setChildren:(id)arg0 ;
-(void)setGeometry:(id)arg0 ;
-(void)storage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(int)arg3 ;
-(void)updateChildrenFromInfo;
-(void)willBeAddedToLayoutController:(id)arg0 ;
-(void)willBeRemovedFromLayoutController:(id)arg0 ;


@end


#endif