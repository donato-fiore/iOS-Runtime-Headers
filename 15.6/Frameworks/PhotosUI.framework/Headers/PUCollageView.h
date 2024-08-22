// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCOLLAGEVIEW_H
#define PUCOLLAGEVIEW_H

@class UIView, NSPointerArray, NSArray, PXRoundedCornerOverlayView, UIColor;



@interface PUCollageView : UIView

@property (readonly, nonatomic) NSPointerArray *_imageSizes; // ivar: __imageSizes
@property (readonly, nonatomic) NSArray *_imageViews; // ivar: __imageViews
@property (readonly, nonatomic) NSInteger _numberOfImageViews; // ivar: __numberOfImageViews
@property (retain, nonatomic, setter=_setRoundedCornerOverlayView:) PXRoundedCornerOverlayView *_roundedCornerOverlayView; // ivar: __roundedCornerOverlayView
@property (nonatomic) CGSize collageSize; // ivar: _collageSize
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIColor *cornersBackgroundColor; // ivar: _cornersBackgroundColor
@property (nonatomic) BOOL hasRoundedCorners; // ivar: _hasRoundedCorners
@property (nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (nonatomic) CGFloat subitemCornerRadius; // ivar: _subitemCornerRadius


+(NSInteger)maximumNumberOfItems;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )imageSizeForItemAtIndex:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateImageViews;
-(void)_updateRoundedCornerOverlayView;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setImageSize:(struct CGSize )arg0 forItemAtIndex:(NSInteger)arg1 ;


@end


#endif