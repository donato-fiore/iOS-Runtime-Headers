// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMOTIONSTATEDUETDATAPROVIDER_H
#define ATXMOTIONSTATEDUETDATAPROVIDER_H



#import "ATXDuetDataProvider.h"

@interface ATXMotionStateDuetDataProvider : ATXDuetDataProvider



+(Class)supportedDuetEventClass;
+(NSInteger)supportedCoreDuetStream;


@end


#endif