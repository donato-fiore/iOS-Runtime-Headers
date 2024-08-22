// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTIMEPERIODNOTIFICATIONCONDITION_H
#define HMDTIMEPERIODNOTIFICATIONCONDITION_H

@protocol HMDBulletinNotificationRegistrationRemoteCoding;


#import "HMDNotificationCondition.h"
#import "HMDTimePeriodElement.h"

@interface HMDTimePeriodNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding>



@property (readonly) HMDTimePeriodElement *endElement; // ivar: _endElement
@property (readonly) HMDTimePeriodElement *startElement; // ivar: _startElement


+(BOOL)supportsSecureCoding;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithStartElement:(id)arg0 endElement:(id)arg1 ;
-(id)serializedRegistrationForRemoteMessage;
-(id)timePeriodElementFromDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif