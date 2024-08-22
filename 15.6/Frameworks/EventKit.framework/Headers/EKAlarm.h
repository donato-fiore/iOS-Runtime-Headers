// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKALARM_H
#define EKALARM_H

@class NSString, NSDate, NSArray, NSURL;
@protocol NSCopying;


#import "EKObject.h"
#import "EKCalendarItem.h"
#import "EKCalendar.h"
#import "EKAlarm.h"
#import "EKStructuredLocation.h"

@interface EKAlarm : EKObject <NSCopying>



@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSDate *absoluteDate;
@property (readonly, nonatomic) EKCalendarItem *calendarItemOwner;
@property (readonly, nonatomic) EKCalendar *calendarOwner;
@property (nonatomic, getter=isDefaultAlarm) BOOL defaultAlarm;
@property (copy, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *externalID;
@property (readonly, nonatomic) BOOL isAbsolute;
@property (nonatomic) BOOL isSnoozed;
@property (retain, nonatomic) EKAlarm *originalAlarm;
@property (readonly, nonatomic) EKObject *owner;
@property (nonatomic) NSInteger proximity;
@property (nonatomic) CGFloat relativeOffset;
@property (copy, nonatomic) NSArray *snoozedAlarms;
@property (copy, nonatomic) NSString *soundName; // ivar: _soundName
@property (copy, nonatomic) EKStructuredLocation *structuredLocation;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) NSURL *url;


+(BOOL)areLocationsAllowed;
+(BOOL)areLocationsAllowedWithAuthorizationStatus:(int)arg0 ;
+(BOOL)areLocationsAvailable;
+(BOOL)areLocationsCurrentlyEnabled;
+(CGFloat)defaultGeofencedReminderRadius;
+(Class)frozenClass;
+(NSInteger)maxPublicProximity;
+(id)alarmWithAbsoluteDate:(id)arg0 ;
+(id)alarmWithRelativeOffset:(CGFloat)arg0 ;
+(id)knownIdentityKeysForComparison;
+(id)knownRelationshipMultiValueKeys;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipWeakKeys;
+(id)knownSingleValueKeysForComparison;
+(int)_currentAuthorizationStatus;
-(BOOL)_reset;
-(BOOL)defaultAlarm;
-(BOOL)isTopographicallyEqualToAlarm:(id)arg0 ;
-(BOOL)validateWithOwner:(id)arg0 error:(*id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(id)acknowledgedDate;
-(id)bookmarkURL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAbsoluteDate:(id)arg0 ;
-(id)initWithRelativeOffset:(CGFloat)arg0 ;
-(void)addSnoozedAlarm:(id)arg0 ;
-(void)rebaseForDetachment;
-(void)removeSnoozedAlarm:(id)arg0 ;
-(void)setAcknowledgedDate:(id)arg0 ;
-(void)setBookmarkURL:(id)arg0 ;


@end


#endif