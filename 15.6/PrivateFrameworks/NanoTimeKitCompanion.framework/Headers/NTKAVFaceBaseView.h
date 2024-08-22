// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKAVFACEBASEVIEW_H
#define NTKAVFACEBASEVIEW_H

@class NSString, UIImageView, CLKVideoPlayerView;
@protocol CLKVideoPlayerViewDelegate;


#import "NTKBackgroundImageFaceView.h"

@interface NTKAVFaceBaseView : NTKBackgroundImageFaceView <CLKVideoPlayerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *posterImageView; // ivar: _posterImageView
@property (readonly) Class superclass;
@property (retain, nonatomic) CLKVideoPlayerView *videoPlayerView; // ivar: _videoPlayerView


-(id)_selectedContentView;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)_beginTransitionToOption;
-(void)_cleanupAfterTransitionToOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_createVideoPlayerViewIfNeeded;
-(void)_loadSnapshotContentViews;
-(void)_mediaServicesWereReset:(id)arg0 ;
-(void)_prepareForEditing;
-(void)_reset;
-(void)_transitionToPosterView:(id)arg0 ;
-(void)_unloadSnapshotContentViews;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pauseVideoPlayerViewIfItExists;
-(void)videoPlayerViewDidBeginPlaying:(id)arg0 ;
-(void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg0 ;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg0 ;


@end


#endif