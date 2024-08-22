// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOBILECALDAVPRINCIPAL_H
#define MOBILECALDAVPRINCIPAL_H

@class REMDAChangeTrackingHelper, NSString, NSURL, NSMutableSet, AKAppleIDSession, NSMutableDictionary, NSSet, NSDateComponents, NSDictionary, NSNumber;
@protocol CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CalDAVPrincipal, CalDAVAccount, CoreDAVTaskManager;

#import <Foundation/Foundation.h>

#import "MobileCalDAVAccount.h"
#import "CalDAVRefreshContext.h"

@interface MobileCalDAVPrincipal : NSObject <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CalDAVPrincipal>

 {
    REMDAChangeTrackingHelper *_rem_changeTracking;
}


@property (readonly, nonatomic) NSString *APSEnv;
@property (readonly, nonatomic) NSURL *APSSubscriptionURL;
@property (readonly, nonatomic) NSString *APSTopic;
@property (weak, nonatomic) NSObject<CalDAVAccount> *account; // ivar: _account
@property (retain, nonatomic) NSMutableSet *addedCalendars; // ivar: _addedCalendars
@property (nonatomic) BOOL alarmsDirty;
@property (retain, nonatomic) AKAppleIDSession *appleIDSession; // ivar: _appleIDSession
@property (retain, nonatomic) NSString *calendarHomePushKey; // ivar: _calendarHomePushKey
@property (retain, nonatomic) NSString *calendarHomeSyncToken;
@property (retain, nonatomic) NSURL *calendarHomeURL; // ivar: _calendarHomeURL
@property (retain, nonatomic) NSMutableDictionary *calendarUserAddressesPerCalendar; // ivar: _calendarUserAddressesPerCalendar
@property (readonly, nonatomic) NSSet *calendars;
@property (nonatomic) BOOL calendarsAreDirty; // ivar: _calendarsAreDirty
@property (nonatomic) BOOL canCreateCalendars; // ivar: _canCreateCalendars
@property (readonly, nonatomic) MobileCalDAVAccount *daAccount;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *defaultAllDayAlarms;
@property (retain, nonatomic) NSURL *defaultCalendarURL; // ivar: _defaultCalendarURL
@property (retain, nonatomic) NSString *defaultTimedAlarms;
@property (retain, nonatomic) NSMutableSet *deletedCalendarURLs; // ivar: _deletedCalendarURLs
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *dropBoxURL; // ivar: _dropBoxURL
@property (readonly, nonatomic) NSDateComponents *eventFilterEndDate;
@property (readonly, nonatomic) NSDateComponents *eventFilterStartDate;
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *inboxCTag; // ivar: _inboxCTag
@property (retain, nonatomic) NSURL *inboxURL; // ivar: _inboxURL
@property (nonatomic) BOOL isDelegate; // ivar: _isDelegate
@property (nonatomic) BOOL isDirty; // ivar: _isDirty
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) BOOL isEnabledForEvents;
@property (readonly, nonatomic) BOOL isEnabledForTodos;
@property (nonatomic) BOOL isExpandPropertyReportSupported; // ivar: _isExpandPropertyReportSupported
@property (readonly, nonatomic) BOOL isMergeSync;
@property (nonatomic) BOOL isWritable; // ivar: _isWritable
@property (retain, nonatomic) NSURL *legacy_principalURL; // ivar: _legacy_principalURL
@property (retain, nonatomic) NSMutableSet *modifiedCalendars; // ivar: _modifiedCalendars
@property (nonatomic) BOOL needsDefaultAllDayAlarmUpdate;
@property (nonatomic) BOOL needsDefaultTimedAlarmUpdate;
@property (retain, nonatomic) NSString *notificationCollectionCTag; // ivar: _notificationCollectionCTag
@property (retain, nonatomic) NSURL *notificationCollectionURL; // ivar: _notificationCollectionURL
@property (retain, nonatomic) NSString *notificationURLString; // ivar: _notificationURLString
@property (retain, nonatomic) NSURL *outboxURL; // ivar: _outboxURL
@property (retain, nonatomic) NSString *preferredCalendarEmailAddress; // ivar: _preferredCalendarEmailAddress
@property (retain, nonatomic) NSString *preferredCalendarPhoneNumber; // ivar: _preferredCalendarPhoneNumber
@property (retain, nonatomic) NSURL *preferredCalendarUserAddress; // ivar: _preferredCalendarUserAddress
@property (retain, nonatomic) NSSet *preferredCalendarUserAddresses; // ivar: _preferredCalendarUserAddresses
@property (retain, nonatomic) NSString *principalPath; // ivar: _principalPath
@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSDictionary *pushTransports; // ivar: _pushTransports
@property (retain, nonatomic) NSNumber *quotaFreeBytes; // ivar: _quotaFreeBytes
@property (retain, nonatomic) CalDAVRefreshContext *refreshContext; // ivar: _refreshContext
@property (nonatomic) BOOL shouldRefreshPrincipalSearchProperties; // ivar: _shouldRefreshPrincipalSearchProperties
@property (nonatomic) BOOL shouldUpdatePushDelegate; // ivar: _shouldUpdatePushDelegate
@property (readonly, nonatomic) NSDictionary *subCalPropertiesByURL;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *supportedCalendarComponentSets; // ivar: _supportedCalendarComponentSets
@property (nonatomic) BOOL supportsCalendarUserSearch; // ivar: _supportsCalendarUserSearch
@property (readonly, nonatomic) BOOL supportsExtendedCalendarQuery;
@property (nonatomic) BOOL supportsFreebusy; // ivar: _supportsFreebusy
@property (nonatomic) BOOL supportsPush; // ivar: _supportsPush
@property (nonatomic) BOOL supportsSyncToken; // ivar: _supportsSyncToken
@property (readonly, nonatomic) NSObject<CoreDAVTaskManager> *taskManager;
@property (retain, nonatomic) NSString *uid; // ivar: _uid


+(BOOL)compareAddressURL:(id)arg0 localString:(id)arg1 ;
-(BOOL)_userAddressSet:(id)arg0 isEqualToSet:(id)arg1 ;
-(BOOL)calendarUserAddressIsEquivalentToURL:(id)arg0 ;
-(BOOL)clearCalendarChanges;
-(BOOL)handleCertificateError:(id)arg0 ;
-(BOOL)handleTrustChallenge:(id)arg0 ;
-(BOOL)handleTrustChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)hasCalendarUserAddress:(id)arg0 ;
-(BOOL)shouldCompressRequests;
-(BOOL)shouldFailAllTasks;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg0 ;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg0 ;
-(BOOL)shouldUseOpportunisticSockets;
-(BOOL)useSSL;
-(NSInteger)port;
-(NSUInteger)oauthVariant;
-(id)_eventSyncEndDate;
-(id)_startDateFromDaysToSync:(int)arg0 ;
-(id)additionalHeaderValues;
-(id)calendarOfType:(int)arg0 atURL:(id)arg1 withOptions:(id)arg2 ;
-(id)calendarUserAddresses;
-(id)clientToken;
-(id)configuration;
-(id)customConnectionProperties;
-(id)defaultEventCalendarTitle;
-(id)defaultTodoCalendarTitle;
-(id)getAppleIDSession;
-(id)host;
-(id)identityPersist;
-(id)init;
-(id)initWithConfiguration:(id)arg0 principalUID:(id)arg1 account:(id)arg2 ;
-(id)oauth2Token;
-(id)oauthInfoProvider;
-(id)password;
-(id)preferredCalendarUserAddressesForCalendar:(id)arg0 ;
-(id)rem_changeTracking;
-(id)scheme;
-(id)serverComplianceClasses;
-(id)serverRoot;
-(id)user;
-(id)userAgentHeader;
-(struct __CFURLStorageSession *)copyStorageSession;
-(void)clear_rem_changeTracking;
-(void)clientTokenRequestedByServer;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(void)noteHomeSetOnDifferentHost:(id)arg0 ;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(NSInteger)arg0 numUploadedElements:(NSInteger)arg1 ;
-(void)noteTimeSpentInNetworking:(CGFloat)arg0 ;
-(void)prepareCalendarsForSyncWithCompletionBlock:(id)arg0 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)arg0 ;
-(void)removeCalendar:(id)arg0 ;
-(void)removecalendarWithURL:(id)arg0 ;
-(void)webLoginRequestedAtURL:(id)arg0 reasonString:(id)arg1 inQueue:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif