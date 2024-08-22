// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSCREENLOCKSTATEDUETEVENT_H
#define ATXSCREENLOCKSTATEDUETEVENT_H

@protocol NSSecureCoding;


#import "ATXDuetEvent.h"

@interface ATXScreenLockStateDuetEvent : ATXDuetEvent <NSSecureCoding>



@property (readonly, nonatomic) NSInteger screenLockState; // ivar: _screenLockState


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)description;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(id)initWithScreenLockState:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif