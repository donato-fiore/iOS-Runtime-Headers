// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCEXPONENTIALBACKOFF_H
#define ASCEXPONENTIALBACKOFF_H

@class JEUnfairLock, NSString;
@protocol ASCBackoff;

#import <Foundation/Foundation.h>


@interface ASCExponentialBackoff : NSObject <ASCBackoff>



@property (readonly, nonatomic) JEUnfairLock *attemptLock; // ivar: _attemptLock
@property (nonatomic) NSInteger attemptsMade; // ivar: _attemptsMade
@property (readonly, nonatomic) CGFloat baseSleepTimeInterval; // ivar: _baseSleepTimeInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maxSleepTimeInterval; // ivar: _maxSleepTimeInterval
@property (readonly) Class superclass;


-(CGFloat)nextSleepTimeInterval;
-(id)initWithBaseSleepTimeInterval:(CGFloat)arg0 maxSleepTimeInterval:(CGFloat)arg1 ;
-(void)reset;


@end


#endif