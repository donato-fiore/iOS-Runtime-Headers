// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13COREKNOWLEDGE36PRIVATELEARNINGPLUGINEVENTSSCHEDULER_H
#define _TTC13COREKNOWLEDGE36PRIVATELEARNINGPLUGINEVENTSSCHEDULER_H


#import <Foundation/Foundation.h>


@interface _TtC13CoreKnowledge36PrivateLearningPluginEventsScheduler : NSObject {
    ? pluginEventsScheduler;
}




+(id)sharedScheduler;
-(id)init;
-(void)subscribeToEvents;
-(void)unsubscribe;


@end


#endif