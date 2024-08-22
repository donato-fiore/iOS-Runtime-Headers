// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMAVPLAYERVIDEOVIEWCONTROLLER_H
#define IMAVPLAYERVIDEOVIEWCONTROLLER_H

@class AVPlayerViewController;


#import "IMAVPlayer.h"

@interface IMAVPlayerVideoViewController : AVPlayerViewController

@property (weak, nonatomic) IMAVPlayer *im_player; // ivar: _im_player


-(id)initWithPlayer:(id)arg0 ;
-(void)mediaItemDidChange;
-(void)playbackSpeedDidChange;


@end


#endif