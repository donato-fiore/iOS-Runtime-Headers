// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDIOPLAYERIMPL_H
#define AUDIOPLAYERIMPL_H

@class NSData, NSURL, NSDictionary, NSArray, AVAudioSession;
@protocol AVAudioPlayerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVAudioFormat.h"

@interface AudioPlayerImpl : NSObject {
    id<AVAudioPlayerDelegate> *_delegate;
    NSData *_data;
    NSURL *_url;
    NSDictionary *_actualSettings;
    AVAudioFormat *_format;
    BOOL _playRetain;
    NSArray *_channelAssignments;
    AVAudioSession *_audioSession;
    BOOL _sessionListenerWasSet;
    NSUInteger _endInterruptionFlags;
    *void _localPlayer;
    NSObject<OS_dispatch_queue> *_gcd;
}




-(id)init;
-(void)dealloc;


@end


#endif