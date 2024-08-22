// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ANEQOSMAPPER_H
#define _ANEQOSMAPPER_H


#import <Foundation/Foundation.h>


@interface _ANEQoSMapper : NSObject



+(NSUInteger)queueIndexForQoS:(unsigned int)arg0 ;
+(NSUInteger)realTimeQueueIndex;
+(id)dispatchQueueArrayByMappingPrioritiesWithTag:(id)arg0 ;
+(int)programPriorityForQoS:(unsigned int)arg0 ;
+(int)realTimeProgramPriority;
+(unsigned int)aneBackgroundTaskQoS;
+(unsigned int)aneDefaultTaskQoS;
+(unsigned int)aneRealTimeTaskQoS;
+(unsigned int)aneUserInitiatedTaskQoS;
+(unsigned int)aneUserInteractiveTaskQoS;
+(unsigned int)aneUtilityTaskQoS;
+(unsigned int)qosForProgramPriority:(int)arg0 ;


@end


#endif