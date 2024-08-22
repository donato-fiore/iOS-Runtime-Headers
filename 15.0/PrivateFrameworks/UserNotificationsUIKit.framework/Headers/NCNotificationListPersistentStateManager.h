// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONLISTPERSISTENTSTATEMANAGER_H
#define NCNOTIFICATIONLISTPERSISTENTSTATEMANAGER_H

@class NSDictionary, NSDateFormatter, NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue, NCNotificationListPersistentStateManagerDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationListPersistentStateManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSDictionary *cachedListRepresentation; // ivar: _cachedListRepresentation
@property (retain, nonatomic) NSDictionary *cachedListRepresentationForThrottledWrite; // ivar: _cachedListRepresentationForThrottledWrite
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (weak, nonatomic) NSObject<NCNotificationListPersistentStateManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isFileWritingThrottled) BOOL fileWritingThrottled; // ivar: _fileWritingThrottled
@property (nonatomic, getter=hasLoadedStoredPersistentState) BOOL loadedStoredPersistentState; // ivar: _loadedStoredPersistentState
@property (nonatomic, getter=hasStoredCurrentDigestMigrationTimeExpired) BOOL storedCurrentDigestMigrationTimeExpired; // ivar: _storedCurrentDigestMigrationTimeExpired
@property (retain, nonatomic) NSMutableDictionary *storedPersistentMigrationTimes; // ivar: _storedPersistentMigrationTimes
@property (retain, nonatomic) NSMutableDictionary *storedPersistentStateRepresentation; // ivar: _storedPersistentStateRepresentation
@property (retain, nonatomic) NSDate *storedPersistentSummaryMigrationTime; // ivar: _storedPersistentSummaryMigrationTime


+(id)_dataDirectoryPath;
+(id)_persistentStateFilePath;
-(BOOL)_doesPersistentStateFileExist;
-(BOOL)_isListRepresentation:(id)arg0 equalToListRepresentation:(id)arg1 ;
-(BOOL)_isMutableListRepresentationEmpty:(id)arg0 ;
-(BOOL)_isRepresentationForGroup:(id)arg0 equalToRepresentationForGroup:(id)arg1 ;
-(BOOL)_isRepresentationForGroupEmpty:(id)arg0 ;
-(BOOL)_isRepresentationForGroups:(id)arg0 equalToRepresentationForGroups:(id)arg1 ;
-(BOOL)_isRepresentationForMigrationTimes:(id)arg0 equalToRepresentationForMigrationTimes:(id)arg1 ;
-(BOOL)_isRepresentationForSection:(id)arg0 equalToRepresentationForSection:(id)arg1 ;
-(BOOL)_isRepresentationForSectionEmpty:(id)arg0 ;
-(BOOL)_isRepresentationForSections:(id)arg0 equalToRepresentationForSections:(id)arg1 ;
-(BOOL)_removeNotificationRequest:(id)arg0 inMutableRepresentationForGroup:(id)arg1 ;
-(BOOL)_removeNotificationRequest:(id)arg0 inMutableRepresentationForSection:(id)arg1 ;
-(NSUInteger)_getSectionTypeAndRemoveNotificationRequest:(id)arg0 inMutableRepresentationForSections:(id)arg1 ;
-(NSUInteger)sectionForStoredNotificationRequest:(id)arg0 ;
-(id)_getStoredMigrationTimeAndClearNotificationRequest:(id)arg0 ;
-(id)_listRepresentationForNotificationList:(id)arg0 sections:(id)arg1 listCache:(id)arg2 migrationScheduler:(id)arg3 listInfo:(id)arg4 detailed:(BOOL)arg5 ;
-(id)_mutableRepresentationForRepresentationForGroup:(id)arg0 ;
-(id)_mutableRepresentationForRepresentationForNotificationRequests:(id)arg0 ;
-(id)_mutableRepresentationForRepresentationForRequestMigrationTimes:(id)arg0 ;
-(id)_mutableRepresentationForRepresentationForSection:(id)arg0 ;
-(id)_mutableRepresentationForRequestMigrationTimesInRepresentationForList:(id)arg0 ;
-(id)_mutableRepresentationForStoredListRepresentation:(id)arg0 ;
-(id)_representationForGroup:(id)arg0 atIndex:(NSUInteger)arg1 detailed:(BOOL)arg2 ;
-(id)_representationForGroupWithSectionIdentifier:(id)arg0 threadIdentifier:(id)arg1 inRepresentationForGroups:(id)arg2 ;
-(id)_representationForGroups:(id)arg0 detailed:(BOOL)arg1 ;
-(id)_representationForListCache:(id)arg0 ;
-(id)_representationForMigrationScheduler:(id)arg0 ;
-(id)_representationForNotificationRequest:(id)arg0 ;
-(id)_representationForNotificationRequests:(id)arg0 detailed:(BOOL)arg1 ;
-(id)_representationForRequestMigrationTimes:(id)arg0 ;
-(id)_representationForSection:(id)arg0 detailed:(BOOL)arg1 ;
-(id)_representationForSections:(id)arg0 detailed:(BOOL)arg1 ;
-(id)_sectionRepresentationOfSectionType:(id)arg0 inRepresentationForSections:(id)arg1 ;
-(id)_summaryMigrationTimeInRepresentationForList:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)stateRepresentationForNotificationList:(id)arg0 sectionLists:(id)arg1 listCache:(id)arg2 migrationScheduler:(id)arg3 listInfo:(id)arg4 detailed:(BOOL)arg5 ;
-(int)_formatVersionForListRepresentation:(id)arg0 ;
-(void)_clearStoredListRepresentationForSectionIdentifier:(id)arg0 ;
-(void)_clearStoredRequestMigrationTimesForSectionIdentifier:(id)arg0 ;
-(void)_clearStoredSectionIdentifier:(id)arg0 inMutableRepresentationForSection:(id)arg1 ;
-(void)_ensureDataDirectoryExists;
-(void)_mergePendingNotificationListRepresentation:(id)arg0 withMutableListRepresentation:(id)arg1 ;
-(void)_mergePendingRequestMigrationTimesRepresentation:(id)arg0 withMutableRepresentationForRequestMigrationTimes:(id)arg1 ;
-(void)_mergeRepresentationForGroup:(id)arg0 withMutableRepresentationForGroup:(id)arg1 ;
-(void)_mergeRepresentationForNotificationRequests:(id)arg0 withMutableRepresentationForNotificationRequests:(id)arg1 ;
-(void)_mergeRepresentationForSection:(id)arg0 withMutableRepresentationForSection:(id)arg1 ;
-(void)_publishOnReadForStoredPersistentStateRepresentation:(id)arg0 ;
-(void)_readPersistentStateFromFile;
-(void)_readPersistentStateFromFileIfNecessaryWithCompletion:(id)arg0 ;
-(void)_scheduleThrottledPersistentStateWrite;
-(void)_writePersistentStateToFileWithRepresentation:(id)arg0 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)updatePersistentStateForNotificationList:(id)arg0 sectionLists:(id)arg1 listCache:(id)arg2 migrationScheduler:(id)arg3 listInfo:(id)arg4 detailed:(BOOL)arg5 ;


@end


#endif