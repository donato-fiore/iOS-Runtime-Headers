// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMLOGEVENT_H
#define HMMLOGEVENT_H

@class NSDate, NSError;

#import <Foundation/Foundation.h>


@interface HMMLogEvent : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly) CGFloat durationInMilliseconds;
@property (copy) NSDate *endDate; // ivar: _endDate
@property (nonatomic) NSUInteger endTimeMilliseconds; // ivar: _endTimeMilliseconds
@property (copy) NSError *error; // ivar: _error
@property (copy) NSDate *startDate; // ivar: _startDate
@property (readonly) NSUInteger startTimeMilliseconds; // ivar: _startTimeMilliseconds
@property (nonatomic, getter=isSubmitted) BOOL submitted; // ivar: _submitted
@property (readonly) NSUInteger tickBasedDurationInMilliseconds;


+(id)alloc;
-(BOOL)shouldSubmit;
-(id)init;
-(void)markEndTime;
-(void)submitAtDate:(id)arg0 ;


@end


#endif