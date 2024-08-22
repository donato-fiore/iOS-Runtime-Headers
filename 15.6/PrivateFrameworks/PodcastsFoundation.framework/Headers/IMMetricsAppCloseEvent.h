// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMETRICSAPPCLOSEEVENT_H
#define IMMETRICSAPPCLOSEEVENT_H

@class NSString;


#import "IMAMSMetricsEvent.h"

@interface IMMetricsAppCloseEvent : IMAMSMetricsEvent

@property (retain, nonatomic) NSString *exitURL;


-(id)initWithReason:(NSInteger)arg0 ;
-(void)setExitTypeWithSuspendReason:(NSInteger)arg0 ;


@end


#endif