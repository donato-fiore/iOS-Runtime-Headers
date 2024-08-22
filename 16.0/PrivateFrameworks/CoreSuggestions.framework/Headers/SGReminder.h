// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGREMINDER_H
#define SGREMINDER_H

@class NSString, NSDate, NSDateComponents, NSURL;
@protocol NSSecureCoding;


#import "SGObject.h"
#import "SGLocation.h"

@interface SGReminder : SGObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSDateComponents *dueDateComponents; // ivar: _dueDateComponents
@property (readonly, nonatomic) SGLocation *dueLocation; // ivar: _dueLocation
@property (readonly, nonatomic) unsigned char dueLocationTrigger; // ivar: _dueLocationTrigger
@property (readonly, nonatomic) unsigned char dueLocationType; // ivar: _dueLocationType
@property (readonly, nonatomic) NSString *opaqueKey; // ivar: _opaqueKey
@property (readonly, nonatomic) unsigned char reminderStatus; // ivar: _reminderStatus
@property (readonly, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *uniqueKey; // ivar: _uniqueKey


+(BOOL)supportsSecureCoding;
+(id)describeReminderDueLocationTrigger:(unsigned char)arg0 ;
+(id)describeReminderDueLocationType:(unsigned char)arg0 ;
+(id)describeReminderStatus:(unsigned char)arg0 ;
-(BOOL)isAllDay;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReminder:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordId:(id)arg0 origin:(id)arg1 title:(id)arg2 dueDateComponents:(id)arg3 dueLocationType:(unsigned char)arg4 dueLocation:(id)arg5 dueLocationTrigger:(unsigned char)arg6 sourceURL:(id)arg7 reminderStatus:(unsigned char)arg8 opaqueKey:(id)arg9 uniqueKey:(id)arg10 contactIdentifier:(id)arg11 creationDate:(id)arg12 ;
-(id)loggingIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif