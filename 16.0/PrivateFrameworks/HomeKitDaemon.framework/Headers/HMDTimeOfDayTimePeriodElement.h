// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDTIMEOFDAYTIMEPERIODELEMENT_H
#define HMDTIMEOFDAYTIMEPERIODELEMENT_H

@protocol NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding;


#import "HMDTimePeriodElement.h"

@interface HMDTimeOfDayTimePeriodElement : HMDTimePeriodElement <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>



@property (readonly) NSUInteger hour; // ivar: _hour
@property (readonly) NSUInteger minute; // ivar: _minute


+(BOOL)supportsSecureCoding;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithHour:(NSUInteger)arg0 minute:(NSUInteger)arg1 ;
-(id)serializedRegistrationForRemoteMessage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif