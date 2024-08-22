// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NADECAYINGTIMER_H
#define NADECAYINGTIMER_H

@class NSDate, NSTimer;

#import <Foundation/Foundation.h>


@interface NADecayingTimer : NSObject

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSUInteger minimumUnit; // ivar: _minimumUnit
@property (readonly, nonatomic) NSDate *referenceDate; // ivar: _referenceDate
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


+(id)scheduledTimerWithReferenceDate:(id)arg0 minimumUnit:(NSUInteger)arg1 block:(id)arg2 ;
-(NSUInteger)_mostSignificantUnitForDateComponents:(id)arg0 ;
-(id)_nextFireDate;
-(id)initWithReferenceDate:(id)arg0 minimumUnit:(NSUInteger)arg1 block:(id)arg2 ;
-(void)_scheduleNextTimer;
-(void)dealloc;
-(void)invalidate;


@end


#endif