// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPROCESSEXITINFOLOGEVENT_H
#define HMDPROCESSEXITINFOLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDProcessExitInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSString *exitReason; // ivar: _exitReason
@property (readonly, copy, nonatomic) NSString *exitType; // ivar: _exitType
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithExitType:(id)arg0 reason:(id)arg1 ;


@end


#endif