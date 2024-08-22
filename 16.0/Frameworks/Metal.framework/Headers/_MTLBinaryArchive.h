// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLBINARYARCHIVE_H
#define _MTLBINARYARCHIVE_H

@class MTLObjectWithLabel, NSData, NSMutableDictionary, NSString, NSArray, NSMutableArray;
@protocol MTLBinaryArchiveSPI, MTLLibrarySPI, OS_dispatch_queue, MTLDevice;


#import "MTLLoadedFile.h"

@interface _MTLBinaryArchive : MTLObjectWithLabel <MTLBinaryArchiveSPI>

 {
    MTLLoadedFile *_fileMapping;
    NSData *_fileData;
    unsigned int _internalArchiverId;
    BOOL _isLegacy;
    char * _archiveIDInt;
    id<MTLLibrarySPI> *_machOLib;
    NSObject<OS_dispatch_queue> *_queue;
    unordered_map<MTLFunctionId, std::pair<unsigned long long, unsigned long long>, CompareFunctionIdHash, CompareFunctionIdHash, std::allocator<std::pair<const MTLFunctionId, std::pair<unsigned long long, unsigned long long>>>> _executableFileIndex;
    unordered_map<unsigned long long, std::vector<MTLFunctionId>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::vector<MTLFunctionId>>>> _airntBinaryList;
    vector<MTLAirNTObject *, std::allocator<MTLAirNTObject *>> _airntObjectList;
    vector<MTLPipelineNTObject *, std::allocator<MTLPipelineNTObject *>> _airntPipelineList;
    map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> _legacyPipelineFileIndex;
    vector<functionIdExtended, std::allocator<functionIdExtended>> _airntExtraBinaryEntries;
    NSMutableDictionary *_entries;
    unique_ptr<MTLPipelineCollection, std::default_delete<MTLPipelineCollection>> _pipelineCollection;
    BOOL _collectArchives;
    unordered_map<MTLUINT256_t, NSObject<OS_dispatch_data> *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, NSObject<OS_dispatch_data> *>>> _legacySpecializedFunctions;
    map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> _legacySpecializedFunctionArchiveFileIndex;
    NSUInteger _specializedFunctionArchiveOffset;
    NSUInteger _specializedFunctionArchiveBytes;
    map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> _recompilationArchiveFileIndex;
    NSUInteger _recompilationArchiveOffset;
    NSUInteger _recompilationArchiveBytes;
    unordered_map<MTLUINT256_t, MTLProgramObject *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, MTLProgramObject *>>> _variantMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;
@property (readonly) NSMutableArray *unmaterializedAIRNTFunctionHashes;
@property (readonly) NSMutableArray *unmaterializedArchiveHashes;
@property (readonly) NSMutableArray *unmaterializedFunctionHashes;


+(BOOL)deserializeBinaryArchiveDescriptorMachO:(struct ? *)arg0 fileData:(id)arg1 ;
+(BOOL)deserializeBinaryArchiveHeader:(struct ? *)arg0 fileData:(id)arg1 device:(id)arg2 ;
+(id)descriptorDataForArchive:(id)arg0 ;
+(struct MTLLoaderSliceIdentifier )sliceIDForSpecializedFunctions;
+(unsigned int)archiveTypeAtURL:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
+(unsigned int)archiveVersionCompatible:(struct MachOToolsVersion )arg0 vendorVersion:(unsigned int)arg1 ;
-(*void)findProgramObjectForFunction:(struct ? *)arg0 ;
-(*void)pipelineCollection;
-(*void)programObjectForFunction:(struct ? *)arg0 ;
-(?)newFunctionWithAIRNTObjecterror;
-(?)newLibraryInArchiveAtPoserror;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addFunctionWithDescriptor:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
-(BOOL)addLibraryWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addMeshRenderPipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addMeshRenderPipelineFunctionsWithDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)airntSerializeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)enumerateArchivesFromBackingFile:(id)arg0 ;
-(BOOL)enumerateArchivesFromBackingFileFromSlice:(struct MTLLoaderSliceIdentifier *)arg0 version:(NSUInteger)arg1 verifyKey:(struct ? *)arg2 offset:(NSUInteger)arg3 bytes:(NSUInteger)arg4 enumerator:(id)arg5 ;
-(BOOL)enumerateArchivesFromPipelineCollection:(id)arg0 ;
-(BOOL)enumerateSpecializedFunctionArchivesFromBackingFile:(id)arg0 ;
-(BOOL)getSpecializedFunctionArchivesToSerialize:(*void)arg0 ;
-(BOOL)legacySerializeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)loadAirntBlocksForSlice:(struct MTLLoaderSliceIdentifier *)arg0 sliceOffset:(NSUInteger)arg1 skipAIRValidation:(BOOL)arg2 ;
-(BOOL)loadFileIndex:(*void)arg0 expectedSliceId:(struct MTLLoaderSliceIdentifier *)arg1 expectedVersion:(NSUInteger)arg2 sliceOffset:(NSUInteger)arg3 ;
-(BOOL)loadFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeComputePipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)serializeToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)serializeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)storeComputePipelineDescriptor:(id)arg0 ;
-(BOOL)storeMeshRenderPipelineDescriptor:(id)arg0 ;
-(BOOL)storeRenderPipelineDescriptor:(id)arg0 ;
-(BOOL)storeTileRenderPipelineDescriptor:(id)arg0 ;
-(BOOL)storingReflectionIsSupported;
-(BOOL)supportsAIRNT;
-(BOOL)supportsStoringCompileOutput:(int)arg0 ;
-(NSUInteger)count;
-(NSUInteger)recompilablePipelineCount;
-(char *)mapFileToMemoryWithPath:(char *)arg0 fileSize:(*NSUInteger)arg1 ;
-(id)archiveFunctionIds;
-(id)flatBufferFromJSON:(id)arg0 schema:(char *)arg1 schemaSize:(NSUInteger)arg2 ;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)getArchiveDataForKey:(struct ? *)arg0 ;
-(id)getArchiveIDWithError:(*id)arg0 ;
-(id)getBinaryDataForKey:(id)arg0 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 error:(*id)arg2 ;
-(id)initWithOptions:(NSUInteger)arg0 device:(id)arg1 url:(id)arg2 error:(*id)arg3 ;
-(id)mapFileToMemoryWithPath:(char *)arg0 ;
-(id)materializeAIRNTBlockForKey:(id)arg0 ;
-(id)materializeAirScript:(struct MTLAirNTObject *)arg0 ;
-(id)materializeBitCode:(struct MTLAirNTObject *)arg0 ;
-(id)materializeDriverReflection:(struct MTLAirNTObject *)arg0 ;
// -(id)materializeEntryForKey:(struct ? *)arg0 fileIndex:(*void)arg1 containsEntry:(id)arg2 addEntry:(unk)arg3  ;
-(id)materializeFromFileOffset:(NSUInteger)arg0 hash:(struct ? *)arg1 ;
-(id)materializeFromHash:(struct ? *)arg0 fileIndex:(*void)arg1 ;
-(id)materializePostLoaderReflection:(struct MTLAirNTObject *)arg0 ;
-(id)newArchiverIdWithFunctionId:(struct MTLFunctionId *)arg0 srcArchiverId:(id)arg1 functionType:(NSUInteger)arg2 ;
-(id)newComputePipelineDescriptorWithScript:(struct PipelineScript *)arg0 ;
-(id)newMeshRenderPipelineDescriptorWithScript:(struct PipelineScript *)arg0 ;
-(id)newPipelineDescriptorAtIndex:(NSUInteger)arg0 pipelineType:(*unsigned int)arg1 error:(*id)arg2 ;
-(id)newRenderPipelineDescriptorWithScript:(struct PipelineScript *)arg0 ;
-(id)newTileRenderPipelineDescriptorWithScript:(struct PipelineScript *)arg0 ;
-(void)addAirntExtraDataWithFunctionId:(struct MTLFunctionId *)arg0 descriptor:(*void)arg1 bitcode:(id)arg2 ;
-(void)addArchiveEntry:(id)arg0 forKey:(struct ? *)arg1 ;
-(void)addBinaryEntry:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)deallocContainers;
-(void)materializeAirNTAllForSlice:(struct MTLLoaderSliceIdentifier *)arg0 entryList:(*void)arg1 ;
-(void)materializeAirNTFromOnlineForSlice:(struct MTLLoaderSliceIdentifier *)arg0 entryList:(*void)arg1 ;
-(void)materializeAll;
-(void)materializeAllAIRNTLegacy;
-(void)updatePipelineWithPipelineArchiverId:(id)arg0 functionType:(NSUInteger)arg1 ;


@end


#endif