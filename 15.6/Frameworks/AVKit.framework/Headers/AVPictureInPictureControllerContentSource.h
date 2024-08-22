// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPICTUREINPICTURECONTROLLERCONTENTSOURCE_H
#define AVPICTUREINPICTURECONTROLLERCONTENTSOURCE_H

@class AVSampleBufferDisplayLayer, UIView, AVPlayerLayer;
@protocol AVPictureInPictureSampleBufferPlaybackDelegate, AVPictureInPictureContentSource;

#import <Foundation/Foundation.h>

#import "AVPictureInPictureVideoCallViewController.h"

@interface AVPictureInPictureControllerContentSource : NSObject {
    CGSize _initialRenderSize;
    AVSampleBufferDisplayLayer *_sampleBufferDisplayLayer;
    id<AVPictureInPictureSampleBufferPlaybackDelegate> *_sampleBufferPlaybackDelegate;
}


@property (readonly, nonatomic) NSObject<AVPictureInPictureContentSource> *_activeVideoCallContentViewController; // ivar: __activeVideoCallContentViewController
@property (readonly, weak, nonatomic) id *_activeVideoCallSourceView; // ivar: __activeVideoCallSourceView
@property (readonly, nonatomic) AVPictureInPictureVideoCallViewController *activeVideoCallContentViewController;
@property (readonly, weak, nonatomic) UIView *activeVideoCallSourceView;
@property (readonly, nonatomic) BOOL hasInitialRenderSize; // ivar: _hasInitialRenderSize
@property (readonly, nonatomic) CGSize initialRenderSize;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *sampleBufferDisplayLayer;
@property (readonly, weak, nonatomic) NSObject<AVPictureInPictureSampleBufferPlaybackDelegate> *sampleBufferPlaybackDelegate;
@property (readonly, nonatomic) NSObject<AVPictureInPictureContentSource> *source;


+(NSInteger)version;
-(id)init;
-(id)initWithActiveVideoCallSourceView:(id)arg0 contentViewController:(id)arg1 ;
-(id)initWithPlayerLayer:(id)arg0 ;
-(id)initWithSampleBufferDisplayLayer:(id)arg0 initialRenderSize:(struct CGSize )arg1 playbackDelegate:(id)arg2 ;
-(id)initWithSampleBufferDisplayLayer:(id)arg0 playbackDelegate:(id)arg1 ;
-(void)dealloc;


@end


#endif