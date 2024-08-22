// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSTATEMACHINEPENDINGEVENT_H
#define HKSTATEMACHINEPENDINGEVENT_H

@class NSDate, NSError;

#import <Foundation/Foundation.h>


@interface HKStateMachinePendingEvent : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSInteger event; // ivar: _event




@end


#endif