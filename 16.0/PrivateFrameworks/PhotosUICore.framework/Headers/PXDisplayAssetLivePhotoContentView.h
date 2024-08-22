// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISPLAYASSETLIVEPHOTOCONTENTVIEW_H
#define PXDISPLAYASSETLIVEPHOTOCONTENTVIEW_H

@class ISLivePhotoUIView, AVPlayerItem;


#import "PXDisplayAssetContentView.h"

@interface PXDisplayAssetLivePhotoContentView : PXDisplayAssetContentView {
    ISLivePhotoUIView *_livePhotoView;
}


@property (nonatomic) CGFloat playerItemLoadingProgress; // ivar: _playerItemLoadingProgress
@property (retain, nonatomic) AVPlayerItem *videoPlayerItem; // ivar: _videoPlayerItem


-(BOOL)isDisplayingFullQualityContent;
-(CGFloat)loadingProgress;
-(NSInteger)playbackStyle;
-(id)contentView;
-(void)_handlePlayerItemResult:(id)arg0 info:(id)arg1 requestID:(NSInteger)arg2 ;
-(void)_updateLivePhotoContentMode;
-(void)_updateLivePhotoPlayerItem;
-(void)contentModeDidChange;
-(void)contentsRectDidChange;
-(void)imageDidChange;
-(void)imageProgressDidChange;
-(void)imageRequesterDidChange:(NSUInteger)arg0 ;
-(void)placeholderImageFiltersDidChange;
-(void)updateContent;
-(void)viewModelDidChange:(NSUInteger)arg0 ;


@end


#endif