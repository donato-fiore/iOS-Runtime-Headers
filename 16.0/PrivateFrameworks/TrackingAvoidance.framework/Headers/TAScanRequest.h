// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TASCANREQUEST_H
#define TASCANREQUEST_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TAScanRequestSettings.h"

@interface TAScanRequest : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger interVisitScanCount; // ivar: _interVisitScanCount
@property (retain, nonatomic) NSDate *lastScanRequestedDate; // ivar: _lastScanRequestedDate
@property (readonly, nonatomic) NSDate *scheduledScanRequest; // ivar: _scheduledScanRequest
@property (readonly, nonatomic) TAScanRequestSettings *settings; // ivar: _settings


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldScanOnAdvertisement:(id)arg0 withDeviceRecord:(id)arg1 ;
-(id)evaluateInterVisitAfterVisitExit:(id)arg0 displayEvents:(id)arg1 advertisements:(id)arg2 deviceRecord:(id)arg3 clock:(id)arg4 ;
-(id)evaluateVisitEntry:(id)arg0 clock:(id)arg1 ;
-(id)evictScheduledInterVisitScanWithClock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)scheduleInterVisitScanForAdvertisement:(id)arg0 deviceRecord:(id)arg1 clock:(id)arg2 ;


@end


#endif