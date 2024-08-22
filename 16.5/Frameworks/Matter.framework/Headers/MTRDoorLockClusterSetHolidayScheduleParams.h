// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDOORLOCKCLUSTERSETHOLIDAYSCHEDULEPARAMS_H
#define MTRDOORLOCKCLUSTERSETHOLIDAYSCHEDULEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterSetHolidayScheduleParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *holidayIndex; // ivar: _holidayIndex
@property (copy, nonatomic) NSNumber *localEndTime; // ivar: _localEndTime
@property (copy, nonatomic) NSNumber *localStartTime; // ivar: _localStartTime
@property (copy, nonatomic) NSNumber *operatingMode; // ivar: _operatingMode
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif