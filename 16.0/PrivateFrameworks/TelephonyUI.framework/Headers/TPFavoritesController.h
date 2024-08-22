// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPFAVORITESCONTROLLER_H
#define TPFAVORITESCONTROLLER_H

@class TUCallProviderManager, NSCache, CNContactStore, NSString, NSArray, CNFavorites;
@protocol TUCallProviderManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPFavoritesController : NSObject <TUCallProviderManagerDelegate>



@property (readonly, nonatomic) TUCallProviderManager *callProviderManager; // ivar: _callProviderManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // ivar: _completionDispatchQueue
@property (readonly, nonatomic) NSCache *contactCache; // ivar: _contactCache
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *favoritesEntries; // ivar: _favoritesEntries
@property (readonly, nonatomic) CNFavorites *favoritesManager; // ivar: _favoritesManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger prefetchCount; // ivar: _prefetchCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // ivar: _serialDispatchQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSCache *transportNameCache; // ivar: _transportNameCache


-(BOOL)canAddEntry;
-(NSUInteger)absoluteIndexForIndex:(NSUInteger)arg0 ;
-(id)contactCacheKeyForFavoritesEntry:(id)arg0 ;
-(id)contactForFavoritesEntry:(id)arg0 ;
-(id)contactForFavoritesEntry:(id)arg0 keyDescriptors:(id)arg1 ;
-(id)fetchContactForFavoritesEntry:(id)arg0 ;
-(id)fetchContactForFavoritesEntry:(id)arg0 keyDescriptors:(id)arg1 ;
-(id)fetchFavoritesEntries;
-(id)fetchTransportNameForFavoritesEntry:(id)arg0 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 prefetchCount:(NSUInteger)arg1 ;
-(id)transportNameCacheKeyForFavoritesEntry:(id)arg0 ;
-(id)transportNameForFavoritesEntry:(id)arg0 ;
-(void)addEntry:(id)arg0 ;
-(void)dealloc;
-(void)handleContactsFavoritesDidChangeNotification:(id)arg0 ;
-(void)moveEntryAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)providersChangedForProviderManager:(id)arg0 ;
-(void)removeEntriesAtIndexes:(id)arg0 ;


@end


#endif