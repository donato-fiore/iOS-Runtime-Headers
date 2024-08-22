// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISPLAYASSETIMAGECONTENTVIEW_H
#define PXDISPLAYASSETIMAGECONTENTVIEW_H

@class UIImageView;


#import "PXDisplayAssetContentView.h"

@interface PXDisplayAssetImageContentView : PXDisplayAssetContentView {
    UIImageView *_imageView;
}




-(BOOL)isDisplayingFullQualityContent;
-(CGFloat)loadingProgress;
-(NSInteger)playbackStyle;
-(id)contentView;
-(void)_updateImageViewContentMode;
-(void)_updateImageViewFilters;
-(void)contentModeDidChange;
-(void)contentsRectDidChange;
-(void)imageDidChange;
-(void)imageProgressDidChange;
-(void)imageRequesterDidChange:(NSUInteger)arg0 ;
-(void)isDisplayingFullQualityContentDidChange;
-(void)placeholderImageFiltersDidChange;


@end


#endif