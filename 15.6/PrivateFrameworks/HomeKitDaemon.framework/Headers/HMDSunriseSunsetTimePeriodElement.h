// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSUNRISESUNSETTIMEPERIODELEMENT_H
#define HMDSUNRISESUNSETTIMEPERIODELEMENT_H

@class NSDateComponents, NSString;
@protocol NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding;


#import "HMDTimePeriodElement.h"

@interface HMDSunriseSunsetTimePeriodElement : HMDTimePeriodElement <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>



@property (readonly, copy) NSDateComponents *offset; // ivar: _offset
@property (readonly, copy) NSString *significantEvent; // ivar: _significantEvent


+(BOOL)supportsSecureCoding;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSignificantEvent:(id)arg0 offset:(id)arg1 ;
-(id)serializedRegistrationForRemoteMessage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif