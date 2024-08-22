// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTOPREFERENCESACCESSOR_H
#define NPTOPREFERENCESACCESSOR_H

@class NPSDomainAccessor, NSMutableArray, NRDevice;

#import <Foundation/Foundation.h>

#import "NPTONotificationCenter.h"

@interface NPTOPreferencesAccessor : NSObject {
    NPSDomainAccessor *_domainAccessor;
    NPTONotificationCenter *_notificationCenter;
    NSMutableArray *_batchUpdatesKeyStack;
}


@property (readonly, nonatomic) NRDevice *device; // ivar: _device


-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)npto_appPhotosSyncingEnabled;
-(BOOL)npto_featuredPhotosSyncingEnabled;
-(BOOL)npto_isAlwaysUpdatingEnabledForAssetCollection:(id)arg0 ;
-(BOOL)npto_memoriesSyncingEnabled;
-(NSUInteger)npto_fetchCountForAssetCollection:(id)arg0 ;
-(NSUInteger)npto_syncedPhotosLimit;
-(id)changeObserverForKey:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)initWithDevice:(id)arg0 ;
-(id)npto_alwaysUpdatingEnabledForAllCollections;
-(id)npto_appLastOpenDate;
-(id)npto_fetchCountsForAllCollections;
-(id)npto_fetchSyncedAlbum;
-(id)npto_syncedAlbumIdentifier;
-(id)objectForKey:(id)arg0 ;
-(void)npto_removeFetchCountForAssetCollection:(id)arg0 ;
-(void)npto_setAlwaysUpdatingEnabled:(BOOL)arg0 forAssetCollection:(id)arg1 ;
-(void)npto_setAlwaysUpdatingEnabledForAllCollections:(id)arg0 ;
-(void)npto_setFetchCount:(NSUInteger)arg0 forAssetCollection:(id)arg1 ;
-(void)npto_setFetchCountsForAllCollections:(id)arg0 ;
// -(void)performBatchUpdates:(id)arg0 synchronizeToRemoteDevice:(unk)arg1  ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif