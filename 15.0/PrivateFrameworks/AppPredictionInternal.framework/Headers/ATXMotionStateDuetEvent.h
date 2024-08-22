// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMOTIONSTATEDUETEVENT_H
#define ATXMOTIONSTATEDUETEVENT_H



#import "ATXDuetEvent.h"

@interface ATXMotionStateDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSInteger motionState; // ivar: _motionState


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)description;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(id)initWithMotionState:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif