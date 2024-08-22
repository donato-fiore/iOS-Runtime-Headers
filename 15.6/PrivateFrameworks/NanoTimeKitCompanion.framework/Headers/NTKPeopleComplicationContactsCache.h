// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPEOPLECOMPLICATIONCONTACTSCACHE_H
#define NTKPEOPLECOMPLICATIONCONTACTSCACHE_H

@class NSDictionary, NSLock, CNContactStore, CNFavorites, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKPeopleComplicationContactsCache : NSObject {
    NSDictionary *_favoritesMapping;
    NSLock *_favoritesMappingLock;
    NSLock *_favoritesEntriesLock;
    NSLock *_allContactsEntriesLock;
    BOOL _hasSetupNotifications;
    NSLock *_hasSetupNotificationsLock;
    CNContactStore *_contactStore;
    CNFavorites *_favorites;
    NSArray *_nonFavoriteValidAllContacts;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedCache;
-(BOOL)checkValidityOfContact:(id)arg0 block:(id)arg1 ;
-(BOOL)contactIdentifierIsFavorited:(id)arg0 ;
-(id)_contactKeysToFetchWithThumbnail;
-(id)_contactKeysToFetchWithoutThumbnail;
-(id)_favoritesMappingLocked;
-(id)_fetchContactForId:(id)arg0 ;
-(id)_mappedFavoriteContacts;
-(id)abbreviatedNameForContact:(id)arg0 ;
-(id)computeNonFavoriteAllContactsWithCount:(NSUInteger)arg0 ;
-(id)contactForId:(id)arg0 ;
-(id)favoriteContacts;
-(id)firstNonFavoriteAllContact;
-(id)fullNameForContact:(id)arg0 ;
-(id)init;
-(id)nonFavoriteAllContactsWithCount:(NSUInteger)arg0 ;
-(id)shortNameForContact:(id)arg0 ;
-(void)_didReceiveContactStoreChangedNotification;
-(void)_didReceiveDeviceLockStateDidChangeNotification;
-(void)_didReceiveFavoritesChangeRelatedNotification;
-(void)_favoritesEntriesChangedExternally;
-(void)_locked_createFavorites;
-(void)_queue_findContactWithFullName:(id)arg0 block:(id)arg1 ;
-(void)_queue_flushCNFavoritesReload;
-(void)_queue_reloadContacts;
-(void)_queued_flushCNFavorites;
-(void)_queued_loadAllContacts;
-(void)_queued_loadFavoriteContacts;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(void)dealloc;
-(void)findContactWithFullName:(id)arg0 block:(id)arg1 ;
-(void)setupNotificationsIfNecessary;


@end


#endif