// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEPRESENCE_H
#define HMDHOMEPRESENCE_H

@class HMFObject, NSArray, NSString, NSDictionary;
@protocol HMFLogging, HMDHomePresenceCheck;


#import "HMDHome.h"
#import "HMDDevice.h"

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresenceCheck>



@property (readonly, nonatomic) NSArray *authorizedUsers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPresenceRegionForAllUsers;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) HMDDevice *lastUpdateByDevice; // ivar: _lastUpdateByDevice
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *userPresenceMap; // ivar: _userPresenceMap


+(id)logCategory;
-(BOOL)areUsersAtHome:(id)arg0 ;
-(BOOL)areUsersNotAtHome:(id)arg0 ;
-(BOOL)isAnyUserAtHome;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNoUserAtHome;
-(BOOL)isPresenceRegionKnownForUser:(id)arg0 ;
-(BOOL)isUserAtHome:(id)arg0 ;
-(BOOL)isUserNotAtHome:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithHome:(id)arg0 userPresenceMap:(id)arg1 lastUpdateByDevice:(id)arg2 ;
-(id)logIdentifier;
-(id)serializedIdentifierDictionary;
-(id)serializedUUIDDictionary;


@end


#endif