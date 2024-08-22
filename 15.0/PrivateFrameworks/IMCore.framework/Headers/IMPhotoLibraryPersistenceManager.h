// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMPHOTOLIBRARYPERSISTENCEMANAGER_H
#define IMPHOTOLIBRARYPERSISTENCEMANAGER_H

@class NSString, NSHashTable, NSMutableDictionary, NSMutableSet;
@protocol PHPhotoLibraryChangeObserver;

#import <Foundation/Foundation.h>


@interface IMPhotoLibraryPersistenceManager : NSObject <PHPhotoLibraryChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL libraryAlreadyOpened; // ivar: _libraryAlreadyOpened
@property (retain, nonatomic) NSHashTable *listeners; // ivar: _listeners
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *syndicationIdentifierSaveStateCache; // ivar: _syndicationIdentifierSaveStateCache
@property (retain, nonatomic) NSMutableDictionary *syndicationIdentifierToAssetUUIDCache; // ivar: _syndicationIdentifierToAssetUUIDCache
@property (retain, nonatomic) NSMutableSet *syndicationIdentifiersWithActiveFetch; // ivar: _syndicationIdentifiersWithActiveFetch


+(id)_assetFetchQueue;
+(id)_photoLibraryInternalQueue;
+(id)photosSyndicationIdentifiersForMessage:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_isListenerRegistered:(id)arg0 ;
-(NSUInteger)cachedCountOfSyndicationIdentifiersSavedToSystemPhotoLibrary:(id)arg0 shouldFetchAndNotifyAsNeeded:(BOOL)arg1 didStartFetch:(*BOOL)arg2 ;
-(id)init;
-(void)_invalidateCache;
-(void)_notifyListeners;
-(void)_openPhotoLibraryIfNecessary;
-(void)fetchInfoForSyndicationIdentifiersSavedToSystemPhotoLibrary:(id)arg0 completion:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)registerPhotoLibraryPersistenceManagerListener:(id)arg0 ;
-(void)unregisterPhotoLibraryPersistenceManagerListener:(id)arg0 ;


@end


#endif