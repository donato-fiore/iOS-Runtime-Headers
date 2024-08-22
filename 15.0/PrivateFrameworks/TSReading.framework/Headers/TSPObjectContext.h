// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPOBJECTCONTEXT_H
#define TSPOBJECTCONTEXT_H

@class SFUCryptoKey, NSURL, NSMapTable, NSRecursiveLock, TSUTemporaryDirectory, NSString, NSUUID, NSData;
@protocol TSPFileCoordinatorDelegate, TSPObjectDelegate, TSPLazyReferenceDelegate, TSPSupportDirectoryDelegate, TSPDocumentResourceDownloader, TSPPassphraseConsumer, OS_dispatch_queue, OS_dispatch_group, TSPObjectContextDelegate;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"
#import "TSPDataManager.h"
#import "TSPObject.h"
#import "TSPObjectContainer.h"

@interface TSPObjectContext : NSObject <TSPFileCoordinatorDelegate, TSPObjectDelegate, TSPLazyReferenceDelegate, TSPSupportDirectoryDelegate, TSPDocumentResourceDownloader, TSPPassphraseConsumer>

 {
    NSInteger _lastObjectIdentifier;
    NSInteger _modifyObjectToken;
    int _modifyObjectCount;
    unsigned int _mode;
    SFUCryptoKey *_decryptionKey;
    NSURL *_documentURL;
    NSURL *_supportURL;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSRecursiveLock *_readLock;
    NSObject<OS_dispatch_queue> *_documentStateQueue;
    NSObject<OS_dispatch_queue> *_loadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversQueue;
    NSObject<OS_dispatch_queue> *_documentResourceDataProviderQueue;
    BOOL _isWaitingForEndSave;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
    NSObject<OS_dispatch_group> *_outstandingReadsGroup;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::equal_to<const long long>, std::allocator<std::pair<const long long, NSMutableArray *>>> _loadObservers;
}


@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) TSPDataManager *dataManager; // ivar: _dataManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property (weak, nonatomic) NSObject<TSPObjectContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL documentHasCurrentFileFormatVersion; // ivar: _documentHasCurrentFileFormatVersion
@property (readonly, nonatomic) TSPObject *documentObject; // ivar: _documentObject
@property (retain, nonatomic) TSPObjectContainer *documentObjectContainer; // ivar: _documentObjectContainer
@property (copy, nonatomic) NSString *documentPasswordHint; // ivar: _documentPasswordHint
@property (readonly, nonatomic) NSURL *documentURL;
@property (readonly, nonatomic) NSUUID *documentUUID; // ivar: _documentUUID
@property (readonly, nonatomic) NSInteger estimatedDownloadSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoreDocumentResourcesWhileReading;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) BOOL ignoreUnknownContentWhileReading;
@property (readonly, nonatomic) BOOL ignoreVersionCheckingWhileReading;
@property (nonatomic) BOOL isDocumentModified; // ivar: _isDocumentModified
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) BOOL isEstimatedDownloadSizePrecise;
@property (nonatomic) BOOL isPasswordProtected; // ivar: _isPasswordProtected
@property (nonatomic) BOOL isSupportModified; // ivar: _isSupportModified
@property (readonly, nonatomic) NSData *keychainGenericItem;
@property (nonatomic) NSInteger lastObjectIdentifier;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) NSString *passphraseHint;
@property (retain, nonatomic) NSData *passwordVerifier; // ivar: _passwordVerifier
@property (readonly, nonatomic) NSString *service;
@property (readonly) Class superclass;
@property (retain, nonatomic) TSPObject *supportObject; // ivar: _supportObject
@property (retain, nonatomic) TSPObjectContainer *supportObjectContainer; // ivar: _supportObjectContainer
@property (readonly, nonatomic) NSUUID *versionUUID; // ivar: _versionUUID


+(void)waitForPendingEndSaveGroup:(id)arg0 ;
-(BOOL)areExternalReferencesSupported;
-(BOOL)areExternalReferencesToDataAllowedAtURL:(id)arg0 ;
-(NSInteger)incrementLastObjectIdentifier:(NSInteger)arg0 ;
-(NSInteger)modifyObjectTokenForNewObject;
-(NSInteger)newObjectIdentifier;
-(NSInteger)updateModifyObjectToken;
-(id)addLoadedObjectsAndEnqueueNotifications:(id)arg0 ;
-(id)dataOrNilForIdentifier:(NSInteger)arg0 ;
-(id)documentRoot;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)objectForIdentifier:(NSInteger)arg0 ;
-(id)supportDirectoryURL;
-(id)temporaryDirectory;
-(void)addLoadObserver:(id)arg0 action:(SEL)arg1 forLazyReference:(id)arg2 ;
-(void)addLoadObserver:(id)arg0 action:(SEL)arg1 forObjectIdentifier:(NSInteger)arg2 objectOrNil:(id)arg3 ;
-(void)beginAssertOnModify;
-(void)beginIgnoringCachedObjectEviction;
-(void)beginWriteOperation;
-(void)checkforDataWarningsWithPackageURL:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)didMoveSupportToURL:(id)arg0 ;
-(void)didMoveToURL:(id)arg0 ;
-(void)didReadDocumentObject:(id)arg0 ;
-(void)endAssertOnModify;
-(void)endIgnoringCachedObjectEviction;
-(void)endWriteOperation;
-(void)performReadOperation:(id)arg0 ;
-(void)performReadOperationOnKnownObjects:(id)arg0 ;
-(void)resumeLoadingModifiedFlushedComponents;
-(void)runObjectNotificationsInQueue:(id)arg0 ;
-(void)suspendLoadingModifiedFlushedComponentsAndWait;
-(void)waitForSaveToFinishIfNeeded;


@end


#endif