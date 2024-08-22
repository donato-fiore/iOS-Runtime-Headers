// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPSHAPELAYOUT_H
#define TSWPSHAPELAYOUT_H

@class TSDShapeLayout, TSDWrapSegments, NSString;
@protocol TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver, TSKChangeSourceObserver, TSWPStyleProviding, TSWPShapeLayoutDelegate;


#import "TSWPStorage.h"
#import "TSWPLayout.h"
#import "TSWPPadding.h"

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver, TSKChangeSourceObserver, TSWPStyleProviding>

 {
    TSDWrapSegments *_cachedInteriorWrapSegments;
    BOOL _observingStorage;
    TSWPStorage *_observedStorage;
}


@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) BOOL autosizes;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) TSWPLayout *containedLayout; // ivar: _containedLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TSWPShapeLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) BOOL shouldShowInstructionalText;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat textScaleFactor;


-(BOOL)descendersCannotClip;
-(BOOL)isInvisibleAutosizingShape;
-(BOOL)parentAutosizes;
-(BOOL)providesGuidesForChildLayouts;
-(BOOL)shouldAssertDependenciesAreCorrect;
-(BOOL)shouldInvalidateSizeWhenInvalidateSizeOfReliedOnLayout:(id)arg0 ;
-(BOOL)shouldValidate;
-(BOOL)textLayoutShouldLayoutVertically:(id)arg0 ;
-(BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg0 ;
-(BOOL)wantsToProvideStylesForTextLayout:(id)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 ;
-(id)bidirectionalSizeDependentLayouts;
-(id)childInfosForChildLayouts;
-(id)dependentLayouts;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)interiorClippingPath;
-(id)interiorWrapPath;
-(id)interiorWrapSegments;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)pathSource;
-(id)styleProvider;
-(id)styleProviderForTextLayout:(id)arg0 ;
-(id)textWrapper;
-(int)verticalAlignmentForTextLayout:(id)arg0 ;
-(struct CGAffineTransform )autosizedTransform;
-(struct CGAffineTransform )autosizedTransformForInfoGeometry:(id)arg0 ;
-(struct CGAffineTransform )computeLayoutTransform;
-(struct CGPoint )autosizePositionOffset;
-(struct CGPoint )autosizePositionOffsetForFixedWidth:(BOOL)arg0 height:(BOOL)arg1 ;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(void)createContainedLayoutForEditing;
-(void)createContainedLayoutForInstructionalText;
-(void)dealloc;
-(void)invalidatePath;
-(void)invalidateSize;
-(void)processChangedProperty:(int)arg0 ;
-(void)processChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)setGeometry:(id)arg0 ;
-(void)transferLayoutGeometryToInfo:(id)arg0 withAdditionalTransform:(struct CGAffineTransform )arg1 assertIfInDocument:(BOOL)arg2 ;
-(void)updateChildrenFromInfo;
-(void)validate;
-(void)willBeAddedToLayoutController:(id)arg0 ;
-(void)willBeRemovedFromLayoutController:(id)arg0 ;


@end


#endif