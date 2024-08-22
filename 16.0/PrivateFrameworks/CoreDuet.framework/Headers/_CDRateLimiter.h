// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDRATELIMITER_H
#define _CDRATELIMITER_H

@class NSDate, NSString;
@protocol _CDRateLimiting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDRateLimiter : NSObject <_CDRateLimiting>

 {
    NSDate *_lastRecorded;
    NSInteger _balance;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly) NSInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat period; // ivar: _period
@property (readonly) Class superclass;


+(id)sharedRateLimiter;
-(BOOL)credit;
-(BOOL)debited;
-(id)init;
-(id)initWithCount:(NSInteger)arg0 perPeriod:(CGFloat)arg1 ;
-(void)recordTimeAndRefillIfNeeded;
-(void)resetRateLimitWithTimeStamp:(id)arg0 ;


@end


#endif