// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLOADINGFAILUREBADGEVIEW_H
#define PXLOADINGFAILUREBADGEVIEW_H

@class UIView, NSError, UIImage, UIImageView;



@interface PXLoadingFailureBadgeView : UIView

@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger sizeClass; // ivar: _sizeClass


+(NSInteger)_sizeClassForSize:(struct CGSize )arg0 ;
+(id)_imageForSizeClass:(NSInteger)arg0 ;
+(struct CGSize )sizeForSizeClass:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 error:(id)arg1 ;
-(void)_handlePrimaryAction;
-(void)_handleTap:(id)arg0 ;
-(void)_installGestureRecognizers;
-(void)layoutSubviews;


@end


#endif