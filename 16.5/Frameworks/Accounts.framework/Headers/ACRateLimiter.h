// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACRATELIMITER_H
#define ACRATELIMITER_H

@class NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACRateLimiter : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *instanceQueue; // ivar: _instanceQueue
@property BOOL isVacuumInProgress; // ivar: _isVacuumInProgress
@property (retain) NSMutableDictionary *keyToSimpleRateLimiter; // ivar: _keyToSimpleRateLimiter
@property (readonly) NSUInteger maximum; // ivar: _maximum
@property (retain) NSDate *nextVacuumDate; // ivar: _nextVacuumDate
@property (readonly) CGFloat timeInterval; // ivar: _timeInterval
@property (readonly) NSObject<OS_dispatch_queue> *vacuumQueue; // ivar: _vacuumQueue
@property (readonly) CGFloat vacuumTimeInterval; // ivar: _vacuumTimeInterval


-(BOOL)_vacuumQueue_vacuumKey:(id)arg0 ;
-(BOOL)reservePerformActionForKey:(id)arg0 ;
-(id)initWithMaximum:(NSUInteger)arg0 inTimeInterval:(CGFloat)arg1 ;
-(id)simpleRateLimiterForKey:(id)arg0 ;
-(void)vacuumIfNeeded;


@end


#endif