// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMETRICSMEMORYEVENT_H
#define IMMETRICSMEMORYEVENT_H



#import "IMAMSMetricsEvent.h"

@interface IMMetricsMemoryEvent : IMAMSMetricsEvent

@property (nonatomic) NSUInteger totalBytes;
@property (nonatomic) NSUInteger usedBytes;


-(id)init;
-(id)shortDescription;


@end


#endif