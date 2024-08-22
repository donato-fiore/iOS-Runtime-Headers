// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMPAGEAMSMETRICSEVENT_H
#define IMPAGEAMSMETRICSEVENT_H



#import "IMAMSMetricsEvent.h"

@interface IMPageAMSMetricsEvent : IMAMSMetricsEvent

@property (nonatomic) CGFloat pageRenderTime;


-(CGFloat)timeIntervalFromMilliseconds:(id)arg0 ;
-(id)init;
-(id)millisecondsFromTimeInterval:(CGFloat)arg0 ;


@end


#endif