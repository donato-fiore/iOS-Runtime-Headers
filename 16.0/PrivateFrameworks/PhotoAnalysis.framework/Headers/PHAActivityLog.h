// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHAACTIVITYLOG_H
#define PHAACTIVITYLOG_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PHAActivityLog : NSObject {
    CGFloat _absoluteStartTime;
    CGFloat _absoluteEndTime;
    NSUInteger _graphRequestInterruptionCount;
}


@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSUInteger status; // ivar: _status


-(id)description;
-(id)init;
-(void)markProcessingInterruptedByGraphRequest;
-(void)markProcessingStopped:(NSUInteger)arg0 ;


@end


#endif