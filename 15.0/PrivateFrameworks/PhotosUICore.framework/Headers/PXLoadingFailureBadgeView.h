// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXLOADINGFAILUREBADGEVIEW_H
#define PXLOADINGFAILUREBADGEVIEW_H

@class UIImageView;



@interface PXLoadingFailureBadgeView : UIImageView {
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setSizeClass:) NSInteger _sizeClass; // ivar: __sizeClass


+(id)_imageForSizeClass:(NSInteger)arg0 ;
+(struct CGSize )_imageSizeForSizeClass:(NSInteger)arg0 ;
-(BOOL)_needsUpdate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateImage;
-(void)_invalidateSizeClass;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateImageIfNeeded;
-(void)_updateSizeClassIfNeeded;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 ;
-(void)sizeToFit;


@end


#endif