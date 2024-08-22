// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEPRESENCEREMOTE_H
#define HMDHOMEPRESENCEREMOTE_H

@class HMFObject, NSDictionary;
@protocol HMDHomePresenceCheck;



@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>



@property (readonly, nonatomic) NSDictionary *userPresenceMap; // ivar: _userPresenceMap


-(BOOL)areUsersAtHome:(id)arg0 ;
-(BOOL)areUsersNotAtHome:(id)arg0 ;
-(BOOL)isAnyUserAtHome;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNoUserAtHome;
-(BOOL)isUserAtHome:(id)arg0 ;
-(BOOL)isUserNotAtHome:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPresenceByPairingIdentity:(id)arg0 ;
-(id)initWithPresenceByUserId:(id)arg0 ;
-(id)regionForUser:(id)arg0 ;


@end


#endif