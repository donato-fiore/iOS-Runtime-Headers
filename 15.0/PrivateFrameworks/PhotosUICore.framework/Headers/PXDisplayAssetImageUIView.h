// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDISPLAYASSETIMAGEUIVIEW_H
#define PXDISPLAYASSETIMAGEUIVIEW_H

@class UIImageView, NSString;
@protocol PXChangeObserver;


#import "PXDisplayAssetUIView.h"

@interface PXDisplayAssetImageUIView : PXDisplayAssetUIView <PXChangeObserver>

 {
    UIImageView *_imageView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDisplayingFullQualityContent;
-(CGFloat)loadingProgress;
-(NSInteger)playbackStyle;
-(id)contentView;
-(void)_updateImageViewFilters;
-(void)contentsRectDidChange;
-(void)imageDidChange;
-(void)imageProgressDidChange;
-(void)isDisplayingFullQualityContentDidChange;
-(void)placeholderImageFiltersDidChange;


@end


#endif