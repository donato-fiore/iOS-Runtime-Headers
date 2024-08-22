// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERARECORDINGPLAYERVIEW_H
#define HUCAMERARECORDINGPLAYERVIEW_H

@class UIView, AVPlayer, AVPlayerLayer, UIProgressView;



@interface HUCameraRecordingPlayerView : UIView

@property (readonly, nonatomic) AVPlayer *player; // ivar: _player
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly, nonatomic) UIProgressView *progressView; // ivar: _progressView


+(Class)layerClass;
-(id)initWithPlayer:(id)arg0 displayingProgressView:(BOOL)arg1 ;


@end


#endif