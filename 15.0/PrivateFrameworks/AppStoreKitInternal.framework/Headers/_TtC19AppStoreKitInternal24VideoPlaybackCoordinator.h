// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL24VIDEOPLAYBACKCOORDINATOR_H
#define _TTC19APPSTOREKITINTERNAL24VIDEOPLAYBACKCOORDINATOR_H


#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal24VideoPlaybackCoordinator : NSObject {
    ? visibilityTracker;
    ? videoViews;
    ? playbackQueue;
    ? parentViewController;
    ? playbackCoalescingWaitTime;
    ? metricsPipeline;
    ? playbackWorkItem;
    ? _isGlobalAutoPlayEnabled;
    ? isAutoPlayEnabled;
    ? isAutoPlayActive;
    ? shouldLoopAutoPlayback;
    ? shouldLoopSingleVideo;
    ? currentPlaybackIndex;
    ? activeVideo;
}




-(id)init;
-(void)didChangeAutoPlayVideoSetting:(id)arg0 ;
-(void)didEnterBackground;
-(void)willEnterForeground;


@end


#endif