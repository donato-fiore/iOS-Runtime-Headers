// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPERSITEPREFERENCESSQLITESTORE_H
#define WBSPERSITEPREFERENCESSQLITESTORE_H

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}




+(id)sharedStore;
-(BOOL)_isDatabaseOpen;
-(BOOL)_migrateToSchemaVersion:(int)arg0 ;
-(BOOL)_tryToPerformTransactionInBlock:(id)arg0 ;
-(id)_queryListForPreferences:(id)arg0 ;
-(id)init;
-(id)initWithDatabaseURL:(id)arg0 ;
-(int)_createFreshDatabaseSchema;
-(int)_migrateToCurrentSchemaVersionIfNecessary;
-(int)_migrateToSchemaVersion_2;
-(int)_setDatabaseSchemaVersion:(int)arg0 ;
-(void)_closeDatabase;
-(void)_openDatabase;
-(void)_openDatabaseIfNecessary;
-(void)closeDatabase;
-(void)dealloc;
-(void)getAllDomainsConfiguredForPreference:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getAllPreferenceInformationForPreference:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getDefaultValueForPreference:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getTimestampAndValueOfPreference:(NSInteger)arg0 forDomain:(id)arg1 completionHandler:(id)arg2 ;
-(void)getValueOfPreference:(NSInteger)arg0 forDomain:(id)arg1 withTimeoutInterval:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)getValuesOfPreference:(NSInteger)arg0 forDomains:(id)arg1 withTimeoutInterval:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)getValuesOfPreferences:(id)arg0 forDomain:(id)arg1 withTimeoutInterval:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)removeAllPreferenceValuesFromPreference:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)removeAllPreferenceValuesFromPreferences:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePreferenceValuesForDomainPrefixes:(id)arg0 fromPreferences:(id)arg1 completionHandler:(id)arg2 ;
-(void)removePreferenceValuesForDomains:(id)arg0 fromPreference:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)setDefaultValue:(id)arg0 forPreference:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)setValue:(id)arg0 ofPreference:(NSInteger)arg1 forDomain:(id)arg2 completionHandler:(id)arg3 ;
-(void)setValue:(id)arg0 ofPreference:(NSInteger)arg1 forDomain:(id)arg2 includeTimestamp:(BOOL)arg3 completionHandler:(id)arg4 ;


@end


#endif