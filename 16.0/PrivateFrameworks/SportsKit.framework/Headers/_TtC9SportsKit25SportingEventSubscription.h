// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SPORTSKIT25SPORTINGEVENTSUBSCRIPTION_H
#define _TTC9SPORTSKIT25SPORTINGEVENTSUBSCRIPTION_H


#import <Foundation/Foundation.h>


@interface _TtC9SportsKit25SportingEventSubscription : NSObject {
    ? canonicalId;
    ? sport;
    ? updatedAt;
    ? mostRecentPlay;
    ? metadata;
    ? shouldDisplayPlayByPlay;
    ? heartbeatTTLSeconds;
    ? eventStateURL;
    ? consumers;
    ? sportingEventDetails;
    ? runningClock;
}




-(id)init;


@end


#endif