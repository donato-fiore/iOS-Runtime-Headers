// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISLIDESHOWGALLERYBARVIEW_H
#define SKUISLIDESHOWGALLERYBARVIEW_H

@class UIView, UIToolbar, NSMutableArray;
@protocol SKUISlideshowGalleryBarViewDelegate;



@interface SKUISlideshowGalleryBarView : UIView {
    UIToolbar *_toolbarView;
    UIView *_imageViewsContainer;
    NSMutableArray *_imageViews;
}


@property (weak, nonatomic) NSObject<SKUISlideshowGalleryBarViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger numberOfImages; // ivar: _numberOfImages
@property (nonatomic) NSUInteger selectedImageIndex; // ivar: _selectedImageIndex


-(id)_newImageView;
-(id)imageAtIndex:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif