// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AECHATKITTRANSPORT_H
#define AECHATKITTRANSPORT_H

@class NSMutableDictionary;
@protocol AEPhotosAssetPackageFinalizer, OS_dispatch_group, OS_dispatch_queue, AEChatKitTransportDelegate;


#import "AEPackageTransport.h"

@interface AEChatKitTransport : AEPackageTransport <AEPhotosAssetPackageFinalizer>



@property (readonly, nonatomic) NSMutableDictionary *_alternateURLsByIdentifier; // ivar: __alternateURLsByIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *_packagePreparationGroup; // ivar: __packagePreparationGroup
@property (readonly, nonatomic) NSMutableDictionary *_primaryURLsByIdentifier; // ivar: __primaryURLsByIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_urlSidetableIsolationQueue; // ivar: __urlSidetableIsolationQueue
@property (weak, nonatomic) NSObject<AEChatKitTransportDelegate> *delegate;


-(id)_chatkitPackageForIdentifer:(id)arg0 ;
-(id)_persistedURLsFromURLs:(id)arg0 inBaseDirectory:(id)arg1 outError:(*id)arg2 ;
-(id)_preparePackageForCommit:(id)arg0 inBaseDirectory:(id)arg1 outError:(*id)arg2 ;
-(id)_workQueue;
-(id)finalizePackage:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)orderedStagedPayloads;
-(void)_beginStagingWorkForPackage:(id)arg0 ;
-(void)_evictPersistedURLs:(id)arg0 ;
-(void)_evictPersistedURLsForPackageIdentifier:(id)arg0 evictFiles:(BOOL)arg1 ;
-(void)_stagePackage:(id)arg0 initiateStagingWork:(BOOL)arg1 ;
-(void)_unstagePackagesWithIdentifiers:(id)arg0 evictFiles:(BOOL)arg1 ;
-(void)_updatePrimaryURLsForPackageIdentifier:(id)arg0 urls:(id)arg1 ;
-(void)commitPackage:(id)arg0 ;
-(void)stagePackage:(id)arg0 ;
-(void)stagePackages:(id)arg0 ;
-(void)stagePersistedPayloads:(id)arg0 ;
-(void)unstagePackageWithIdentifier:(id)arg0 andNotify:(BOOL)arg1 ;
-(void)unstagePackagesWithIdentifiers:(id)arg0 ;
-(void)unstagePackagesWithIdentifiers:(id)arg0 evictFiles:(BOOL)arg1 ;


@end


#endif