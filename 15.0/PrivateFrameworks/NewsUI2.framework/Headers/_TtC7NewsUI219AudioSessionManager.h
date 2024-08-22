// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI219AUDIOSESSIONMANAGER_H
#define _TTC7NEWSUI219AUDIOSESSIONMANAGER_H

@class SwiftObject;
@protocol TSAudioPlaybackContextType;



@interface _TtC7NewsUI219AudioSessionManager : SwiftObject <TSAudioPlaybackContextType>

 {
    ? sessionManager;
    ? sessionObserver;
    ? tracker;
    ? nextTrackTracker;
    ? playbackState;
    ? channelDataFactory;
    ? scienceDataFactory;
    ? paidBundleConfigManager;
    ? itemSession;
    ? onNextTrack;
}




-(void)captureArticleViewContextWithSessionID:(id)arg0 ;


@end


#endif