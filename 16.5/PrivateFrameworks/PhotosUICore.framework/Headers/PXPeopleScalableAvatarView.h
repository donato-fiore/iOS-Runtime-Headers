// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLESCALABLEAVATARVIEW_H
#define PXPEOPLESCALABLEAVATARVIEW_H

@class PHFace, UIImageView;
@protocol PXPerson;


#import "PXSmartScaleView.h"

@interface PXPeopleScalableAvatarView : PXSmartScaleView {
    CGFloat _imageViewCornerRadius;
    CGSize _imagePixelSize;
}


@property (retain, nonatomic) PHFace *face; // ivar: _face
@property (retain) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSObject<PXPerson> *person; // ivar: _person
@property (nonatomic) BOOL useCornerRadius; // ivar: _useCornerRadius
@property (nonatomic) BOOL useLowMemoryMode; // ivar: _useLowMemoryMode
@property (nonatomic) BOOL useRoundAvatar; // ivar: _useRoundAvatar


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateImageAndWait:(BOOL)arg0 ;
-(void)_updateImageViewCornerWithRadius:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)updateImage;
-(void)viewScaleDidChange;


@end


#endif