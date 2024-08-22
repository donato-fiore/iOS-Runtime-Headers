// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALCITYMANAGER_H
#define ALCITYMANAGER_H

@class NSRecursiveLock, NSDate;

#import <Foundation/Foundation.h>

#import "ALSCGreenClient.h"
#import "CPSearchMatcher.h"

@interface ALCityManager : NSObject {
    *sqlite3 _db;
    *sqlite3 _localizedDb;
    NSRecursiveLock *_databaseAccessRecursiveLock;
    BOOL _greenKey1ValueCache;
    BOOL _greenKey2ValueCache;
    BOOL _greenKey3ValueCache;
    NSDate *_greenKeyValueCacheExpirationDate;
    ALSCGreenClient *_greenClient;
}


@property (readonly) CPSearchMatcher *citySearchMatcher; // ivar: _citySearchMatcher


+(BOOL)willApplyTimeZoneChanges1;
+(id)_localeDictionaryFromSQLRow:(*char *)arg0 ;
+(id)newCitiesByIdentifierMap:(id)arg0 ;
+(id)sharedManager;
+(struct __CFArray *)legacyCityForCity:(id)arg0 ;
-(BOOL)_shouldUseTablesAlternate1;
-(id)_cityForClassicIdentifier:(id)arg0 commaSearchOptions:(NSUInteger)arg1 ;
-(id)_cityForTimeZone:(id)arg0 localeCode:(id)arg1 ;
-(id)_defaultCityForTimeZone:(id)arg0 localeCode:(id)arg1 ;
-(id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)arg0 ;
-(id)allCities;
-(id)allLocales;
-(id)bestCityForLegacyCity:(struct __CFArray *)arg0 ;
-(id)citiesMatchingName:(id)arg0 ;
-(id)citiesMatchingName:(id)arg0 localized:(BOOL)arg1 ;
-(id)citiesMatchingQualifier:(id)arg0 ;
-(id)citiesWithIdentifiers:(id)arg0 ;
-(id)citiesWithTimeZone:(id)arg0 ;
-(id)cityForClassicIdentifier:(id)arg0 ;
-(id)defaultCitiesForLocaleCode:(id)arg0 ;
-(id)defaultCitiesForLocaleCode:(id)arg0 options:(int)arg1 ;
-(id)defaultCitiesShownInWorldClock;
-(id)defaultCityForTimeZone:(id)arg0 ;
-(id)defaultCityForTimeZone:(id)arg0 localeCode:(id)arg1 ;
-(id)init;
-(id)localeWithCode:(id)arg0 ;
-(void)_whileDatabaseLocked_ensureGreenKeyValueCaches;
-(void)_whileDatabaseLocked_modifyCityForGreen:(id)arg0 ;
-(void)dealloc;
-(void)localizeCities:(id)arg0 ;


@end


#endif