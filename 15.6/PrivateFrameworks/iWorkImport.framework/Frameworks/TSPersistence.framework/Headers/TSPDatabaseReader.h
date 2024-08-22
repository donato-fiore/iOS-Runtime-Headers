// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDATABASEREADER_H
#define TSPDATABASEREADER_H

@class NSHashTable, NSString;
@protocol TSPDatabaseUnarchiverDelegate, OS_dispatch_queue;


#import "TSPReader.h"
#import "TSPDatabase.h"
#import "TSPComponent.h"

@interface TSPDatabaseReader : TSPReader <TSPDatabaseUnarchiverDelegate>

 {
    NSObject<OS_dispatch_queue> *_databaseQueue;
    TSPDatabase *_database;
    NSUInteger _databaseVersion;
    IdentifierMap<long long> _readIdentifiers;
    NSHashTable *_datas;
}


@property (readonly, nonatomic) TSPComponent *component;
@property (readonly, nonatomic) NSInteger componentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didFinishResolvingReferences;
@property (readonly, nonatomic) NSUInteger fileFormatVersion;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSUInteger readVersion;
@property (readonly, nonatomic) unsigned int sourceType;
@property (readonly) Class superclass;


-(*void)filterIdentifiers:(*void)arg0 ;
-(BOOL)validateObjectIdentifierForObject:(id)arg0 ;
-(id)appRelativePathForOldDataArchive:(*void)arg0 ;
-(id)dataForIdentifier:(NSInteger)arg0 referencedByObjectIdentifier:(NSInteger)arg1 objectClass:(Class)arg2 ;
-(id)dataForOldDataArchive:(*void)arg0 ;
-(id)filenameFromOldDataArchive:(*void)arg0 ;
-(id)initWithComponent:(id)arg0 finalizeHandlerQueue:(id)arg1 delegate:(id)arg2 ;
-(id)initWithComponent:(id)arg0 finalizeHandlerQueue:(id)arg1 delegate:(id)arg2 database:(id)arg3 databaseVersion:(NSUInteger)arg4 ;
-(id)newUnarchiverWithDatabaseObject:(id)arg0 ;
-(id)objectUUIDMap;
-(struct Message *)newDataMessageForDatabaseObject:(id)arg0 ;
-(struct Message *)newImageDataMessageForDatabaseObject:(id)arg0 ;
-(void)beginReadingWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didUnarchiveObject:(id)arg0 withUnarchiver:(id)arg1 ;
-(void)enumerateDataAppRelativePathsUsingBlock:(id)arg0 ;
-(void)resolveReferences;
-(void)unarchiveObjectWithIdentifierAsync:(NSInteger)arg0 referencedByObjectIdentifier:(NSInteger)arg1 objectClass:(Class)arg2 ;


@end


#endif