// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPPACKAGEWRITECOORDINATOR_H
#define TSPPACKAGEWRITECOORDINATOR_H

@class NSSet, NSMutableSet, NSMapTable, NSHashTable, NSMutableArray, NSError, NSURL, NSString;
@protocol TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPDataReferenceMapPersistedObjectProvider, TSPExternalReferenceDelegate, TSPPersistedObjectUUIDMapDelegate, TSPObjectModifyDelegate, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"
#import "TSPDocumentRevision.h"
#import "TSPObject.h"
#import "TSPDataAttributesSnapshot.h"
#import "TSPObjectReferenceMap.h"
#import "TSPArchiverManager.h"
#import "TSPObjectContainer.h"
#import "TSPPersistedObjectUUIDMap.h"
#import "TSPPersistedDataReferenceMap.h"
#import "TSPComponentExternalReferenceMap.h"
#import "TSPSupportPackageWriteCoordinator.h"
#import "TSPPackageMetadata.h"

@interface TSPPackageWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPDataReferenceMapPersistedObjectProvider, TSPExternalReferenceDelegate, TSPPersistedObjectUUIDMapDelegate, TSPObjectModifyDelegate>

 {
    uint8_t _didWriteObjectContainer;
    TSPObjectContext *_context;
    unsigned char _packageIdentifier;
    TSPDocumentRevision *_documentRevision;
    NSUInteger _fileFormatVersion;
    NSUInteger _saveToken;
    NSInteger _preferredPackageType;
    TSPObject *_metadataObject;
    TSPDataAttributesSnapshot *_dataAttributesSnapshot;
    TSPObjectReferenceMap *_objectReferenceMap;
    TSPArchiverManager *_archiverManager;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSSet *_knownComponentLocators;
    IdentifierMap<TSP::ComponentPropertiesSnapshot> _componentPropertiesSnapshot;
    NSObject<OS_dispatch_queue> *_accessQueue;
    uint8_t _accessQueueSuspendCount;
    uint8_t _currentComponentWriterPointer;
    IdentifierMap<TSP::WrittenComponentInfo> _writtenComponents;
    IdentifierMap<TSP::ComponentProperties> _componentProperties;
    map<unsigned int, std::map<long long, TSPComponent *>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::map<long long, TSPComponent *>>>> _remainingComponentsQueue;
    NSMutableSet *_packageLocatorSet;
    TSPObjectContainer *_objectContainer;
    NSInteger _objectContainerIdentifier;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
    TSPPersistedDataReferenceMap *_persistedDataReferenceMap;
    NSMapTable *_loadedObjects;
    uint8_t _wastefullyEnqueuedComponentCount;
    IdentifierMap<TSP::WrittenObjectInfo> _writtenObjects;
    IdentifierMap<long long> _delayedObjects;
    queue<TSP::WrittenObjectInfo, std::deque<TSP::WrittenObjectInfo>> _writtenLazyReferences;
    NSObject<OS_dispatch_queue> *_modifyObjectQueue;
    NSHashTable *_modifiedObjectsDuringWrite;
    BOOL _captureSnapshots;
    NSObject<OS_dispatch_queue> *_externalLazyReferencesQueue;
    TSPComponentExternalReferenceMap *_externalLazyReferencesMap;
    NSObject<OS_dispatch_queue> *_externalReferenceQueue;
    NSMutableArray *_externalReferenceBlocks;
    NSMutableSet *_duplicateUUIDs;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    NSUInteger _readVersion;
    NSUInteger _writeVersion;
    NSMutableSet *_featureIdentifiers;
    NSHashTable *_referencedDatas;
    NSMutableArray *_dataFinalizeHandlers;
    uint8_t _writeSuccess;
    uint8_t _didAttemptRecoveryByDirtyingAllComponents;
    uint8_t _isRecoverableError;
    uint8_t _isCancelled;
    uint8_t _didWriteRootObject;
    uint8_t _didWriteMetadata;
    os_unfair_lock_s _packageWriterErrorLock;
    NSError *_packageWriterError;
    NSURL *_documentTargetURL;
    TSPSupportPackageWriteCoordinator *_supportPackageWriteCoordinator;
    IdentifierMap<bool> _validatedExternalReferences;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *featureIdentifiers;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSPObjectContainer *objectContainer;
@property (readonly, nonatomic) TSPPackageMetadata *packageMetadata; // ivar: _packageMetadata
@property (readonly, nonatomic) NSURL *relativeURLForExternalData; // ivar: _relativeURLForExternalData
@property (readonly) Class superclass;


-(*void)writtenComponents;
-(BOOL)componentWriter:(id)arg0 object:(id)arg1 belongsToCopiedComponent:(id)arg2 ;
-(BOOL)didWriteComponentWithIdentifier:(NSInteger)arg0 wasCopied:(*BOOL)arg1 componentReadVersion:(*NSUInteger)arg2 ;
-(BOOL)didWriteData:(id)arg0 ;
-(BOOL)didWriteObject:(id)arg0 claimingComponent:(*id)arg1 componentReadVersion:(*NSUInteger)arg2 ;
-(BOOL)didWriteObjectWithIdentifier:(NSInteger)arg0 ;
-(BOOL)enqueueComponent:(id)arg0 rootObjectOrNil:(id)arg1 forceArchive:(BOOL)arg2 isWastefullyEnqueueing:(BOOL)arg3 isWeakReference:(BOOL)arg4 referencingComponent:(id)arg5 referencedObject:(id)arg6 hasArchiverAccessLock:(BOOL)arg7 ;
-(BOOL)isComponentExternalWithIdentifier:(NSInteger)arg0 wasCopied:(*BOOL)arg1 componentReadVersion:(*NSUInteger)arg2 ;
-(BOOL)isComponentPersisted:(id)arg0 ;
-(BOOL)isObjectInExternalPackage:(id)arg0 claimingComponent:(*id)arg1 componentReadVersion:(*NSUInteger)arg2 ;
-(BOOL)isObjectWrittenInExternalPackageWithIdentifier:(NSInteger)arg0 ;
-(BOOL)shouldArchiveComponent:(id)arg0 checkForceArchive:(BOOL)arg1 ;
-(BOOL)shouldCopyComponentOfObject:(id)arg0 ;
-(BOOL)shouldEnqueueComponent:(id)arg0 ;
-(BOOL)wasComponentCopied:(NSInteger)arg0 ;
-(BOOL)wasObjectPersistedWithIdentifier:(NSInteger)arg0 ;
-(NSInteger)componentIdentifierForObjectIdentifier:(NSInteger)arg0 objectOrNil:(id)arg1 objectUUIDOrNil:(id)arg2 outComponentIsVersioned:(*BOOL)arg3 ;
-(NSInteger)updateDelayedObjectsSetForWrittenComponentInfo:(struct WrittenComponentInfo *)arg0 componentIdentifier:(NSInteger)arg1 withObject:(id)arg2 canDelayObjects:(BOOL)arg3 ;
-(NSUInteger)objectTargetType;
-(NSUInteger)objectTargetTypeForComponentWriter:(id)arg0 ;
-(NSUInteger)writeRootObject:(id)arg0 withPackageWriter:(id)arg1 saveOperationState:(id)arg2 error:(*id)arg3 ;
-(id)componentForObjectIdentifier:(NSInteger)arg0 objectOrNil:(id)arg1 componentReadVersion:(*NSUInteger)arg2 ;
-(id)componentWriter:(id)arg0 locatorForClaimingComponent:(id)arg1 ;
-(id)componentWriter:(id)arg0 wantsComponentOfObject:(id)arg1 componentReadVersion:(*NSUInteger)arg2 ;
-(id)componentWriter:(id)arg0 wantsExplicitComponentRootObjectForObject:(id)arg1 archiverOrNil:(id)arg2 claimingComponent:(id)arg3 hasArchiverAccessLock:(BOOL)arg4 ;
-(id)componentWriterWantsDelayedObjects:(id)arg0 ;
-(id)createPackageMetadataWritingDatasWithPackageWriter:(id)arg0 saveOperationState:(id)arg1 error:(*id)arg2 ;
-(id)explicitComponentRootObjectForObject:(id)arg0 ;
-(id)explicitComponentRootObjectForObject:(id)arg0 archiverOrNil:(id)arg1 claimingComponent:(id)arg2 newClaimingComponent:(id)arg3 newClaimingRootObject:(id)arg4 willEnqueueDelayedObject:(BOOL)arg5 hasArchiverAccessLock:(BOOL)arg6 ;
-(id)init;
-(id)initWithContext:(id)arg0 archiverClass:(Class)arg1 archiverFlags:(char)arg2 documentRevision:(id)arg3 saveToken:(NSUInteger)arg4 packageIdentifier:(unsigned char)arg5 fileFormatVersion:(NSUInteger)arg6 preferredPackageType:(NSInteger)arg7 metadataObject:(id)arg8 ;
-(id)initWithContext:(id)arg0 archiverClass:(Class)arg1 archiverFlags:(char)arg2 documentRevision:(id)arg3 saveToken:(NSUInteger)arg4 packageIdentifier:(unsigned char)arg5 fileFormatVersion:(NSUInteger)arg6 preferredPackageType:(NSInteger)arg7 metadataObject:(id)arg8 packageWriteCoordinator:(id)arg9 captureSnapshots:(BOOL)arg10 ;
-(id)objectForIdentifier:(NSInteger)arg0 ;
-(id)packageWriterError;
-(id)persistedObjectUUIDMap:(id)arg0 needsDescriptionForComponentIdentifier:(NSInteger)arg1 objectIdentifier:(NSInteger)arg2 ;
-(void)addDataFinalizeHandlerForSuccessfulSave:(id)arg0 ;
-(void)addDelayedObject:(id)arg0 forComponentRootObject:(id)arg1 claimingComponent:(id)arg2 isDelayedObjectReferencedByObjectContainer:(BOOL)arg3 completion:(id)arg4 ;
-(void)addDelayedObjectToObjectContainer:(id)arg0 referencingComponent:(id)arg1 forWastefullyEnqueuedComponent:(id)arg2 componentRootObject:(id)arg3 ;
-(void)archiveComponent:(id)arg0 locator:(id)arg1 compressionAlgorithm:(NSInteger)arg2 storeOutsideObjectArchive:(BOOL)arg3 rootObject:(id)arg4 withPackageWriter:(id)arg5 ;
-(void)attemptDocumentRecovery;
-(void)calculateExternalReferences;
-(void)componentWriter:(id)arg0 canSkipArchivingStronglyReferencedObject:(id)arg1 fromComponentRootObject:(id)arg2 completion:(id)arg3 ;
-(void)componentWriterNeedsDocumentRecovery:(id)arg0 ;
-(void)copyComponent:(id)arg0 locator:(id)arg1 preferredLocator:(id)arg2 rootObject:(id)arg3 packageWriter:(id)arg4 ;
-(void)dealloc;
-(void)didFinishWritingWithSupportPackageWriteCoordinator:(id)arg0 ;
-(void)didReferenceData:(id)arg0 ;
-(void)enqueueReferencedObject:(id)arg0 referencingComponent:(id)arg1 isWeakReference:(BOOL)arg2 forWastefullyEnqueuedComponent:(id)arg3 componentRootObject:(id)arg4 componentInfo:(struct WrittenComponentInfo *)arg5 hasArchiverAccessLock:(BOOL)arg6 ;
-(void)enqueueRootObject:(id)arg0 forceArchive:(BOOL)arg1 isAddingDelayedObjectReferencedByObjectContainer:(BOOL)arg2 completion:(id)arg3 ;
-(void)enqueueRootObjectImpl:(id)arg0 forceArchive:(BOOL)arg1 isAddingDelayedObjectReferencedByObjectContainer:(BOOL)arg2 completion:(id)arg3 ;
-(void)enumerateWrittenObjectsWithBlock:(id)arg0 ;
-(void)forceArchivingComponentIdentifier:(NSInteger)arg0 ;
-(void)nextComponentAndRootObjectForComponentWriteWithCompletion:(id)arg0 ;
-(void)persistedObjectUUIDMap:(id)arg0 foundDuplicateUUID:(id)arg1 firstObjectLocation:(struct TSPObjectLocation )arg2 secondObjectLocation:(struct TSPObjectLocation )arg3 ;
-(void)setArchivedObjects:(id)arg0 componentObjectUUIDMap:(id)arg1 objectReferenceMap:(id)arg2 externalStrongReferences:(id)arg3 ambiguousReferences:(id)arg4 externalWeakReferences:(id)arg5 featureInfos:(id)arg6 componentDataReferenceMap:(id)arg7 forComponent:(id)arg8 ;
-(void)setDataAttributesSnapshot:(id)arg0 ;
-(void)setPackageWriterErrorIfNeeded:(id)arg0 ;
-(void)setSupportPackageWriteCoordinator:(id)arg0 ;
-(void)stopCapturingSnapshots;
-(void)updateExternalReferencesForCopiedComponent:(id)arg0 ;
-(void)updateObjectContextForSuccessfulSaveWithPackageWriter:(id)arg0 packageURL:(id)arg1 allDataIdentifiers:(id)arg2 ;
-(void)willModifyObject:(id)arg0 options:(NSUInteger)arg1 ;
-(void)writeComponent:(id)arg0 rootObjectOrNil:(id)arg1 forceArchive:(BOOL)arg2 withPackageWriter:(id)arg3 ;
-(void)writeExternalReferences:(id)arg0 andUpdateLazyReferences:(id)arg1 withPackageWriter:(id)arg2 forComponent:(id)arg3 locator:(id)arg4 ;
-(void)writeRemainingComponentsWithPackageWriter:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)writeRemainingRootObjectsAndRelatedComponents:(id)arg0 withPackageWriter:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3 ;
-(void)writeRootObject:(id)arg0 withPackageWriter:(id)arg1 saveOperationState:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
-(void)writeRootObjectAndRelatedComponents:(id)arg0 withPackageWriter:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3 ;


@end


#endif