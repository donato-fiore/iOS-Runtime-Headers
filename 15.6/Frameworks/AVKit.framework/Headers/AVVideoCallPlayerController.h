// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVIDEOCALLPLAYERCONTROLLER_H
#define AVVIDEOCALLPLAYERCONTROLLER_H



#import "AVPlayerController.h"
#import "AVPictureInPictureControllerContentSource.h"

@interface AVVideoCallPlayerController : AVPlayerController

@property (nonatomic) CGSize contentDimensions; // ivar: _contentDimensions
@property (weak, nonatomic) AVPictureInPictureControllerContentSource *contentSource; // ivar: _contentSource
@property (nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible; // ivar: _pictureInPicturePossible


-(BOOL)isPlaying;
-(CGFloat)rate;
-(NSInteger)status;
-(NSInteger)timeControlStatus;


@end


#endif