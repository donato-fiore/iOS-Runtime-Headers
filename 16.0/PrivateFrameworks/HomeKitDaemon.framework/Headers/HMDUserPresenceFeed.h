// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUSERPRESENCEFEED_H
#define HMDUSERPRESENCEFEED_H

@class HMFObject, HMUserPresenceAuthorization, HMUserPresenceCompute;


#import "HMDUserPresenceRegion.h"
#import "HMDUserPresenceUpdateReason.h"
#import "HMDUser.h"

@interface HMDUserPresenceFeed : HMFObject

@property (readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // ivar: _presenceAuthStatus
@property (readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // ivar: _presenceComputeStatus
@property (readonly, nonatomic) HMDUserPresenceRegion *presenceRegion; // ivar: _presenceRegion
@property (readonly, nonatomic) HMDUserPresenceUpdateReason *reason; // ivar: _reason
@property (readonly, weak, nonatomic) HMDUser *user; // ivar: _user


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithUser:(id)arg0 presenceAuthStatus:(id)arg1 presenceComputeStatus:(id)arg2 presenceRegion:(id)arg3 reason:(id)arg4 ;


@end


#endif