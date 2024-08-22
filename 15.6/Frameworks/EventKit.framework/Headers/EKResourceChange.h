// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKRESOURCECHANGE_H
#define EKRESOURCECHANGE_H

@class NSURL, NSString, NSNumber, NSDate;
@protocol EKIdentityProtocol;


#import "EKObject.h"
#import "EKCalendar.h"
#import "EKCalendarItem.h"

@interface EKResourceChange : EKObject <EKIdentityProtocol>



@property (readonly, nonatomic) BOOL alerted;
@property (readonly, retain, nonatomic) EKCalendar *calendar;
@property (readonly, retain, nonatomic) EKCalendarItem *calendarItem;
@property (readonly, nonatomic) unsigned int changeType;
@property (readonly, copy, nonatomic) NSURL *changedByAddress;
@property (readonly, copy, nonatomic) NSString *changedByDisplayName;
@property (readonly, copy, nonatomic) NSString *changedByFirstName;
@property (readonly, copy, nonatomic) NSString *changedByLastName;
@property (readonly, nonatomic) NSNumber *createCount;
@property (readonly, nonatomic) BOOL dateChanged;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *deleteCount;
@property (readonly, nonatomic) NSString *deletedTitle;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL locationChanged;
@property (readonly, nonatomic) unsigned int publicStatus;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL timeChanged;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL titleChanged;
@property (readonly, nonatomic) NSNumber *updateCount;


+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipWeakKeys;
-(BOOL)_propertyWithFlagDidChange:(unsigned int)arg0 ;
-(id)URL;
-(id)emailAddress;
-(id)firstName;
-(id)lastName;
-(id)name;
-(id)notification;
-(id)phoneNumber;
-(unsigned int)changedProperties;
-(void)clearAlertedStatus;


@end


#endif