// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERPRESENCE_H
#define HMDUSERPRESENCE_H

@class HMFObject, NSDate;
@protocol NSSecureCoding;


#import "HMDUserPresenceRegion.h"
#import "HMDUser.h"

@interface HMDUserPresence : HMFObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isAtHome) BOOL atHome;
@property (readonly, nonatomic, getter=isNotAtHome) BOOL notAtHome;
@property (retain, nonatomic) HMDUserPresenceRegion *presenceRegionStatus; // ivar: _presenceRegionStatus
@property (readonly, nonatomic) NSDate *updateTimestamp; // ivar: _updateTimestamp
@property (readonly, nonatomic) HMDUser *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 presenceRegionStatus:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif