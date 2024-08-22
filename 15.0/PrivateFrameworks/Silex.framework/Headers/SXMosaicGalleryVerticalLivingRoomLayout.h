// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXMOSAICGALLERYVERTICALLIVINGROOMLAYOUT_H
#define SXMOSAICGALLERYVERTICALLIVINGROOMLAYOUT_H



#import "SXMosaicGalleryGroupLayout.h"

@interface SXMosaicGalleryVerticalLivingRoomLayout : SXMosaicGalleryGroupLayout

@property (readonly, nonatomic) CGFloat largeItemHeight; // ivar: _largeItemHeight
@property (readonly, nonatomic) CGFloat smallItemHeight; // ivar: _smallItemHeight


-(CGFloat)calculateHeight;
-(id)calculateFrames;
-(id)initWithCluster:(id)arg0 numberOfColumns:(NSUInteger)arg1 columnLayout:(id)arg2 ;
-(struct _NSRange )columnRangeForItem:(id)arg0 ;


@end


#endif