// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADACTIVITYSCHEDULINGRECORD_H
#define MADACTIVITYSCHEDULINGRECORD_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface MADActivitySchedulingRecord : NSObject

@property (nonatomic) NSUInteger activityID; // ivar: _activityID
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) int exitStatus; // ivar: _exitStatus
@property (nonatomic) NSDate *startTime; // ivar: _startTime


-(id)description;


@end


#endif