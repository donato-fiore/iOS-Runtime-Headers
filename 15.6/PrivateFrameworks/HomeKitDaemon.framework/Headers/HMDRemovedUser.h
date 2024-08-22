// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOVEDUSER_H
#define HMDREMOVEDUSER_H

@class HMFObject, NSDate;
@protocol NSSecureCoding;


#import "HMDUser.h"

@interface HMDRemovedUser : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (getter=isRemovalInProgress) BOOL removalInProgress; // ivar: _removalInProgress
@property (readonly, nonatomic) HMDUser *user; // ivar: _user


+(BOOL)supportsSecureCoding;
+(id)removedUserWithUser:(id)arg0 ;
-(BOOL)isEqualToUser:(id)arg0 ;
-(BOOL)isEqualToUserID:(id)arg0 ;
-(BOOL)isExpired;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 expiration:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif