// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPERSITEPREFERENCESSQLITESTORE_H
#define WBSPERSITEPREFERENCESSQLITESTORE_H

@class NSURL, WBSSQLiteDatabase, WBSSafariBookmarksSyncAgentProxy;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}


@property (retain, nonatomic) WBSSafariBookmarksSyncAgentProxy *syncProxy; // ivar: _syncProxy


+(BOOL)isPreferenceSyncable:(id)arg0 ;
+(id)defaultDatabaseURL;
+(id)sharedStore;
+(id)staticSyncablePerSiteSettings;
-(BOOL)_isDatabaseOpen;
-(BOOL)_migrateToSchemaVersion:(int)arg0 ;
-(BOOL)_tryToPerformTransactionInBlock:(id)arg0 ;
-(id)_queryListForPreferences:(id)arg0 ;
-(id)init;
-(id)initWithDatabaseURL:(id)arg0 ;
-(int)_createFreshDatabaseSchema;
-(int)_migrateToCurrentSchemaVersionIfNecessary;
-(int)_migrateToSchemaVersion_2;
-(int)_migrateToSchemaVersion_3;
-(int)_migrateToSchemaVersion_4;
-(int)_migrateToSchemaVersion_5;
-(int)_setDatabaseSchemaVersion:(int)arg0 ;
-(void)_closeDatabase;
-(void)_openDatabase;
-(void)_openDatabaseIfNecessary;
-(void)_setDeletedCloudKitSyncData:(id)arg0 forRecordName:(id)arg1 completionHandler:(id)arg2 ;
-(void)_setSyncData:(id)arg0 forPreference:(id)arg1 completionHandler:(id)arg2 ;
-(void)_setSyncData:(id)arg0 forPreference:(id)arg1 domain:(id)arg2 recordName:(id)arg3 completionHandler:(id)arg4 ;
-(void)closeDatabase;
-(void)dealloc;
-(void)getAllDomainsConfiguredForPreference:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllPreferenceInformationForPreference:(id)arg0 completionHandler:(id)arg1 ;
-(void)getDefaultValueForPreference:(id)arg0 completionHandler:(id)arg1 ;
-(void)getDeletedCloudKitSyncDataForRecordName:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSyncDataForPreference:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSyncDataForPreference:(id)arg0 domain:(id)arg1 completionHandler:(id)arg2 ;
-(void)getTimestampAndValueOfPreference:(id)arg0 forDomain:(id)arg1 completionHandler:(id)arg2 ;
-(void)getValueOfPreference:(id)arg0 forDomain:(id)arg1 withTimeoutInterval:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)getValuesOfPreference:(id)arg0 forDomains:(id)arg1 withTimeoutInterval:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)getValuesOfPreferences:(id)arg0 forDomain:(id)arg1 withTimeoutInterval:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)removeAllCloudKitRecordsWithCompletionHandler:(id)arg0 ;
-(void)removeAllPreferenceValuesFromPreference:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllPreferenceValuesFromPreferences:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllSyncData;
-(void)removePreferenceValueWithRecordName:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePreferenceValuesForDomainPrefixes:(id)arg0 fromPreferences:(id)arg1 completionHandler:(id)arg2 ;
-(void)removePreferenceValuesForDomains:(id)arg0 fromPreference:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeTombstoneWithRecordName:(id)arg0 completionHandler:(id)arg1 ;
-(void)savePerSiteSettingCloudKitRecordToDisk:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDefaultValue:(id)arg0 forPreference:(id)arg1 completionHandler:(id)arg2 ;
-(void)setValue:(id)arg0 ofPreference:(id)arg1 forDomain:(id)arg2 completionHandler:(id)arg3 ;
-(void)setValue:(id)arg0 ofPreference:(id)arg1 forDomain:(id)arg2 includeTimestamp:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)setValue:(id)arg0 ofPreference:(id)arg1 forDomain:(id)arg2 withTimestamp:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif