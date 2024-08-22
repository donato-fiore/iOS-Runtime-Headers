// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAYBACKCAPABILITIES_H
#define PLAYBACKCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface PlaybackCapabilities : NSObject



+(BOOL)canDropFrameWhenSpeedUp;
+(BOOL)canPlaybackThree1080P30Streams;
+(BOOL)canPlaybackThree1080P60Streams;


@end


#endif