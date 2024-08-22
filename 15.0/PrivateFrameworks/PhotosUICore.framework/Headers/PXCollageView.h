// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCOLLAGEVIEW_H
#define PXCOLLAGEVIEW_H

@class UIView, NSPointerArray, NSArray, UIColor;


#import "PXRoundedCornerOverlayView.h"
#import "PXLayoutPerformerOutput.h"

@interface PXCollageView : UIView

@property (readonly, nonatomic) NSPointerArray *_imageSizes; // ivar: __imageSizes
@property (readonly, nonatomic) NSArray *_imageViews; // ivar: __imageViews
@property (retain, nonatomic) PXRoundedCornerOverlayView *_roundedCornerOverlayView; // ivar: __roundedCornerOverlayView
@property (copy, nonatomic) UIColor *cornerBackgroundColor; // ivar: _cornerBackgroundColor
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat imageCornerRadius; // ivar: _imageCornerRadius
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput; // ivar: _layoutOutput
@property (nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property (nonatomic) CGFloat spacing; // ivar: _spacing


+(NSInteger)maximumNumberOfItems;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )imageSizeForItemAtIndex:(NSInteger)arg0 ;
-(void)_updateImageViews;
-(void)_updateRoundedCornerOverlayView;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setImageSize:(struct CGSize )arg0 forItemAtIndex:(NSInteger)arg1 ;


@end


#endif