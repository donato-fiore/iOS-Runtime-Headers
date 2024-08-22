// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USDEVICEACTIVITYSCHEDULE_H
#define USDEVICEACTIVITYSCHEDULE_H

@class NSDateComponents, NSDateInterval;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USDeviceActivitySchedule : NSObject <NSSecureCoding>



@property (readonly, copy) NSDateComponents *intervalEnd; // ivar: _intervalEnd
@property (readonly, copy) NSDateComponents *intervalStart; // ivar: _intervalStart
@property (readonly, copy) NSDateInterval *nextInterval;
@property (readonly) BOOL repeats; // ivar: _repeats
@property (readonly, copy) NSDateComponents *warningTime; // ivar: _warningTime


+(BOOL)supportsSecureCoding;
+(id)nextIntervalForStartComponents:(id)arg0 endComponents:(id)arg1 ;
+(id)nextWarningDateForComponents:(id)arg0 referenceDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntervalStart:(id)arg0 intervalEnd:(id)arg1 repeats:(BOOL)arg2 warningTime:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif