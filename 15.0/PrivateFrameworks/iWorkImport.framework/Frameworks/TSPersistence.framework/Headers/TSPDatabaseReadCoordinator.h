// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDATABASEREADCOORDINATOR_H
#define TSPDATABASEREADCOORDINATOR_H

@class NSUUID, NSURL, NSMapTable, NSMutableDictionary, NSString;
@protocol TSPDatabaseReaderDelegate, TSPReadCoordinator, OS_dispatch_queue;


#import "TSPReadCoordinatorBase.h"
#import "TSPObjectContext.h"
#import "TSPFinalizeHandlerQueue.h"
#import "TSPDatabase.h"
#import "TSPDocumentLoadValidationPolicy.h"

@interface TSPDatabaseReadCoordinator : TSPReadCoordinatorBase <TSPDatabaseReaderDelegate, TSPReadCoordinator>

 {
    TSPObjectContext *_context;
    NSUUID *_baseObjectUUID;
    NSURL *_packageURL;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    TSPDatabase *_database;
    NSUInteger _databaseVersion;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMapTable *_dataDictionary;
    NSObject<OS_dispatch_queue> *_appRelativeDataQueue;
    NSMutableDictionary *_appRelativeDataDictionary;
}


@property (readonly, nonatomic) NSUUID *baseObjectUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property (readonly, nonatomic) NSUInteger fileFormatVersion;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) BOOL isReadingFromDocument;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSUInteger readVersion;
@property (readonly, nonatomic) unsigned int sourceType;
@property (readonly) Class superclass;


-(BOOL)endReading;
-(NSInteger)reader:(id)arg0 wantsObjectIdentifierForUUID:(id)arg1 ;
-(id)context;
-(id)createUpgradedOldAppBundleResourcePath:(id)arg0 ;
-(id)dataForAppRelativePath:(id)arg0 filename:(id)arg1 ;
-(id)dataForDatabaseObject:(id)arg0 filename:(id)arg1 ;
-(id)dataForLinkURL:(id)arg0 filename:(id)arg1 ;
-(id)dataForReadChannel:(id)arg0 filename:(id)arg1 linkURL:(id)arg2 ;
-(id)databaseReader:(id)arg0 wantsDataForAppRelativePath:(id)arg1 filename:(id)arg2 ;
-(id)databaseReader:(id)arg0 wantsDataForDatabaseObjectIdentifier:(NSInteger)arg1 filename:(id)arg2 ;
-(id)documentResourceInfoForAppRelativePath:(id)arg0 ;
-(id)externalObjectForIdentifier:(NSInteger)arg0 componentIdentifier:(NSInteger)arg1 isReadFinished:(BOOL)arg2 ;
-(id)init;
-(id)initWithContext:(id)arg0 packageURL:(id)arg1 finalizeHandlerQueue:(id)arg2 error:(*id)arg3 ;
-(id)reader:(id)arg0 wantsDataForIdentifier:(NSInteger)arg1 ;
-(id)unarchivedObjectForIdentifier:(NSInteger)arg0 isReadFinished:(BOOL)arg1 ;
-(void)didReferenceExternalObject:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(void)didUpdateLazyReferenceDelegate:(id)arg0 ;
-(void)readComponent:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)readRootObjectWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)reader:(id)arg0 didFindExternalReferenceToObjectIdentifier:(NSInteger)arg1 componentIdentifier:(NSInteger)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 objectClass:(id)arg5 objectProtocol:(id)arg6 fromParentObject:(id)arg7 completion:(id)arg8 ;
-(void)reader:(id)arg0 didFindExternalRepeatedReference:(id)arg1 isWeak:(BOOL)arg2 allowUnknownObject:(BOOL)arg3 objectClass:(Class)arg4 objectProtocol:(id)arg5 fromParentObject:(id)arg6 completion:(id)arg7 ;
-(void)reader:(id)arg0 didUnarchiveObject:(id)arg1 ;


@end


#endif