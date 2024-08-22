// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANALYTICSWORKSPACE_H
#define ANALYTICSWORKSPACE_H

@class NSString, NSXPCConnection, NSManagedObjectContext, NSManagedObjectModel, NSBundle, NSPersistentStoreCoordinator, NSError;
@protocol NSCopying, AnalyticsWorkspaceHealthDelegate;

#import <Foundation/Foundation.h>


@interface AnalyticsWorkspace : NSObject <NSCopying>

 {
    NSString *backingStore;
    BOOL readOnly;
    BOOL pathKnownToFail;
    NSString *storeKind;
    NSString *storeProt;
}


@property (readonly, retain, nonatomic) NSXPCConnection *connection; // ivar: __connection
@property (nonatomic) BOOL forceDeleteFile; // ivar: _forceDeleteFile
@property (nonatomic) BOOL forceDestroyPersistentStore; // ivar: _forceDestroyPersistentStore
@property (nonatomic) BOOL forceIntegrityCheck; // ivar: _forceIntegrityCheck
@property (retain, nonatomic) NSObject<AnalyticsWorkspaceHealthDelegate> *healthDelegate; // ivar: _healthDelegate
@property (readonly, nonatomic) BOOL integrityCheckFailed; // ivar: _integrityCheckFailed
@property (readonly, retain, nonatomic) NSManagedObjectContext *mainObjectContext; // ivar: __mainObjectContext
@property (readonly, retain, nonatomic) NSManagedObjectModel *objectModel; // ivar: __objectModel
@property (retain, nonatomic) NSString *objectModelName; // ivar: _objectModelName
@property (retain, nonatomic) NSBundle *objectModelResidentBundle; // ivar: _objectModelResidentBundle
@property (readonly, nonatomic) BOOL persistent; // ivar: __persistent
@property (readonly, retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: __persistentStoreCoordinator
@property (retain, nonatomic) NSError *persistentStoreError; // ivar: _persistentStoreError
@property (copy, nonatomic) id *resetCompletionBlock; // ivar: __resetCompletionBlock


+(id)defaultWorkspace;
+(id)workspaceWithName:(id)arg0 atPath:(id)arg1 objectModelName:(id)arg2 objectModelBundle:(id)arg3 useReadOnly:(BOOL)arg4 ;
+(id)workspaceWithName:(id)arg0 atPath:(id)arg1 objectModelName:(id)arg2 objectModelBundle:(id)arg3 useReadOnly:(BOOL)arg4 legacyDBContainerPathToMigrate:(id)arg5 ;
+(id)workspaceWithName:(id)arg0 atPath:(id)arg1 useReadOnly:(BOOL)arg2 ;
+(void)initialize;
+(void)retrieveWorkspaceWithName:(id)arg0 atPath:(id)arg1 queue:(id)arg2 resultCallback:(id)arg3 ;
-(BOOL)_primePath:(id)arg0 ;
-(BOOL)canCloneObjectsOfType:(id)arg0 ;
-(BOOL)save;
-(BOOL)setCustomPersistenceProperties:(id)arg0 ;
-(id)_cloneInternal:(id)arg0 intoWorkspace:(id)arg1 ancestry:(id)arg2 iteration:(NSUInteger)arg3 mustFail:(*BOOL)arg4 ;
-(id)_initWithName:(id)arg0 inMemory:(BOOL)arg1 useReadOnly:(BOOL)arg2 customModelName:(id)arg3 loadModelFromBundle:(id)arg4 ;
-(id)cloneObject:(id)arg0 intoWorkspace:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createNewContext;
-(id)initInMemoryWorkspaceWithName:(id)arg0 customModelName:(id)arg1 objectModelBundle:(id)arg2 ;
-(id)initWorkspaceWithName:(id)arg0 atPath:(id)arg1 objectModelName:(id)arg2 objectModelBundle:(id)arg3 useReadOnly:(BOOL)arg4 ;
-(id)initWorkspaceWithName:(id)arg0 atPath:(id)arg1 useReadOnly:(BOOL)arg2 ;
-(id)initWorkspaceWithService:(id)arg0 ;
-(void)_migrateDBFile:(id)arg0 ;
-(void)dealloc;
-(void)enumerateResidentObjectsOfType:(id)arg0 usingBlock:(id)arg1 ;
-(void)reset;


@end


#endif