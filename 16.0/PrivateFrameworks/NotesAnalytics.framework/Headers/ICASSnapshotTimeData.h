// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSNAPSHOTTIMEDATA_H
#define ICASSNAPSHOTTIMEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSnapshotTimeData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *lastTimeOfAttemptedSchedule; // ivar: _lastTimeOfAttemptedSchedule


+(id)dataName;
-(id)initWithLastTimeOfAttemptedSchedule:(id)arg0 ;
-(id)toDict;


@end


#endif