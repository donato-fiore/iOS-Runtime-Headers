// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVCOOKIESTORAGE_H
#define SSVCOOKIESTORAGE_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSSQLiteDatabase.h"

@interface SSVCookieStorage : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSURL *_storageLocation;
    BOOL _usesSharedCookieDatabase;
}


@property (readonly, nonatomic) SSSQLiteDatabase *_database; // ivar: __database
@property (nonatomic) BOOL performingMigration; // ivar: _performingMigration
@property (readonly) NSURL *storageLocation;


+(BOOL)_bindStatement:(struct sqlite3_stmt *)arg0 withValues:(id)arg1 ;
+(BOOL)_currentProcessIsRoot;
+(BOOL)_currentProcessShouldUseRescuedStorageLocationForLocation:(id)arg0 ;
+(BOOL)_fileIsOwnedByRoot:(id)arg0 ;
+(BOOL)_fileURLRepresentsSharedStorageLocation:(id)arg0 ;
+(BOOL)_migrateToVersion1WithDatabase:(id)arg0 ;
+(BOOL)_migrateToVersion2WithDatabase:(id)arg0 ;
+(BOOL)_setupCookieDatabase:(id)arg0 forCookieStorage:(id)arg1 ;
+(BOOL)responseHasSetCookies:(id)arg0 ;
+(id)_getGlobalSetCookiesForResponse:(id)arg0 ;
+(id)_getSetCookiesForResponse:(id)arg0 ;
+(id)_getUserSetCookiesForResponse:(id)arg0 ;
+(id)_rescuedStorageLocationForLocation:(id)arg0 ;
+(id)_sharedStorageLocationPath;
+(id)sharedInstance;
+(id)sharedStorage;
-(BOOL)_shouldAddITFECookieToURL:(id)arg0 ;
-(BOOL)_stopIncludingLocalCookies;
-(id)_accountForKey:(id)arg0 ;
-(id)_allCookieKeys;
-(id)_columnNameForCookieProperty:(id)arg0 ;
-(id)_copyCookieDictionaryForURL:(id)arg0 key:(id)arg1 ;
-(id)_copyCookieObjectsForURL:(id)arg0 key:(id)arg1 ;
-(id)_copyCookiesForPreparedSQLStatement:(struct sqlite3_stmt *)arg0 ;
-(id)_copyCookiesWithKey:(id)arg0 ;
-(id)_copyPrivateCookieObjectsForURL:(id)arg0 key:(id)arg1 ;
-(id)_copyPrivateCookiesForURL:(id)arg0 key:(id)arg1 ;
-(id)_filterCookies:(id)arg0 forURL:(id)arg1 ;
-(id)allCookiesForAccount:(id)arg0 ;
-(id)allCookiesForUserIdentifier:(id)arg0 ;
-(id)allCookiesForUserIdentifier:(id)arg0 scope:(NSInteger)arg1 ;
-(id)cookieArrayBySettingFeatureEnablerWithArray:(id)arg0 key:(id)arg1 ;
-(id)cookieHeadersForURL:(id)arg0 account:(id)arg1 ;
-(id)cookieHeadersForURL:(id)arg0 userIdentifier:(id)arg1 ;
-(id)cookieHeadersForURL:(id)arg0 userIdentifier:(id)arg1 scope:(NSInteger)arg2 ;
-(id)cookiesForURL:(id)arg0 account:(id)arg1 ;
-(id)cookiesForURL:(id)arg0 userIdentifier:(id)arg1 ;
-(id)cookiesForURL:(id)arg0 userIdentifier:(id)arg1 scope:(NSInteger)arg2 ;
-(id)fetchDefaults;
-(id)init;
-(id)initWithStorageLocation:(id)arg0 ;
-(void)_bindInsertStatement:(struct sqlite3_stmt *)arg0 forCookie:(id)arg1 key:(id)arg2 ;
-(void)_cookieDatabaseDidChange;
-(void)_handleSharedCookieDatabaseDidChangeDarwinNotification;
-(void)_insertCookies:(id)arg0 forKey:(id)arg1 ;
-(void)_setCookies:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)removeAllCookies;
-(void)removeCookiesWithAccount:(id)arg0 ;
-(void)removeCookiesWithProperties:(id)arg0 ;
-(void)removeCookiesWithUserIdentifier:(id)arg0 ;
-(void)removeCookiesWithUserIdentifier:(id)arg0 scope:(NSInteger)arg1 ;
-(void)setCookies:(id)arg0 forAccount:(id)arg1 ;
-(void)setCookies:(id)arg0 forUserIdentifier:(id)arg1 ;
-(void)setCookiesForHTTPResponse:(id)arg0 account:(id)arg1 ;
-(void)setCookiesForHTTPResponse:(id)arg0 userIdentifier:(id)arg1 ;
-(void)setCookiesForHTTPResponse:(id)arg0 userIdentifier:(id)arg1 scope:(NSInteger)arg2 ;
-(void)setCookiesFromCookieStorage:(id)arg0 ;
-(void)setFeatureEnablerInDictionary:(id)arg0 key:(id)arg1 ;
-(void)synchronizeCookies;
-(void)synchronizeFeatureEnablerCookieWithCookieValue:(id)arg0 key:(id)arg1 result:(id)arg2 ;


@end


#endif