// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDISPLAYASSETLIVEPHOTOUIVIEW_H
#define PXDISPLAYASSETLIVEPHOTOUIVIEW_H

@class ISLivePhotoUIView, NSString, AVPlayerItem;
@protocol PXChangeObserver;


#import "PXDisplayAssetUIView.h"

@interface PXDisplayAssetLivePhotoUIView : PXDisplayAssetUIView <PXChangeObserver>

 {
    ISLivePhotoUIView *_livePhotoView;
    NSInteger _requestID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) AVPlayerItem *videoPlayerItem; // ivar: _videoPlayerItem


-(BOOL)isDisplayingFullQualityContent;
-(NSInteger)playbackStyle;
-(id)contentView;
-(void)_handlePlayerItemResult:(id)arg0 info:(id)arg1 requestID:(NSInteger)arg2 ;
-(void)_updateLivePhotoPlayerItem;
-(void)contentsRectDidChange;
-(void)imageDidChange;
-(void)placeholderImageFiltersDidChange;
-(void)updateContent;


@end


#endif