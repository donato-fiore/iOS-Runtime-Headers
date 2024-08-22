// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPRESENCENOTIFICATIONCONDITION_H
#define HMDPRESENCENOTIFICATIONCONDITION_H

@class NSSet;
@protocol HMDBulletinNotificationRegistrationRemoteCoding;


#import "HMDNotificationCondition.h"

@interface HMDPresenceNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding>



@property (readonly) NSUInteger presenceEventType; // ivar: _presenceEventType
@property (readonly) NSUInteger presenceEventUserType; // ivar: _presenceEventUserType
@property (readonly, copy) NSSet *userUUIDs; // ivar: _userUUIDs


+(BOOL)supportsSecureCoding;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPresenceEventType:(NSUInteger)arg0 presenceEventUserType:(NSUInteger)arg1 userUUIDs:(id)arg2 ;
-(id)serializedRegistrationForRemoteMessage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif