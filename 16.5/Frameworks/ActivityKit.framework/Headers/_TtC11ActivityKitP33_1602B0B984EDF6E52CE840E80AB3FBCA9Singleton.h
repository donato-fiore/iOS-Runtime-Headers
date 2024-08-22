// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ACTIVITYKITP33_1602B0B984EDF6E52CE840E80AB3FBCA9SINGLETON_H
#define _TTC11ACTIVITYKITP33_1602B0B984EDF6E52CE840E80AB3FBCA9SINGLETON_H

@protocol ACActivityOutputXPCClient;

#import <Foundation/Foundation.h>


@interface _TtC11ActivityKitP33_1602B0B984EDF6E52CE840E80AB3FBCA9Singleton : NSObject <ACActivityOutputXPCClient>

 {
    ? _queue_target;
    ? activityDiffPublisher;
    ? _activityPublisher;
    ? serverStartupToken;
    ? _queue_activities;
    ? _queue_subscriptions;
    ? queue;
    ? calloutQueue;
}




+(id)shared;
-(id)init;
-(void)activitiesChanged:(id)arg0 completion:(id)arg1 ;


@end


#endif