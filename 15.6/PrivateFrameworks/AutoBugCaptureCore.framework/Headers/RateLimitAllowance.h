// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RATELIMITALLOWANCE_H
#define RATELIMITALLOWANCE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface RateLimitAllowance : NSObject

@property (nonatomic) CGFloat allowance; // ivar: _allowance
@property (retain, nonatomic) NSDate *lastCheckedAt; // ivar: _lastCheckedAt




@end


#endif