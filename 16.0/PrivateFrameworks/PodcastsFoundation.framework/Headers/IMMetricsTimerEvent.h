// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMETRICSTIMEREVENT_H
#define IMMETRICSTIMEREVENT_H



#import "IMAMSMetricsEvent.h"

@interface IMMetricsTimerEvent : IMAMSMetricsEvent

@property (nonatomic) CGFloat duration;


-(id)init;
-(id)shortDescription;


@end


#endif