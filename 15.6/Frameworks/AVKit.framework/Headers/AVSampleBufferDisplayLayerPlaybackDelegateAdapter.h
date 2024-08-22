// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSAMPLEBUFFERDISPLAYLAYERPLAYBACKDELEGATEADAPTER_H
#define AVSAMPLEBUFFERDISPLAYLAYERPLAYBACKDELEGATEADAPTER_H

@class NSString;
@protocol AVPictureInPictureSampleBufferPlaybackDelegate;

#import <Foundation/Foundation.h>


@interface AVSampleBufferDisplayLayerPlaybackDelegateAdapter : NSObject <AVPictureInPictureSampleBufferPlaybackDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<AVPictureInPictureSampleBufferPlaybackDelegate> *playbackDelegate; // ivar: _playbackDelegate
@property (readonly) Class superclass;


+(id)playbackDelegateAdapterWithDelegate:(id)arg0 ;
-(BOOL)pictureInPictureControllerIsPlaybackPaused:(id)arg0 ;
-(struct ? )pictureInPictureControllerTimeRangeForPlayback:(id)arg0 ;
-(void)pictureInPictureController:(id)arg0 didTransitionToRenderSize:(struct ? )arg1 ;
-(void)pictureInPictureController:(id)arg0 setPlaying:(BOOL)arg1 ;
-(void)pictureInPictureController:(id)arg0 skipByInterval:(struct ? )arg1 completionHandler:(id)arg2 ;


@end


#endif