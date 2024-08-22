// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MTLBINARYARCHIVE_H
#define _MTLBINARYARCHIVE_H

@class MTLObjectWithLabel, NSData, NSMutableDictionary, NSString, NSArray;
@protocol MTLBinaryArchiveSPI, OS_dispatch_queue, MTLDevice;


#import "MTLLoadedFile.h"

@interface _MTLBinaryArchive : MTLObjectWithLabel <MTLBinaryArchiveSPI>

 {
    MTLLoadedFile *_fileMapping;
    NSData *_fileData;
    NSObject<OS_dispatch_queue> *_queue;
    map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> _pipelineFileIndex;
    NSMutableDictionary *_entries;
    unique_ptr<MTLPipelineCollection, std::default_delete<MTLPipelineCollection>> _pipelineCollection;
    BOOL _collectArchives;
    unordered_map<MTLUINT256_t, NSObject<OS_dispatch_data> *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, NSObject<OS_dispatch_data> *>>> _specializedFunctions;
    map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> _specializedFunctionArchiveFileIndex;
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


+(BOOL)deserializeBinaryArchiveDescriptorMachO:(struct ? *)arg0 fileData:(id)arg1 ;
+(BOOL)deserializeBinaryArchiveHeader:(struct ? *)arg0 fileData:(id)arg1 device:(id)arg2 ;
+(id)descriptorDataForArchive:(id)arg0 ;
+(struct MTLLoaderSliceIdentifier )sliceIDForSpecializedFunctions;
-(*void)findProgramObjectForFunction:(struct ? *)arg0 ;
-(*void)pipelineCollection;
-(*void)programObjectForFunction:(struct ? *)arg0 ;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addFunctionWithDescriptor:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
-(BOOL)addLibraryWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)enumerateArchivesFromBackingFile:(id)arg0 ;
-(BOOL)enumerateArchivesFromBackingFileFromSlice:(struct MTLLoaderSliceIdentifier *)arg0 version:(NSUInteger)arg1 verifyKey:(struct ? *)arg2 offset:(NSUInteger)arg3 bytes:(NSUInteger)arg4 enumerator:(id)arg5 ;
-(BOOL)enumerateArchivesFromPipelineCollection:(id)arg0 ;
-(BOOL)enumerateSpecializedFunctionArchivesFromBackingFile:(id)arg0 ;
-(BOOL)getSpecializedFunctionArchivesToSerialize:(*void)arg0 ;
-(BOOL)loadFileIndex:(*void)arg0 expectedSliceId:(struct MTLLoaderSliceIdentifier *)arg1 expectedVersion:(NSUInteger)arg2 sliceOffset:(NSUInteger)arg3 ;
-(BOOL)removeComputePipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)serializeToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)serializeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)storeComputePipelineDescriptor:(id)arg0 ;
-(BOOL)storeRenderPipelineDescriptor:(id)arg0 ;
-(BOOL)storeTileRenderPipelineDescriptor:(id)arg0 ;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)getArchiveDataForKey:(struct ? *)arg0 ;
-(id)getBinaryDataForKey:(id)arg0 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 error:(*id)arg2 ;
-(id)initWithOptions:(NSUInteger)arg0 device:(id)arg1 url:(id)arg2 error:(*id)arg3 ;
// -(id)materializeEntryForKey:(struct ? *)arg0 fileIndex:(*void)arg1 containsEntry:(id)arg2 addEntry:(unk)arg3  ;
-(id)materializeFromFileOffset:(NSUInteger)arg0 hash:(struct ? *)arg1 ;
-(id)materializeFromHash:(struct ? *)arg0 fileIndex:(*void)arg1 ;
-(void)addArchiveEntry:(id)arg0 forKey:(struct ? *)arg1 ;
-(void)addBinaryEntry:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)materializeAll;


@end


#endif