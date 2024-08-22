// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUILIVEPHOTOPLAYERLIVEWALLPAPERVIEW_H
#define PBUILIVEPHOTOPLAYERLIVEWALLPAPERVIEW_H

@class ISLiveWallpaperUIView;


#import "PBUILivePhotoPlayerView.h"

@interface PBUILivePhotoPlayerLiveWallpaperView : PBUILivePhotoPlayerView {
    ISLiveWallpaperUIView *_liveWallpaperView;
}




-(NSInteger)playbackState;
-(id)_playerUIView;
-(id)gestureRecognizer;
-(id)init;
-(void)_subclass_updateForForcingPlayback:(BOOL)arg0 ;
-(void)_subclass_updatePlayerItemForUse:(id)arg0 ;


@end


#endif