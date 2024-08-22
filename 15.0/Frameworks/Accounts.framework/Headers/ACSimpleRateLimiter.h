// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACSIMPLERATELIMITER_H
#define ACSIMPLERATELIMITER_H

@class NSLock, NSDate, NSMutableArray;

#import <Foundation/Foundation.h>


@interface ACSimpleRateLimiter : NSObject

@property (retain) NSLock *instanceLock; // ivar: _instanceLock
@property (readonly) NSUInteger maximum; // ivar: _maximum
@property (readonly) NSDate *rateLimitingStartDate;
@property (retain) NSMutableArray *sortedActionDates; // ivar: _sortedActionDates
@property (readonly) CGFloat timeInterval; // ivar: _timeInterval


-(BOOL)isEmptyAfterFlushing;
-(BOOL)reservePerformActionNow;
-(NSUInteger)locked_indexOfFirstAfter:(id)arg0 ;
-(id)initWithMaximum:(NSUInteger)arg0 inTimeInterval:(CGFloat)arg1 ;
-(void)locked_addDate:(id)arg0 ;
-(void)locked_removeDatesBefore:(id)arg0 ;


@end


#endif