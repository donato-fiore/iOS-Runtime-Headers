// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPERSISTENTSTORE_H
#define NSPERSISTENTSTORE_H

@class NSString, NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "NSPersistentStoreCoordinator.h"
#import "NSCoreDataCoreSpotlightDelegate.h"

@interface NSPersistentStore : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSString *_configurationName;
    NSURL *_url;
    NSDictionary *_options;
    *id _oidFactories;
    id *_defaultFaultHandler;
    _objectStoreFlags _flags;
    *void _temporaryIDClass;
    id *_coreSpotlightDelegate;
    id *_managedObjectModel;
    *__CFSet _entitiesInConfiguration;
}


@property (retain) NSURL *URL;
@property (readonly, copy) NSString *configurationName;
@property (readonly, nonatomic) NSCoreDataCoreSpotlightDelegate *coreSpotlightExporter;
@property (copy) NSString *identifier;
@property (retain, nonatomic) NSDictionary *metadata;
@property (readonly) NSDictionary *options;
@property (readonly, weak, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (getter=isReadOnly) BOOL readOnly;
@property (readonly, copy) NSString *type;


+(BOOL)_destroyPersistentStoreAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(BOOL)_rekeyPersistentStoreAtURL:(id)arg0 options:(id)arg1 withKey:(id)arg2 error:(*id)arg3 ;
+(BOOL)_replacePersistentStoreAtURL:(id)arg0 destinationOptions:(id)arg1 withPersistentStoreFromURL:(id)arg2 sourceOptions:(id)arg3 error:(*id)arg4 ;
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)doURLStuff:(id)arg0 createdStubFile:(*BOOL)arg1 readOnly:(*BOOL)arg2 error:(*id)arg3 options:(id)arg4 ;
+(Class)migrationManagerClass;
+(Class)rowCacheClass;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg0 ;
+(id)cachedModelForPersistentStoreWithURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)metadataForPersistentStoreWithURL:(id)arg0 error:(*id)arg1 ;
+(void)initialize;
-(BOOL)_hasActiveGenerations;
-(BOOL)_isCloudKitOptioned;
-(BOOL)_isPersistentStoreAlive;
-(BOOL)_prepareForExecuteRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)_unload:(*id)arg0 ;
-(BOOL)finishDeferredLightweightMigration:(BOOL)arg0 withError:(*id)arg1 ;
-(BOOL)isCloudKitEnabled;
-(BOOL)load:(*id)arg0 ;
-(BOOL)loadMetadata:(*id)arg0 ;
-(BOOL)supportsConcurrentRequestHandling;
-(BOOL)supportsGenerationalQuerying;
-(Class)_objectIDClass;
-(NSUInteger)entityIDForEntityDescription:(id)arg0 ;
-(id)_allOrderKeysForDestination:(id)arg0 inRelationship:(id)arg1 error:(*id)arg2 ;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)_rawMetadata__;
-(id)_storeInfoForEntityDescription:(id)arg0 ;
-(id)_updatedMetadataWithSeed:(id)arg0 includeVersioning:(BOOL)arg1 ;
-(id)ancillaryModels;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentChangeToken;
-(id)currentQueryGeneration;
-(id)description;
-(id)executeRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithPersistentStoreCoordinator:(id)arg0 configurationName:(id)arg1 URL:(id)arg2 options:(id)arg3 ;
-(id)mirroringDelegate;
-(id)newValueForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)newValuesForObjectWithID:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)objectIDFactoryForEntity:(id)arg0 ;
-(id)obtainPermanentIDsForObjects:(id)arg0 error:(*id)arg1 ;
-(id)propertyNamesInHistoryChangeDataForEntityDescription:(id)arg0 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(struct __CFSet *)_entitiesForConfiguration;
-(void)_didLoadMetadata;
-(void)_preflightCrossCheck;
-(void)_rebuildIndiciesSynchronously:(BOOL)arg0 ;
-(void)_setupObserver;
-(void)dealloc;
-(void)didAddToPersistentStoreCoordinator:(id)arg0 ;
-(void)doFilesystemCleanupOnRemove:(BOOL)arg0 ;
-(void)freeQueryGenerationWithIdentifier:(id)arg0 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg0 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg0 generation:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg0 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg0 generation:(id)arg1 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg0 ;


@end


#endif