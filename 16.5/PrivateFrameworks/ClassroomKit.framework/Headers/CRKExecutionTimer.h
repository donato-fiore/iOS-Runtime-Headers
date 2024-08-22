// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKEXECUTIONTIMER_H
#define CRKEXECUTIONTIMER_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface CRKExecutionTimer : NSObject

@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) NSString *timerDescription; // ivar: _timerDescription


+(id)startedTimerWithDescription:(id)arg0 ;
-(id)initWithDescription:(id)arg0 ;
-(id)stop;
-(void)start;


@end


#endif