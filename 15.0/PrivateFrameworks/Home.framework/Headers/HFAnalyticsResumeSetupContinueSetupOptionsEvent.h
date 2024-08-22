// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFANALYTICSRESUMESETUPCONTINUESETUPOPTIONSEVENT_H
#define HFANALYTICSRESUMESETUPCONTINUESETUPOPTIONSEVENT_H

@class NSString, NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsResumeSetupContinueSetupOptionsEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *accessoryType; // ivar: _accessoryType
@property (retain, nonatomic) NSNumber *resumeSetupOption; // ivar: _resumeSetupOption


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif