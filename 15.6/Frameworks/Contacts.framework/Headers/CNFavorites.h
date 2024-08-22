// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFAVORITES_H
#define CNFAVORITES_H

@class NSMutableArray, NSArray, NSUUID, NSMutableDictionary;
@protocol CNFavoritesLogger;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"

@interface CNFavorites : NSObject {
    NSMutableArray *_entries;
}


@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (nonatomic) BOOL dirty; // ivar: _dirty
@property (readonly, nonatomic) NSArray *entries;
@property (readonly, nonatomic) NSUUID *favoritesRegistrationKey; // ivar: _favoritesRegistrationKey
@property (readonly, getter=isFull) BOOL full;
@property (readonly, nonatomic) NSObject<CNFavoritesLogger> *logger; // ivar: _logger
@property (nonatomic) BOOL needsReload; // ivar: _needsReload
@property (nonatomic) NSUInteger postCount; // ivar: _postCount
@property (retain, nonatomic) NSMutableDictionary *uidToEntry; // ivar: _uidToEntry


+(id)favoritesPath;
+(id)registeredFavorites;
+(id)sharedInstance;
+(void)flushSingleton;
-(BOOL)_isValueForEntry:(id)arg0 equalToValue:(id)arg1 ;
-(BOOL)addEntryForContact:(id)arg0 propertyKey:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)containsEntryWithType:(NSInteger)arg0 forContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
-(BOOL)shouldSimulateCrashReportForError:(id)arg0 ;
-(BOOL)writeFavoritesToFile:(id)arg0 ;
-(id)_entryDictionaries;
-(id)_uniqueRematchedEntries:(id)arg0 ;
-(id)entriesForContact:(id)arg0 ;
-(id)entriesForContact:(id)arg0 propertyKey:(id)arg1 labeledValueIdentifier:(id)arg2 actionType:(id)arg3 bundleIdentifier:(id)arg4 ;
-(id)entryWithIdentifier:(id)arg0 forContact:(id)arg1 ;
-(id)entryWithType:(NSInteger)arg0 forContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
-(id)init;
-(id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 logger:(id)arg1 ;
-(void)_addEntryToMap:(id)arg0 ;
-(void)_postChangeNotification;
-(void)_removeEntryFromMap:(id)arg0 withUid:(int)arg1 ;
-(void)addEntry:(id)arg0 ;
-(void)dealloc;
-(void)loadEntriesIfNecessary;
-(void)moveEntryAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)recacheIdentitiesSoon;
-(void)registerForDistributedNotifications;
-(void)rematchEntriesWithOptions:(NSUInteger)arg0 ;
-(void)removeAllEntries;
-(void)removeEntryAtIndex:(NSInteger)arg0 ;
-(void)save;
-(void)saveImmediately;
-(void)unregisterForDistributedNotifications;


@end


#endif