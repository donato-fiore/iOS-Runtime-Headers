// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPROCESSEXITINFOLOGEVENT_H
#define HMDPROCESSEXITINFOLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDProcessExitInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *exitReason; // ivar: _exitReason
@property (readonly, copy, nonatomic) NSString *exitType; // ivar: _exitType


-(id)eventName;
-(id)initWithExitType:(id)arg0 reason:(id)arg1 ;
-(id)serializedEvent;


@end


#endif