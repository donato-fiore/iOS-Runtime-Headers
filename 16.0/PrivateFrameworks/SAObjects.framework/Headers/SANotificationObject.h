// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SANOTIFICATIONOBJECT_H
#define SANOTIFICATIONOBJECT_H

@class NSString, NSDate, NSNumber;


#import "SADomainObject.h"

@interface SANotificationObject : SADomainObject

@property (copy, nonatomic) NSString *applicationId;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSNumber *dateIsAllDay;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *notificationId;
@property (copy, nonatomic) NSNumber *previewRestricted;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSDate *recencyDate;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *type;


+(id)object;
+(id)objectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif