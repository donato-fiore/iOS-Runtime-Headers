// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDANALYTICSENVELOPESTORE_H
#define NDANALYTICSENVELOPESTORE_H

@class FCAssetStore, FCCacheCoordinator, NSString;
@protocol FCCacheCoordinatorDelegate, NDAnalyticsEnvelopeStore, NDAnalyticsEnvelopeStoreObserver;

#import <Foundation/Foundation.h>


@interface NDAnalyticsEnvelopeStore : NSObject <FCCacheCoordinatorDelegate, NDAnalyticsEnvelopeStore>



@property (retain, nonatomic) FCAssetStore *assetStore; // ivar: _assetStore
@property (retain, nonatomic) FCCacheCoordinator *cacheCoordinator; // ivar: _cacheCoordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<NDAnalyticsEnvelopeStoreObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


-(NSUInteger)cacheCoordinatorCurrentSizeWithReadLock:(id)arg0 ;
-(id)allEntriesWithHoldToken:(*id)arg0 ;
-(id)envelopesForEntries:(id)arg0 ;
-(id)init;
-(id)initWithStoreDirectoryFileURL:(id)arg0 ;
-(id)sizesOfEnvelopesWithEntries:(id)arg0 ;
-(void)_deleteEnvelopesForKeysFromStore:(id)arg0 ;
-(void)_reportEnvelopesToNewsAutomationIfNeeded:(id)arg0 ;
-(void)cacheCoordinator:(id)arg0 flushKeysWithWriteLock:(id)arg1 ;
-(void)copyEnvelopes:(id)arg0 ;
-(void)deleteEnvelopesForEntries:(id)arg0 ;
-(void)enableFlushing;


@end


#endif