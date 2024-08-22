// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DASTORESYNCSTATUSUPDATER_H
#define DASTORESYNCSTATUSUPDATER_H


#import <Foundation/Foundation.h>


@interface DAStoreSyncStatusUpdater : NSObject



+(BOOL)_isCanceledError:(id)arg0 ;
+(NSUInteger)_accountErrorCodeForNSError:(id)arg0 ;
+(NSUInteger)_codeForLastSyncError:(id)arg0 userInfo:(*id)arg1 ;
+(NSUInteger)_ekAccountErrorFromCoreDAVErrorCode:(int)arg0 ;
+(NSUInteger)_ekAccountErrorFromCoreDAVHTTPStatusCode:(NSInteger)arg0 ;
+(NSUInteger)_ekAccountErrorFromDAErrorCode:(NSInteger)arg0 ;
+(NSUInteger)_ekAccountErrorFromDAValidationErrorCode:(NSUInteger)arg0 ;
+(NSUInteger)_ekAccountErrorFromSubCalErrorCode:(NSInteger)arg0 ;
+(NSUInteger)_ekAccountErrorFromURLError:(id)arg0 ;
+(id)_eventStore;
+(id)_eventStorePurger;
+(id)_mappedAccountErrorFromError:(id)arg0 ;
+(void)_updateStatusForCalendar:(id)arg0 lastSyncStartDate:(id)arg1 lastSyncEndDate:(id)arg2 lastSyncError:(id)arg3 canceled:(BOOL)arg4 ;
+(void)_updateStatusForCalendarWithExternalID:(id)arg0 sourceExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(BOOL)arg5 ;
+(void)_updateStatusForSource:(id)arg0 lastSyncStartDate:(id)arg1 lastSyncEndDate:(id)arg2 lastSyncError:(id)arg3 canceled:(BOOL)arg4 ;
+(void)_updateStatusForStoreWithExternalID:(id)arg0 lastSyncStartDate:(id)arg1 lastSyncEndDate:(id)arg2 lastSyncError:(id)arg3 canceled:(BOOL)arg4 ;
+(void)resetSyncStatusForAllStoresIfNecessary;
+(void)resetSyncStatusIfNecessaryForStoresOfType:(NSUInteger)arg0 ;
+(void)syncEndedForCalendar:(id)arg0 withError:(id)arg1 ;
+(void)syncEndedForCalendarWithExternalID:(id)arg0 sourceExternalID:(id)arg1 withError:(id)arg2 ;
+(void)syncEndedForStoreWithExternalID:(id)arg0 withError:(id)arg1 ;
+(void)syncStartedForCalendar:(id)arg0 ;
+(void)syncStartedForCalendarWithExternalID:(id)arg0 sourceExternalID:(id)arg1 ;
+(void)syncStartedForStoreWithExternalID:(id)arg0 ;


@end


#endif