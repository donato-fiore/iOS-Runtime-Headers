// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDJSENGAGEMENTEVENTHANDLER_H
#define AMDJSENGAGEMENTEVENTHANDLER_H


#import <Foundation/Foundation.h>


@interface AMDJSEngagementEventHandler : NSObject



+(id)handleAggregatedEngagementEvent:(id)arg0 forEventType:(NSInteger)arg1 forUserId:(id)arg2 andStoreFrontId:(unsigned int)arg3 error:(*id)arg4 ;
+(id)handleSingleEngagementEvent:(id)arg0 forEventType:(NSInteger)arg1 forUserId:(id)arg2 andStoreFrontId:(unsigned int)arg3 error:(*id)arg4 ;
+(unsigned int)saveLaunchEvents:(id)arg0 error:(*id)arg1 ;


@end


#endif