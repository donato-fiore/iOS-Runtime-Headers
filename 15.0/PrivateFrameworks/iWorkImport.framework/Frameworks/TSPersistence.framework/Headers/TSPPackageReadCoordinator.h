// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPPACKAGEREADCOORDINATOR_H
#define TSPPACKAGEREADCOORDINATOR_H

@class NSUUID, NSURL, NSMutableSet, NSArray, NSMapTable, NSString, NSSet;
@protocol TSPPersistedObjectUUIDMapDelegate, TSPReadCoordinator, OS_dispatch_group, OS_dispatch_queue;


#import "TSPReadCoordinatorBase.h"
#import "TSPObjectContext.h"
#import "TSPObject.h"
#import "TSPPackage.h"
#import "TSPFinalizeHandlerQueue.h"
#import "TSPPackageMetadata.h"
#import "TSPPersistedObjectUUIDMap.h"
#import "TSPDocumentLoadValidationPolicy.h"
#import "TSPDocumentRevision.h"
#import "TSPObjectContainer.h"

@interface TSPPackageReadCoordinator : TSPReadCoordinatorBase <TSPPersistedObjectUUIDMapDelegate, TSPReadCoordinator>

 {
    TSPObjectContext *_context;
    NSUUID *_documentUUID;
    TSPObject *_documentObject;
    TSPPackage *_package;
    NSURL *_packageURL;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    BOOL _areExternalDataReferencesAllowed;
    BOOL _skipDocumentUpgrade;
    NSUInteger _readVersion;
    TSPPackageMetadata *_cachedMetadata;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
    vector<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation>, std::allocator<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation>>> _persistedUUIDMapOperations;
    NSMutableSet *_duplicatedUUIDs;
    NSMutableSet *_componentIdentifiersWithDuplicatedUUIDs;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_ioCompletionQueue;
    NSObject<OS_dispatch_queue> *_readCompletionQueue;
    NSObject<OS_dispatch_queue> *_componentQueue;
    IdentifierMap<bool> _readIdentifiers;
    NSArray *_componentsToUpgrade;
    uint8_t _upgradeMode;
    NSObject<OS_dispatch_queue> *_objectQueue;
    NSMapTable *_objects;
    IdentifierMap<bool> _readExternalObjects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didRequireUpgrade;
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy; // ivar: _documentLoadValidationPolicy
@property (readonly, nonatomic) TSPDocumentRevision *documentRevision; // ivar: _documentRevision
@property (readonly, nonatomic) NSSet *featureIdentifiers; // ivar: _featureIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isReadingFromDocument;
@property (readonly, nonatomic) BOOL losesDataOnWrite; // ivar: _losesDataOnWrite
@property (readonly, nonatomic) TSPObject *metadataObject; // ivar: _metadataObject
@property (readonly, nonatomic) TSPObjectContainer *objectContainer; // ivar: _objectContainer
@property (readonly, nonatomic) NSInteger preferredPackageType; // ivar: _preferredPackageType
@property (readonly, nonatomic) NSUInteger saveToken; // ivar: _saveToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *unsupportedFeatureIdentifiers; // ivar: _unsupportedFeatureIdentifiers


-(BOOL)endReading;
-(BOOL)hasDocumentVersionUUID;
-(BOOL)p_validateComponent:(id)arg0 error:(*id)arg1 ;
-(BOOL)p_validateData:(id)arg0 timing:(NSInteger)arg1 documentMetadata:(id)arg2 scanForOSLikeCorruption:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)readComponentIfNeededAsync:(id)arg0 ;
-(NSInteger)reader:(id)arg0 wantsObjectIdentifierForUUID:(id)arg1 ;
-(NSUInteger)fileFormatVersion;
-(NSUInteger)fileFormatVersionFromMetadataMessage:(*void)arg0 ;
-(NSUInteger)readVersion;
-(id)baseObjectUUID;
-(id)context;
-(id)externalObjectForIdentifier:(NSInteger)arg0 componentIdentifier:(NSInteger)arg1 isReadFinished:(BOOL)arg2 ;
-(id)init;
-(id)initWithContext:(id)arg0 package:(id)arg1 packageURL:(id)arg2 finalizeHandlerQueue:(id)arg3 areExternalDataReferencesAllowed:(BOOL)arg4 skipDocumentUpgrade:(BOOL)arg5 documentLoadValidationPolicy:(id)arg6 ;
-(id)newObjectUUIDForObjectIdentifier:(NSInteger)arg0 ;
-(id)p_allComponentsInPackage;
-(id)p_allDataInPackage;
-(id)persistedObjectUUIDMap:(id)arg0 needsDescriptionForComponentIdentifier:(NSInteger)arg1 objectIdentifier:(NSInteger)arg2 ;
-(id)readPackageMetadataWithError:(*id)arg0 ;
-(id)reader:(id)arg0 wantsDataForIdentifier:(NSInteger)arg1 ;
-(id)unarchivedObjectForIdentifier:(NSInteger)arg0 isReadFinished:(BOOL)arg1 ;
-(unsigned char)packageIdentifier;
-(unsigned int)sourceType;
-(void)dealloc;
-(void)didReadObjects:(id)arg0 forComponent:(id)arg1 packageIdentifier:(unsigned char)arg2 ;
-(void)didReferenceExternalObject:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(void)didUpdateLazyReferenceDelegate:(id)arg0 ;
-(void)p_readComponent:(id)arg0 additionalComponents:(id)arg1 upgradeMode:(NSInteger)arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
-(void)p_readComponent:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)persistedObjectUUIDMap:(id)arg0 foundDuplicateUUID:(id)arg1 firstObjectLocation:(struct TSPObjectLocation )arg2 secondObjectLocation:(struct TSPObjectLocation )arg3 ;
-(void)postprocessMetadata:(id)arg0 ;
-(void)prepareForDocumentUpgradeWithMode:(NSInteger)arg0 ;
-(void)prepareForDocumentUpgradeWithModeImpl:(NSInteger)arg0 ;
-(void)prepareToReadComponentWithIdentifier:(NSInteger)arg0 forObjectIdentifier:(NSInteger)arg1 isWeakReference:(BOOL)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)preprocessMetadata:(id)arg0 ;
-(void)readComponent:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)readComponentAsync:(id)arg0 ;
-(void)readExternalReferenceComponentIfNeededAsyncForObjectIdentifier:(NSInteger)arg0 componentIdentifier:(NSInteger)arg1 isWeak:(BOOL)arg2 fromComponent:(id)arg3 ;
-(void)readPackageMetadataWithComponent:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)readRootObjectWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)reader:(id)arg0 didFindExternalReferenceToObjectIdentifier:(NSInteger)arg1 componentIdentifier:(NSInteger)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 objectClass:(Class)arg5 objectProtocol:(id)arg6 fromParentObject:(id)arg7 completion:(id)arg8 ;
-(void)reader:(id)arg0 didFindExternalRepeatedReference:(id)arg1 isWeak:(BOOL)arg2 allowUnknownObject:(BOOL)arg3 objectClass:(Class)arg4 objectProtocol:(id)arg5 fromParentObject:(id)arg6 completion:(id)arg7 ;
-(void)reader:(id)arg0 didResetObjectIdentifierForObject:(id)arg1 originalObjectIdentifier:(NSInteger)arg2 ;
-(void)reader:(id)arg0 didResetObjectUUID:(id)arg1 forObjectIdentifier:(NSInteger)arg2 originalObjectUUID:(id)arg3 ;
-(void)tearDown;
-(void)updateObjectContextForSuccessfulRead;
-(void)validateDocumentWithOptions:(NSUInteger)arg0 timing:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif