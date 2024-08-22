// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDATAMANAGER_H
#define TSPDATAMANAGER_H

@class TSUTemporaryDirectory, TSUPathSet, NSArray, NSIndexSet, NSSet, NSString, NSDictionary;
@protocol TSPDataManaging, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"

@interface TSPDataManager : NSObject <TSPDataManaging>

 {
    NSObject<OS_dispatch_queue> *_datasQueue;
    NSInteger _nextNewIdentifier;
    IdentifierMap<TSPData *__weak> _identifierToDataMap;
    unordered_map<const std::array<unsigned char, 20>, TSPData *__weak, TSP::DigestHash, TSP::DigestEqualTo, std::allocator<std::pair<const std::array<unsigned char, 20>, TSPData *__weak>>> _digestToDataMap;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    TSUPathSet *_temporaryDirectoryPathSet;
    BOOL _hasExternalReferences;
    NSObject<OS_dispatch_queue> *_externalReferenceRemovalQueue;
    NSObject<OS_dispatch_group> *_externalReferenceRemovalGroup;
}


@property (readonly, nonatomic) NSArray *allData;
@property (readonly, nonatomic) NSIndexSet *allDataIdentifiers;
@property (readonly, weak, nonatomic) TSPObjectContext *context; // ivar: _context
@property (readonly, nonatomic) NSSet *dataWarnings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *digestToDataMap;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *identifierToDataMap;
@property (readonly, nonatomic) NSArray *missingOrUnmaterializedRemoteData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *unmaterializedRemoteData;


+(BOOL)isSupportedURL:(id)arg0 ;
+(void)readWithChannel:(id)arg0 handler:(id)arg1 ;
+(void)readWithChannelImpl:(id)arg0 handler:(id)arg1 ;
+(void)readWithURL:(id)arg0 handler:(id)arg1 ;
-(BOOL)attemptToMaterializeData:(id)arg0 dataURL:(id)arg1 dataURLType:(NSInteger)arg2 ;
-(BOOL)linkOrCloneTemporaryURL:(id)arg0 fromURL:(id)arg1 canLink:(BOOL)arg2 ;
-(BOOL)migrateDataToTemporaryStorageFromPackage:(id)arg0 ;
-(BOOL)prepareSaveWithOldPackage:(id)arg0 saveOperationState:(id)arg1 ;
-(BOOL)prepareTemporaryDataStorageForData:(id)arg0 temporaryDataStorage:(*id)arg1 ;
-(BOOL)shouldAttemptToMaterializeData:(id)arg0 expectedLength:(NSUInteger)arg1 ;
-(id)addNewDataForStorage:(id)arg0 digest:(id)arg1 hasValidatedDigestMatch:(BOOL)arg2 filename:(id)arg3 ;
-(id)copyData:(id)arg0 ;
-(id)dataForDigest:(id)arg0 ;
-(id)dataForDigestImpl:(id)arg0 documentResourceInfo:(id)arg1 skipDocumentResourcesLookup:(BOOL)arg2 expectedLength:(NSUInteger)arg3 accessorBlock:(id)arg4 ;
-(id)dataForDocumentResourceInfo:(id)arg0 fromFileURL:(id)arg1 ;
-(id)dataForExistingData:(id)arg0 digest:(id)arg1 hasValidatedDigestMatch:(BOOL)arg2 filename:(id)arg3 temporaryDataStorageURL:(id)arg4 ;
-(id)dataForIdentifier:(NSInteger)arg0 ;
-(id)dataForIdentifierImpl:(NSInteger)arg0 ;
-(id)dataFromExternalReferenceURL:(id)arg0 filename:(id)arg1 useFileCoordination:(BOOL)arg2 ;
-(id)dataFromFileURL:(id)arg0 filename:(id)arg1 useFileCoordination:(BOOL)arg2 ;
-(id)dataFromNSData:(id)arg0 filename:(id)arg1 ;
-(id)dataFromReadChannel:(id)arg0 filename:(id)arg1 ;
-(id)dataFromReadChannel:(id)arg0 filename:(id)arg1 dataURL:(id)arg2 canLink:(BOOL)arg3 ;
-(id)dataFromURL:(id)arg0 filename:(id)arg1 useFileCoordination:(BOOL)arg2 ;
-(id)dataOrNilForIdentifier:(NSInteger)arg0 ;
-(id)dataWithStorage:(id)arg0 digest:(id)arg1 hasValidatedDigestMatch:(BOOL)arg2 filename:(id)arg3 skipDocumentResourcesLookup:(BOOL)arg4 accessorBlock:(id)arg5 ;
-(id)dataWithTemporaryDataStorageURL:(id)arg0 digest:(id)arg1 hasValidatedDigestMatch:(BOOL)arg2 filename:(id)arg3 ;
-(id)documentResourceDataForInfo:(id)arg0 withStorage:(id)arg1 filename:(id)arg2 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)preferredFilenameForDocumentResourceInfo:(id)arg0 ;
-(id)remoteDataWithURL:(id)arg0 digest:(id)arg1 filename:(id)arg2 length:(NSUInteger)arg3 canDownload:(BOOL)arg4 downloadPriority:(NSInteger)arg5 uploadStatus:(NSInteger)arg6 modificationDate:(id)arg7 ;
-(id)temporaryDataStorageURLForFilename:(id)arg0 ;
-(id)unmaterializedRemoteDataIncludingExpiredUploads:(BOOL)arg0 includingDataNotInDocument:(BOOL)arg1 ;
-(int)openTemporaryURL:(id)arg0 ;
-(void)addData:(id)arg0 ;
-(void)addDataFromPackage:(id)arg0 packageURL:(id)arg1 dataInfo:(*void)arg2 packageMetadata:(id)arg3 documentResourceInfo:(id)arg4 areExternalReferencesAllowed:(BOOL)arg5 ;
-(void)coordinateReadingNewFileURL:(id)arg0 byAccessor:(id)arg1 ;
-(void)dataForDigest:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)dataFromFileURL:(id)arg0 filename:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
-(void)dataFromReadChannel:(id)arg0 filename:(id)arg1 dataURL:(id)arg2 canLink:(BOOL)arg3 completion:(id)arg4 ;
-(void)didCloseDocument;
-(void)didSaveWithSaveOperationState:(id)arg0 ;
-(void)enumerateAllDataUsingBlock:(id)arg0 ;
// -(void)findExistingDataForReadChannel:(id)arg0 dataURL:(id)arg1 dataURLType:(NSInteger)arg2 readHandler:(id)arg3 completion:(unk)arg4  ;
-(void)findExistingDataForReadChannel:(id)arg0 dataURL:(id)arg1 dataURLType:(NSInteger)arg2 temporaryDataStorageURL:(id)arg3 keepTemporaryFileOnSuccess:(BOOL)arg4 completion:(id)arg5 ;
-(void)loadFromPackage:(id)arg0 packageURL:(id)arg1 packageMetadata:(id)arg2 areExternalReferencesAllowed:(BOOL)arg3 dataIdentifiersIndexSet:(*id)arg4 ;
-(void)removeExternalReferenceForData:(id)arg0 storage:(id)arg1 ;
-(void)removeExternalReferences;
-(void)removeFileAtURL:(id)arg0 ;
-(void)waitForRemoveExternalReferencesToComplete;
-(void)willCreateData;


@end


#endif