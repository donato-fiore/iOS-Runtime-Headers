// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSULOGHELPER_H
#define TSULOGHELPER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TSULogHelper : NSObject

@property (retain) NSDate *lastThrottleCheck; // ivar: _lastThrottleCheck
@property NSUInteger throttleCount; // ivar: _throttleCount


+(id)sharedInstance;
-(BOOL)incrementThrottleCountAndCheckThottleMax:(NSUInteger)arg0 ;


@end


#endif