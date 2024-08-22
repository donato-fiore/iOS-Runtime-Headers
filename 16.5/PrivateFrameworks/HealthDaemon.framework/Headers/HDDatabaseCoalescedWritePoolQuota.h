// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATABASECOALESCEDWRITEPOOLQUOTA_H
#define HDDATABASECOALESCEDWRITEPOOLQUOTA_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDDatabaseCoalescedWritePoolQuota : NSObject <NSCopying>

 {
    NSInteger _availableQuotaAfterLastWrite;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSInteger availableWriteQuota;
@property (readonly, nonatomic) CGFloat lastWrite; // ivar: _lastWrite
@property (readonly, nonatomic) NSInteger maximumWriteQuota; // ivar: _maximumWriteQuota
@property (readonly, nonatomic) CGFloat minimumWriteInterval; // ivar: _minimumWriteInterval
@property (readonly, nonatomic) CGFloat timeUntilNextAvailableWrite;
@property (readonly, nonatomic) CGFloat writeQuotaRefillInterval; // ivar: _writeQuotaRefillInterval


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAvailableQuota:(NSInteger)arg0 maximumQuota:(NSInteger)arg1 refillInterval:(CGFloat)arg2 minimumWriteInterval:(CGFloat)arg3 lastWrite:(CGFloat)arg4 ;


@end


#endif