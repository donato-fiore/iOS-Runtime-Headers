// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSFPEXTENSIONHELPER_H
#define LIVEFSFPEXTENSIONHELPER_H

@class NSFileProviderExtension, NSString, NSMapTable, LiveFSLRUCache, NSXPCConnection, NSURL, LiveFSClient, LiveFSServiceClient;
@protocol NSFileProviderExtension_Private, OS_dispatch_queue;


#import "LiveFSThumbnailsServiceSource.h"

@interface LiveFSFPExtensionHelper : NSFileProviderExtension <NSFileProviderExtension_Private>

 {
    Class ItemClass;
    Class EnumeratorClass;
    NSString *connectionURL;
    NSString *providerName;
    NSMapTable *itemIDMap;
    NSMapTable *itemHandleMap;
    NSMapTable *enumerators;
    LiveFSLRUCache *itemCache;
    LiveFSThumbnailsServiceSource *thumbnailsServiceSource;
    NSObject<OS_dispatch_queue> *renameUpdateQueue;
}


@property (getter=isClusterDomain) BOOL clusterDomain; // ivar: _clusterDomain
@property (getter=isClusterMaster) BOOL clusterMaster; // ivar: _clusterMaster
@property (readonly) NSString *clusterMasterID; // ivar: _clusterMasterID
@property (readonly, nonatomic) NSXPCConnection *conn; // ivar: _conn
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSURL *docPath; // ivar: _docPath
@property (retain) NSObject<OS_dispatch_queue> *enumeratorHelperQueue; // ivar: _enumeratorHelperQueue
@property BOOL fetchRoot; // ivar: _fetchRoot
@property (readonly) NSUInteger hash;
@property BOOL idsPersist; // ivar: _idsPersist
@property (readonly) BOOL isDead; // ivar: _isDead
@property BOOL isReadOnlyVolume; // ivar: _isReadOnlyVolume
@property (readonly, nonatomic) LiveFSClient *manager; // ivar: _manager
@property (retain, nonatomic) NSURL *mountPath; // ivar: _mountPath
@property (readonly, nonatomic) BOOL serverSearchUsesCS;
@property (readonly, nonatomic) LiveFSServiceClient *serviceClient; // ivar: _serviceClient
@property (readonly) Class superclass;
@property BOOL supportsTagging; // ivar: _supportsTagging
@property (readonly, nonatomic) BOOL supportsTrash;


+(id)getNSErrorFromLiveFSErrno:(int)arg0 ;
+(id)getNSErrorFromUnknownError:(id)arg0 ;
-(BOOL)_hasManagerOrError:(*id)arg0 ;
-(BOOL)_isLoggedInOrError:(*id)arg0 ;
-(BOOL)_isLoggedInOrErrorLocked:(*id)arg0 ;
-(id)LiveFSDefaultMover:(SEL)arg0 ;
-(id)URLForItemWithIdentifier:(id)arg0 ;
-(id)URLForItemWithPersistentIdentifier:(id)arg0 ;
-(id)clusterDomainItemsOrError:(*id)arg0 ;
-(id)disconnectWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(id)ensureMountPathSetup;
-(id)enumeratorForContainerItemIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)enumeratorForSearchQuery:(id)arg0 error:(*id)arg1 ;
-(id)fileProviderErrorFromFSError:(id)arg0 ;
-(id)getEnumeratorForContainer:(id)arg0 ;
-(id)getItemForFileHandle:(id)arg0 ;
-(id)getItemForParent:(id)arg0 name:(id)arg1 ;
-(id)getVolumeManagerWithError:(*id)arg0 ;
-(id)init;
-(id)itemAtPath:(id)arg0 parent:(id)arg1 ;
-(id)itemAtPathLocked:(id)arg0 parent:(id)arg1 ;
-(id)itemAtPathLocked:(id)arg0 parent:(id)arg1 cachedOnly:(BOOL)arg2 ;
-(id)itemForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)itemForIdentifierLocked:(id)arg0 error:(*id)arg1 ;
-(id)itemForPath:(id)arg0 cachedOnly:(BOOL)arg1 error:(*id)arg2 ;
-(id)itemForURL:(id)arg0 cachedOnly:(BOOL)arg1 error:(*id)arg2 ;
-(id)itemForURL:(id)arg0 error:(*id)arg1 ;
-(id)itemPathForURL:(id)arg0 ;
-(id)makeVolumeListenerEndpointAndReturnError:(*id)arg0 ;
-(id)makeVolumeListenerEndpointAndReturnErrorLocked:(*id)arg0 ;
-(id)pathForInodeID:(id)arg0 error:(*id)arg1 ;
-(id)persistentIdentifierForItemAtURL:(id)arg0 ;
-(id)supportedServiceSourcesForItemIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)addDirContainer:(id)arg0 forContainerID:(id)arg1 ;
-(void)addFileHandle:(id)arg0 toItem:(id)arg1 ;
-(void)addItem:(id)arg0 identifier:(id)arg1 fileHandle:(id)arg2 ;
-(void)createDirectoryWithName:(id)arg0 inParentItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)dispatchOntoRenameQueue:(id)arg0 ;
-(void)enumerateRootContainer;
-(void)fetchTrashIdentifiersWithCompletionHandler:(id)arg0 ;
-(void)getVolumeInfoLocked;
-(void)handleInterruption;
-(void)handleInvalidation;
-(void)importDocumentAtURL:(id)arg0 toParentItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)itemChangedAtURL:(id)arg0 ;
-(void)providePlaceholderAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)reIDItem:(id)arg0 oldID:(id)arg1 ;
-(void)refreshVolumeInfo;
-(void)removeEnumeratorForContainer:(id)arg0 ;
-(void)removeEnumeratorForContainerLocked:(id)arg0 ;
-(void)removeItem:(id)arg0 parent:(id)arg1 name:(id)arg2 fileHandle:(id)arg3 ;
-(void)renameItemWithIdentifier:(id)arg0 toName:(id)arg1 completionHandler:(id)arg2 ;
-(void)reparentItem:(id)arg0 oldID:(id)arg1 oldParent:(id)arg2 oldName:(id)arg3 newParent:(id)arg4 newName:(id)arg5 ;
-(void)reparentItemWithIdentifier:(id)arg0 toParentItemWithIdentifier:(id)arg1 newName:(id)arg2 completionHandler:(id)arg3 ;
-(void)setFavoriteRank:(id)arg0 forItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setLastUsedDate:(id)arg0 forItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setTagData:(id)arg0 forItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)startProvidingItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopProvidingItemAtURL:(id)arg0 ;
-(void)trashItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)unlockWithPassword:(id)arg0 remember:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)untrashItemWithIdentifier:(id)arg0 toParentItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif