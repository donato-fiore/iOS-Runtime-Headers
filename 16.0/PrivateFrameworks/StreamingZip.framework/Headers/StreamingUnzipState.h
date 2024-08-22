// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STREAMINGUNZIPSTATE_H
#define STREAMINGUNZIPSTATE_H

@class NSArray, NSMutableData, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface StreamingUnzipState : NSObject {
    ? _cmpState;
    NSUInteger _lastResumptionSavedOffset;
    NSArray *_hashes;
}


@property (readonly, nonatomic) NSUInteger bytesHashedInChunk; // ivar: _bytesHashedInChunk
@property (readonly, nonatomic) *? cmpState;
@property (nonatomic) NSUInteger currentCRC32; // ivar: _currentCRC32
@property (nonatomic) unsigned short currentLFMode; // ivar: _currentLFMode
@property (nonatomic) *? currentLFRecord; // ivar: _currentLFRecord
@property (nonatomic) NSUInteger currentLFRecordAllocationSize; // ivar: _currentLFRecordAllocationSize
@property (nonatomic) BOOL currentLFRequiresDataDescriptor; // ivar: _currentLFRequiresDataDescriptor
@property (nonatomic) NSUInteger currentOffset; // ivar: _currentOffset
@property (nonatomic) int currentOutputFD; // ivar: _currentOutputFD
@property (nonatomic) *? dataDescriptor; // ivar: _dataDescriptor
@property (nonatomic) BOOL denyInvalidSymlinks; // ivar: _denyInvalidSymlinks
@property (readonly, nonatomic) ? hashContext; // ivar: _hashContext
@property (readonly, nonatomic) NSUInteger hashedChunkSize; // ivar: _hashedChunkSize
@property (retain, nonatomic) NSMutableData *inMemoryFileData; // ivar: _inMemoryFileData
@property (retain, nonatomic) NSString *lastChunkPartialHash; // ivar: _lastChunkPartialHash
@property (nonatomic) BOOL performCachedWrites; // ivar: _performCachedWrites
@property (nonatomic) BOOL performingExtraction; // ivar: _performingExtraction
@property (nonatomic) NSUInteger recordsProcessed; // ivar: _recordsProcessed
@property (nonatomic) BOOL storeCurrentFileInMemory; // ivar: _storeCurrentFileInMemory
@property (retain, nonatomic) NSDictionary *streamInfoDict; // ivar: _streamInfoDict
@property (nonatomic) unsigned char streamState; // ivar: _streamState
@property (nonatomic) NSUInteger thisStageBytesComplete; // ivar: _thisStageBytesComplete
@property (nonatomic) NSUInteger totalFileSizeWritten; // ivar: _totalFileSizeWritten
@property (nonatomic) NSUInteger totalRecordCount; // ivar: _totalRecordCount
@property (nonatomic) NSUInteger totalUncompressedBytes; // ivar: _totalUncompressedBytes
@property (nonatomic) NSUInteger uncompressedBytesOutput; // ivar: _uncompressedBytesOutput
@property (retain, nonatomic) NSMutableData *unsureData; // ivar: _unsureData
@property (readonly, nonatomic) NSString *unzipPath; // ivar: _unzipPath


+(id)unzipStateWithPath:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)openCurrentOutputFDForPath:(id)arg0 withOpenFlags:(int)arg1 mode:(unsigned short)arg2 error:(*id)arg3 ;
-(id)_checkHashForOffset:(NSUInteger)arg0 ;
-(id)checkLastChunkPartialHash;
-(id)finishStream;
-(id)init;
-(id)initWithPath:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)serializeState;
-(id)updateHashFromOffset:(NSUInteger)arg0 withBytes:(*void)arg1 length:(NSUInteger)arg2 ;
-(id)updateHashFromOffset:(NSUInteger)arg0 withBytes:(*void)arg1 length:(NSUInteger)arg2 onlyFinishCurrentChunk:(BOOL)arg3 ;
-(void)_internalSetStreamState:(unsigned char)arg0 ;
-(void)clearSavedState;
-(void)dealloc;
-(void)markResumptionPoint;


@end


#endif