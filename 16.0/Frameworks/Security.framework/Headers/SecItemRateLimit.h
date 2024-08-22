// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SECITEMRATELIMIT_H
#define SECITEMRATELIMIT_H

@class NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SecItemRateLimit : NSObject {
    BOOL _forceEnabled;
    NSObject<OS_dispatch_queue> *_dataQueue;
}


@property (readonly, nonatomic) CGFloat limitMultiplier; // ivar: _limitMultiplier
@property (readonly, nonatomic) NSDate *roBucket; // ivar: _roBucket
@property (readonly, nonatomic) int roCapacity; // ivar: _roCapacity
@property (readonly, nonatomic) CGFloat roRate; // ivar: _roRate
@property (readonly, nonatomic) NSDate *rwBucket; // ivar: _rwBucket
@property (readonly, nonatomic) int rwCapacity; // ivar: _rwCapacity
@property (readonly, nonatomic) CGFloat rwRate; // ivar: _rwRate


+(id)getStaticRateLimit;
+(id)instance;
+(void)resetStaticRateLimit;
-(BOOL)consumeTokenFromBucket:(BOOL)arg0 ;
-(BOOL)isEnabled;
-(BOOL)isModifyingAPICallWithinLimits;
-(BOOL)isReadOnlyAPICallWithinLimits;
-(BOOL)shouldCountAPICalls;
-(id)init;
-(void)forceEnabled:(BOOL)arg0 ;


@end


#endif