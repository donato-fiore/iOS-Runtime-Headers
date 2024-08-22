// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL19PLAYBACKCOORDINATOR_H
#define _TTC19APPSTOREKITINTERNAL19PLAYBACKCOORDINATOR_H


#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal19PlaybackCoordinator : NSObject {
    ? parentViewController;
    ? visibilityTracker;
    ? playableViews;
    ? visiblePlayableIds;
    ? isActive;
    ? playbackCoalescingWaitTime;
    ? playbackWorkItem;
}




-(id)init;
-(void)didEnterBackground;
-(void)willEnterForeground;


@end


#endif