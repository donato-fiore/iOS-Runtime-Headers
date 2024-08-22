// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSAGALLERYLAYOUT_H
#define TSAGALLERYLAYOUT_H

@class TSDDrawableLayout, TSWPLayout, NSMapTable, NSArray, TSUBezierPath, NSString, TSDLayoutGeometry, TSWPPadding;
@protocol TSWPLayoutParent, TSWPColumnMetrics;


#import "TSAGalleryItem.h"

@interface TSAGalleryLayout : TSDDrawableLayout <TSWPLayoutParent, TSWPColumnMetrics>

 {
    CGRect _imageRectInImageContainer;
    TSWPLayout *_galleryCaptionLayout;
    NSMapTable *_captionLayoutsForItems;
    NSArray *_captionLayouts;
    BOOL _shouldSuppressCaptions;
    BOOL _isInvalidatingSize;
    TSUBezierPath *_cachedPathForClippingConnectionLines;
}


@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) TSWPLayout *currentCaptionLayout;
@property (retain, nonatomic) TSAGalleryItem *currentItem; // ivar: _currentItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDLayoutGeometry *imageContainerGeometry;
@property (readonly, nonatomic) CGRect imageContainerRect; // ivar: _imageContainerRect
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometry;
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometryInRoot;
@property (readonly, nonatomic) CGRect imageRect;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) CGRect pageControlBoundingRect; // ivar: _pageControlBoundingRect
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat textScaleFactor;


+(CGFloat)p_constrainedImageContainerHeightForHeight:(CGFloat)arg0 ;
+(CGFloat)p_constrainedImageContainerWidthForWidth:(CGFloat)arg0 maxLayoutWidth:(CGFloat)arg1 ;
-(BOOL)descendersCannotClip;
-(BOOL)shouldInvalidateSizeWhenInvalidateSizeOfReliedOnLayout:(id)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)p_minScaleForItem:(id)arg0 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 ;
-(id)childInfosForChildLayouts;
-(id)children;
-(id)childrenForPencilAnnotations;
-(id)computeInfoGeometryForFittingInFrame:(struct CGRect )arg0 ;
-(id)computeLayoutGeometry;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)interiorClippingPath;
-(id)p_galleryInfo;
-(id)pathForClippingConnectionLines;
-(int)verticalAlignmentForTextLayout:(id)arg0 ;
-(struct CGPoint )calculateOffsetForGalleryItem:(id)arg0 withFacesRect:(struct CGRect )arg1 ;
-(struct CGRect )alignmentFrameForProvidingGuidesInRoot;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )imageFrameInRootWithDragOffset:(struct CGPoint )arg0 ;
-(struct CGRect )imageRectInImageContainerForItem:(id)arg0 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct CGRect )p_imageRectInImageContainerForItem:(id)arg0 dragOffset:(struct CGPoint )arg1 ;
-(struct CGSize )minimumSize;
-(struct CGSize )p_maxLayoutSize;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(void)dealloc;
-(void)invalidateExteriorWrap;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;
-(void)invalidateSize;
-(void)updateChildrenFromInfo;


@end


#endif