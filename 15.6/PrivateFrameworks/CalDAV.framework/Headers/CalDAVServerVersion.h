// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVSERVERVERSION_H
#define CALDAVSERVERVERSION_H

@class NSSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CalDAVServerVersion : NSObject <NSCopying>



@property (nonatomic) BOOL alwaysSupportsFreebusyOnOutbox; // ivar: _alwaysSupportsFreebusyOnOutbox
@property (retain, nonatomic) NSSet *complianceClasses; // ivar: _complianceClasses
@property (nonatomic) BOOL expandPropertyReportIsUnreliable; // ivar: _expandPropertyReportIsUnreliable
@property (readonly, nonatomic) BOOL requiresOpeningAttachmentAsLink;
@property (copy, nonatomic) NSString *serverHeader; // ivar: _serverHeader
@property (readonly, nonatomic) BOOL shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
@property (copy, nonatomic) NSString *supportedCalendarComponentSets; // ivar: _supportedCalendarComponentSets
@property (nonatomic) BOOL supportsAutoSchedule; // ivar: _supportsAutoSchedule
@property (nonatomic) BOOL supportsCalendarAudit; // ivar: _supportsCalendarAudit
@property (nonatomic) BOOL supportsCalendarHomeSync; // ivar: _supportsCalendarHomeSync
@property (nonatomic) BOOL supportsCalendarNoTimezone; // ivar: _supportsCalendarNoTimezone
@property (nonatomic) BOOL supportsCalendarProxy; // ivar: _supportsCalendarProxy
@property (nonatomic) BOOL supportsCalendarRecurrenceSplit; // ivar: _supportsCalendarRecurrenceSplit
@property (nonatomic) BOOL supportsCheckForValidEmail; // ivar: _supportsCheckForValidEmail
@property (nonatomic) BOOL supportsChecksumming; // ivar: _supportsChecksumming
@property (nonatomic) BOOL supportsExtendedCalendarQuery; // ivar: _supportsExtendedCalendarQuery
@property (nonatomic) BOOL supportsInboxAvailability; // ivar: _supportsInboxAvailability
@property (nonatomic) BOOL supportsLikenessPropagation; // ivar: _supportsLikenessPropagation
@property (nonatomic) BOOL supportsManagedAttachments; // ivar: _supportsManagedAttachments
@property (nonatomic) BOOL supportsManagedSubscriptionCalendars; // ivar: _supportsManagedSubscriptionCalendars
@property (nonatomic) BOOL supportsParticipantRoles; // ivar: _supportsParticipantRoles
@property (nonatomic) BOOL supportsPrincipalPropertySearch; // ivar: _supportsPrincipalPropertySearch
@property (nonatomic) BOOL supportsPrivateComments; // ivar: _supportsPrivateComments
@property (nonatomic) BOOL supportsPrivateEvents; // ivar: _supportsPrivateEvents
@property (nonatomic) BOOL supportsRequestCompression; // ivar: _supportsRequestCompression
@property (nonatomic) BOOL supportsSharing; // ivar: _supportsSharing
@property (nonatomic) BOOL supportsSharingNoScheduling; // ivar: _supportsSharingNoScheduling
@property (nonatomic) BOOL supportsSubscriptionCalendars; // ivar: _supportsSubscriptionCalendars
@property (nonatomic) BOOL supportsSubscriptionMirroring; // ivar: _supportsSubscriptionMirroring
@property (nonatomic) BOOL supportsTelephone; // ivar: _supportsTelephone
@property (nonatomic) BOOL supportsTimeRangeFilter; // ivar: _supportsTimeRangeFilter
@property (nonatomic) BOOL supportsTimeRangeFilterOnInbox; // ivar: _supportsTimeRangeFilterOnInbox
@property (nonatomic) BOOL supportsTimeRangeFilterWithoutEndDate; // ivar: _supportsTimeRangeFilterWithoutEndDate
@property (readonly, nonatomic) NSString *type;
@property (nonatomic) CGFloat version; // ivar: _version


+(id)_prototypeMatchingServerHeaders:(id)arg0 ;
+(id)versionWithHTTPHeaders:(id)arg0 ;
+(id)versionWithPropertyValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_additionalFlagKeys;
-(id)_allFlagKeys;
-(id)_propertiesToComplianceClasses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)propertyValue;
-(void)_setPropertiesFromComplianceClasses:(id)arg0 ;


@end


#endif