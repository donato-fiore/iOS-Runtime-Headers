// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUILIVEPHOTOPLAYERLIVEPHOTOVIEW_H
#define PBUILIVEPHOTOPLAYERLIVEPHOTOVIEW_H

@class ISLivePhotoUIView;


#import "PBUILivePhotoPlayerView.h"

@interface PBUILivePhotoPlayerLivePhotoView : PBUILivePhotoPlayerView {
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