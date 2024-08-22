// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMEVENTTIMEELAPSINGIMPLEMENTOR_H
#define BMEVENTTIMEELAPSINGIMPLEMENTOR_H

@class NSDateInterval, NSString;
@protocol BMEventTimeElapsing;


#import "BMEventBase.h"

@interface BMEventTimeElapsingImplementor : BMEventBase <BMEventTimeElapsing>



@property (nonatomic) CGFloat absoluteTimestamp; // ivar: absoluteTimestamp
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: duration
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif