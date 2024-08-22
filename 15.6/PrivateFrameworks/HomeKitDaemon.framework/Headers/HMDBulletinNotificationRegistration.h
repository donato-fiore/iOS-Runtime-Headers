// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBULLETINNOTIFICATIONREGISTRATION_H
#define HMDBULLETINNOTIFICATIONREGISTRATION_H

@class HMFObject, NSSet, NSPredicate, NSUUID;
@protocol NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding;



@interface HMDBulletinNotificationRegistration : HMFObject <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>



@property (readonly, copy) NSSet *conditions; // ivar: _conditions
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSUUID *remoteDeviceIdentifier; // ivar: _remoteDeviceIdentifier


+(BOOL)doesTypeMatch:(id)arg0 against:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRemoteDeviceIdentifier:(id)arg0 conditions:(id)arg1 ;
-(id)serializedRegistrationForRemoteMessage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif