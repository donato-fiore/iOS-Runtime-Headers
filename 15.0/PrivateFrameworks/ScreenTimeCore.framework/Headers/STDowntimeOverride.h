// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDOWNTIMEOVERRIDE_H
#define STDOWNTIMEOVERRIDE_H

@class NSCalendar, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STDowntimeOverride : NSObject <NSCopying>



@property (readonly, copy) NSCalendar *calendar; // ivar: _calendar
@property (readonly, copy) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSDate *endDate; // ivar: _endDate
@property (readonly) NSInteger state; // ivar: _state
@property (readonly) NSInteger type; // ivar: _type


+(id)overrideWithState:(NSInteger)arg0 creationDate:(id)arg1 calendar:(id)arg2 endDate:(id)arg3 ;
+(id)overrideWithState:(NSInteger)arg0 creationDate:(id)arg1 calendar:(id)arg2 fixedDuration:(id)arg3 ;
-(BOOL)isActiveAtDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDowntimeOverride:(id)arg0 ;
-(BOOL)isExpiredAtDate:(id)arg0 ;
-(NSInteger)modificationBasedOnScheduleChangeAtDate:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithType:(NSInteger)arg0 state:(NSInteger)arg1 creationDate:(id)arg2 calendar:(id)arg3 endDate:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif