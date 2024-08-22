// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUSERPUSHCACHE_H
#define HMDUSERPUSHCACHE_H

@class HMFObject, NSDate;


#import "HMDDevice.h"

@interface HMDUserPushCache : HMFObject

@property (readonly, nonatomic) HMDDevice *device; // ivar: _device
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;


-(id)init;
-(id)initWithDevice:(id)arg0 ;


@end


#endif