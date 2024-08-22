// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXGALLERYITEMIMAGEVIEW_H
#define SXGALLERYITEMIMAGEVIEW_H



#import "SXImageView.h"
#import "SXGalleryItem.h"

@interface SXGalleryItemImageView : SXImageView

@property (readonly, nonatomic) SXGalleryItem *galleryItem; // ivar: _galleryItem


-(BOOL)isAccessibilityElement;
-(id)accessibilityLabel;
-(id)initWithGalleryItem:(id)arg0 imageResource:(id)arg1 resourceDataSource:(id)arg2 reachabilityProvider:(id)arg3 ;


@end


#endif