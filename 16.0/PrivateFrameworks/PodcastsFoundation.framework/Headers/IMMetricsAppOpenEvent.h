// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMETRICSAPPOPENEVENT_H
#define IMMETRICSAPPOPENEVENT_H

@class NSString;


#import "IMAMSMetricsEvent.h"

@interface IMMetricsAppOpenEvent : IMAMSMetricsEvent

@property (retain, nonatomic) NSString *referringAppName;
@property (retain, nonatomic) NSString *referringURL;


-(id)initWithReason:(NSInteger)arg0 ;
-(void)setEnterTypeWithLaunchReason:(NSInteger)arg0 ;


@end


#endif