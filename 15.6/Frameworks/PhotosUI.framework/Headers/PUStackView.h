// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSTACKVIEW_H
#define PUSTACKVIEW_H

@class UIView, UIImageView, NSPointerArray, NSArray, UIColor, UIImage;


#import "PUPhotoDecoration.h"

@interface PUStackView : UIView {
    CGAffineTransform _transforms;
    UIImageView *_combinedPhotoDecorationImageView;
    BOOL _imageHidden;
    BOOL _needsDynamicLayout;
}


@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView; // ivar: __backgroundView
@property (readonly, nonatomic) NSPointerArray *_imageSizes; // ivar: __imageSizes
@property (readonly, nonatomic) NSInteger _numberOfViews; // ivar: __numberOfViews
@property (copy, nonatomic, setter=_setPhotoDecorationVariants:) NSArray *_photoDecorationVariants; // ivar: __photoDecorationVariants
@property (readonly, nonatomic) NSArray *_photoViews; // ivar: __photoViews
@property (nonatomic) BOOL combinesPhotoDecorations; // ivar: _combinesPhotoDecorations
@property (nonatomic) BOOL continuousCorners; // ivar: _continuousCorners
@property (nonatomic) BOOL cornerOverlaysDisabled; // ivar: _cornerOverlaysDisabled
@property (readonly, nonatomic) CGFloat cornerRadius;
@property (retain, nonatomic) UIColor *cornersBackgroundColor; // ivar: _cornersBackgroundColor
@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (retain, nonatomic) UIImage *emptyPlaceholderImage; // ivar: _emptyPlaceholderImage
@property (retain, nonatomic) UIColor *gridBackgroundColor; // ivar: _gridBackgroundColor
@property (nonatomic) CGFloat gridItemSpacing; // ivar: _gridItemSpacing
@property (nonatomic) CGFloat gridMargin; // ivar: _gridMargin
@property (nonatomic) BOOL hasRoundedCorners; // ivar: _hasRoundedCorners
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) CGFloat itemAlpha; // ivar: _itemAlpha
@property (nonatomic) NSInteger numberOfVisibleItems; // ivar: _numberOfVisibleItems
@property (retain, nonatomic) PUPhotoDecoration *photoDecoration; // ivar: _photoDecoration
@property (nonatomic) CGFloat posterSquareCornerRadius; // ivar: _posterSquareCornerRadius
@property (nonatomic) CGFloat posterSubitemCornerRadius; // ivar: _posterSubitemCornerRadius
@property (readonly, nonatomic) NSArray *stackItemViews;
@property (nonatomic) UIOffset stackOffset; // ivar: _stackOffset
@property (nonatomic) CGPoint stackPerspectiveFactor; // ivar: _stackPerspectiveFactor
@property (nonatomic) UIEdgeInsets stackPerspectiveInsets; // ivar: _stackPerspectiveInsets
@property (nonatomic) UIOffset stackPerspectiveOffset; // ivar: _stackPerspectiveOffset
@property (nonatomic) CGSize stackSize; // ivar: _stackSize
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly, nonatomic) CGPoint topLeftCornerOfFrontStackItem;


+(NSInteger)maximumNumberOfVisibleImagesForStyle:(NSUInteger)arg0 ;
+(NSInteger)maximumNumberOfVisibleItemsForStyle:(NSUInteger)arg0 ;
-(BOOL)isImageHiddenForItemAtIndex:(NSInteger)arg0 ;
-(BOOL)wouldCoverAllItemsInStackView:(id)arg0 ;
-(id)_combinedPhotoDecorationsImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)newLayoutAttributesForItemAtIndex:(NSInteger)arg0 relativeToView:(id)arg1 ;
-(id)newLayoutAttributesForVisbleItemsRelativeToView:(id)arg0 maxCount:(NSInteger)arg1 ;
-(struct CGRect )_getStackFrame;
-(struct CGRect )rectOfStackItemAtIndex:(NSInteger)arg0 inCoordinateSpace:(id)arg1 ;
-(void)_getCenter:(struct CGPoint *)arg0 bounds:(struct CGRect *)arg1 forPhotoViewAtIndex:(NSInteger)arg2 ;
-(void)_rebuildDecorationVariants;
-(void)_setNeedsDynamicLayout;
-(void)_updateBackgroundView;
-(void)_updateDynamicLayout;
-(void)_updateHighlight;
-(void)_updateNumberOfViews;
-(void)_updatePhotoViews;
-(void)_updateSubviewsOrdering;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBadgeInfo:(struct PXAssetBadgeInfo )arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setBadgeInfo:(struct PXAssetBadgeInfo )arg0 style:(NSInteger)arg1 forItemAtIndex:(NSInteger)arg2 ;
-(void)setCollectionTileLayoutTemplate:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setFeatureSpec:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setImage:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setImageHidden:(BOOL)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setImageSize:(struct CGSize )arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setSubtitle:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setTitle:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setTitleFontName:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif