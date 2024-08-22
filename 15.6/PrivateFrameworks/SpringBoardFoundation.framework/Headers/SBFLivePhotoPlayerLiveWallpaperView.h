// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFLIVEPHOTOPLAYERLIVEWALLPAPERVIEW_H
#define SBFLIVEPHOTOPLAYERLIVEWALLPAPERVIEW_H

@class ISLiveWallpaperUIView;


#import "SBFLivePhotoPlayerView.h"

@interface SBFLivePhotoPlayerLiveWallpaperView : SBFLivePhotoPlayerView {
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