// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFANALYTICSRESUMESETUPEXITOPTIONSEVENT_H
#define HFANALYTICSRESUMESETUPEXITOPTIONSEVENT_H

@class NSString, NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsResumeSetupExitOptionsEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *accessoryType; // ivar: _accessoryType
@property (retain, nonatomic) NSNumber *resumeSetupOption; // ivar: _resumeSetupOption


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif