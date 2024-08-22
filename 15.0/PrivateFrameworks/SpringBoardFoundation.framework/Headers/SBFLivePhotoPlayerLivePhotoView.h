// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLIVEPHOTOPLAYERLIVEPHOTOVIEW_H
#define SBFLIVEPHOTOPLAYERLIVEPHOTOVIEW_H

@class ISLivePhotoUIView;


#import "SBFLivePhotoPlayerView.h"

@interface SBFLivePhotoPlayerLivePhotoView : SBFLivePhotoPlayerView {
    ISLivePhotoUIView *_livePhotoView;
}




-(NSInteger)playbackState;
-(id)_playerUIView;
-(id)gestureRecognizer;
-(id)init;
-(void)_subclass_updateForForcingPlayback:(BOOL)arg0 ;
-(void)_subclass_updatePlayerItemForUse:(id)arg0 ;


@end


#endif