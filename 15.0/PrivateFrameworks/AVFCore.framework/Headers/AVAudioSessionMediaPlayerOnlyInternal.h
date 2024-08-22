// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOSESSIONMEDIAPLAYERONLYINTERNAL_H
#define AVAUDIOSESSIONMEDIAPLAYERONLYINTERNAL_H

@class NSString, NSDictionary;
@protocol AVAudioSessionDelegateMediaPlayerOnly;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject {
    AVWeakReference *weakReference;
    *OpaqueFigPlayer figPlayer;
    BOOL isAppAudioSession;
    BOOL isActive;
    NSString *category;
    NSString *mode;
    NSDictionary *activationContext;
    BOOL usingLongFormAudio;
    id<AVAudioSessionDelegateMediaPlayerOnly> *delegate;
}






@end


#endif