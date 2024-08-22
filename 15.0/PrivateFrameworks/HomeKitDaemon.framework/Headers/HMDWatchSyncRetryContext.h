// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDWATCHSYNCRETRYCONTEXT_H
#define HMDWATCHSYNCRETRYCONTEXT_H

@class HMFObject, NSString;
@protocol NSCopying;


#import "HMDWatchSync.h"

@interface HMDWatchSyncRetryContext : HMFObject <NSCopying>



@property (readonly) CGFloat initialRetryInterval; // ivar: _initialRetryInterval
@property (readonly) NSInteger maximumRetryAttempts; // ivar: _maximumRetryAttempts
@property (readonly) NSInteger retryAttempt; // ivar: _retryAttempt
@property (readonly) CGFloat retryInterval;
@property (readonly, copy) NSString *watchIdentifier; // ivar: _watchIdentifier
@property (readonly, copy) HMDWatchSync *watchSync; // ivar: _watchSync


+(id)createWithWatchIdentifier:(id)arg0 watchSync:(id)arg1 retryAttempt:(NSInteger)arg2 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithWatchIdentifier:(id)arg0 watchSync:(id)arg1 retryAttempt:(NSInteger)arg2 initialRetryInterval:(CGFloat)arg3 maximumRetryAttempts:(NSInteger)arg4 ;


@end


#endif