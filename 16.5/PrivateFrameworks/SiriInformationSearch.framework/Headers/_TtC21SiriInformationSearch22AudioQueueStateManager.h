// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21SIRIINFORMATIONSEARCH22AUDIOQUEUESTATEMANAGER_H
#define _TTC21SIRIINFORMATIONSEARCH22AUDIOQUEUESTATEMANAGER_H

@protocol SOMediaNowPlayingListening;

#import <Foundation/Foundation.h>


@interface _TtC21SiriInformationSearch22AudioQueueStateManager : NSObject <SOMediaNowPlayingListening>

 {
    ? updateAudioQueueStateCacheGroup;
    ? queueStateObserver;
    ? isObserverRegistered;
    ? lock;
    ? nowPlayingInfoCache;
    ? queueStateCache;
    ? applicationBundleIdentifierCache;
}




-(id)init;
-(void)dealloc;
-(void)nowPlayingObserver:(id)arg0 playbackStateDidChangeFrom:(NSInteger)arg1 to:(NSInteger)arg2 lastPlayingDate:(id)arg3 ;


@end


#endif