// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI16CAROUSELVIEWCELL_H
#define _TTC8VIDEOSUI16CAROUSELVIEWCELL_H



#import "VUIBaseCollectionViewCell.h"

@interface _TtC8VideosUI16CarouselViewCell : VUIBaseCollectionViewCell {
    ? overlayView;
    ? isOverlayViewMasked;
    ? cellImageView;
    ? cornerRadius;
    ? shadow;
    ? $__lazy_storage_$_inlinePlaybackView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)vui_prepareForReuse;


@end


#endif