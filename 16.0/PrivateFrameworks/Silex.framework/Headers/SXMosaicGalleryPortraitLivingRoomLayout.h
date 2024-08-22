// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXMOSAICGALLERYPORTRAITLIVINGROOMLAYOUT_H
#define SXMOSAICGALLERYPORTRAITLIVINGROOMLAYOUT_H



#import "SXMosaicGalleryGroupLayout.h"

@interface SXMosaicGalleryPortraitLivingRoomLayout : SXMosaicGalleryGroupLayout



-(CGFloat)calculateHeight;
-(CGFloat)desiredHeightForLargeItem;
-(CGFloat)desiredHeightForSmallerItems;
-(NSUInteger)indexOfLargeItem;
-(id)calculateFrames;
-(struct _NSRange )columnRangeForItem:(id)arg0 ;
-(struct _NSRange )columnRangeForLargeItem;
-(struct _NSRange )columnRangeForSmallerItems;


@end


#endif