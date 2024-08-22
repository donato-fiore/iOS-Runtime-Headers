// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI22GROUPACTIVITIESMANAGER_H
#define _TTC8VIDEOSUI22GROUPACTIVITIESMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC8VideosUI22GroupActivitiesManager : NSObject {
    ? _session;
    ? subscriptions;
    ? sessionStateObserver;
    ? sessionActivityObserver;
    ? sessionActivityParticipantsObserver;
    ? previousState;
    ? modifyingActivityIdentifier;
    ? _isSessionActive;
    ? metricsDictionary;
    ? participantsCountMax;
    ? participantsCount;
    ? playerObserver;
    ? sharedPlayer;
}


@property (nonatomic) BOOL isSessionActive;


-(id)init;


@end


#endif