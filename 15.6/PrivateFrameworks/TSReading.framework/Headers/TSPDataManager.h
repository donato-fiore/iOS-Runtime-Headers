// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDATAMANAGER_H
#define TSPDATAMANAGER_H

@class NSURL, TSUPathSet;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"

@interface TSPDataManager : NSObject {
    NSObject<OS_dispatch_queue> *_datasQueue;
    NSInteger _nextNewIdentifier;
    unordered_map<const long long, TSPData *__weak, TSP::ObjectIdentifierHash, std::equal_to<const long long>, std::allocator<std::pair<const long long, TSPData *__weak>>> _identifierToDataMap;
    unordered_map<const std::array<unsigned char, 20>, TSPData *__weak, TSP::DataDigestHash, TSP::DataDigestEqualTo, std::allocator<std::pair<const std::array<unsigned char, 20>, TSPData *__weak>>> _digestToDataMap;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    NSURL *_lastDocumentURL;
    NSURL *_temporaryDirectoryURL;
    NSURL *_temporaryUniqueDirectoryURL;
    TSUPathSet *_temporaryPathSet;
    BOOL _hasExternalReferences;
    NSObject<OS_dispatch_group> *_externalReferenceRemovalGroup;
}


@property (readonly, weak, nonatomic) TSPObjectContext *context; // ivar: _context


+(id)stringForDigest:(*void)arg0 ;
+(void)readWithChannel:(id)arg0 handler:(id)arg1 ;
-(BOOL)linkTemporaryPath:(id)arg0 fromURL:(id)arg1 ;
-(id)addNewDataForStorage:(id)arg0 digest:(*void)arg1 filename:(id)arg2 ;
-(id)checkForPersistenceWarningsWithPackageURL:(id)arg0 ;
-(id)copyData:(id)arg0 ;
-(id)createTemporaryDirectoryForPackageURL:(id)arg0 ;
-(id)dataForDigest:(*void)arg0 ;
-(id)dataForDigestImpl:(*void)arg0 accessorBlock:(id)arg1 ;
-(id)dataForDigestImpl:(*void)arg0 skipDocumentResourcesLookup:(BOOL)arg1 accessorBlock:(id)arg2 ;
-(id)dataForExistingData:(id)arg0 digest:(*void)arg1 filename:(id)arg2 temporaryPath:(id)arg3 ;
-(id)dataForIdentifier:(NSInteger)arg0 ;
-(id)dataForIdentifierImpl:(NSInteger)arg0 ;
-(id)dataFromExternalReferenceURL:(id)arg0 useFileCoordination:(BOOL)arg1 ;
-(id)dataFromFileURL:(id)arg0 useFileCoordination:(BOOL)arg1 ;
-(id)dataFromNSData:(id)arg0 filename:(id)arg1 ;
-(id)dataFromReadChannel:(id)arg0 filename:(id)arg1 ;
-(id)dataFromReadChannel:(id)arg0 filename:(id)arg1 linkURLOrNil:(id)arg2 ;
-(id)dataFromReadChannel:(id)arg0 filename:(id)arg1 temporaryPath:(id)arg2 ;
-(id)dataFromURL:(id)arg0 useFileCoordination:(BOOL)arg1 ;
-(id)dataOrNilForIdentifier:(NSInteger)arg0 ;
-(id)dataWithStorage:(id)arg0 digest:(*void)arg1 filename:(id)arg2 skipDocumentResourcesLookup:(BOOL)arg3 accessorBlock:(id)arg4 ;
-(id)dataWithTemporaryPath:(id)arg0 digest:(*void)arg1 filename:(id)arg2 ;
-(id)documentResourceDataWithStorage:(id)arg0 digestString:(id)arg1 filename:(id)arg2 ;
-(id)initWithContext:(id)arg0 ;
-(id)temporaryPathForFilename:(id)arg0 ;
-(int)openTemporaryPath:(id)arg0 ;
-(void)addData:(id)arg0 ;
-(void)coordinateReadingNewFileURL:(id)arg0 byAccessor:(id)arg1 ;
-(void)dataForDigest:(*void)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)didCloseDocument;
-(void)enumerateDatasUsingBlock:(id)arg0 ;
// -(void)findExistingDataForReadChannel:(id)arg0 dataURL:(id)arg1 readHandler:(id)arg2 completion:(unk)arg3  ;
-(void)findExistingDataForReadChannel:(id)arg0 dataURL:(id)arg1 temporaryPath:(id)arg2 shouldWriteIfFound:(BOOL)arg3 completion:(id)arg4 ;
-(void)removeExternalReferenceForData:(id)arg0 storage:(id)arg1 ;
-(void)removeExternalReferences;
-(void)removeFileAtPath:(id)arg0 ;
-(void)removeTemporaryDirectory;
-(void)setDocumentURL:(id)arg0 ;
-(void)waitForRemoveExternalReferencesToComplete;


@end


#endif