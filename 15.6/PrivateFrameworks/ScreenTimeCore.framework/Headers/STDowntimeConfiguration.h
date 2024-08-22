// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STDOWNTIMECONFIGURATION_H
#define STDOWNTIMECONFIGURATION_H

@class NSCalendar, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STDowntimeConfiguration : NSObject <NSCopying>



@property (readonly, copy) NSCalendar *calendar; // ivar: _calendar
@property (readonly, copy) NSDate *currentDate; // ivar: _currentDate
@property (readonly) NSInteger currentState; // ivar: _currentState
@property (readonly) NSInteger nextState; // ivar: _nextState
@property (readonly, copy) NSDate *nextStateChangeDate; // ivar: _nextStateChangeDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDowntimeState:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCurrentState:(NSInteger)arg0 currentDate:(id)arg1 nextState:(NSInteger)arg2 nextStateChangeDate:(id)arg3 calendar:(id)arg4 ;


@end


#endif