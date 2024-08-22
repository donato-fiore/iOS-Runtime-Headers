// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSBINARYARCHIVE_H
#define MTLTOOLSBINARYARCHIVE_H

@class NSString, NSArray;
@protocol MTLBinaryArchiveSPI, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsBinaryArchive : MTLToolsObject <MTLBinaryArchiveSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) NSUInteger options;
@property (readonly) Class superclass;


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
-(BOOL)enumerateArchivesFromBackingFile:(id)arg0 ;
-(BOOL)enumerateArchivesFromPipelineCollection:(id)arg0 ;
-(BOOL)serializeToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)serializeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)storeComputePipelineDescriptor:(id)arg0 ;
-(BOOL)storeMeshRenderPipelineDescriptor:(id)arg0 ;
-(BOOL)storeRenderPipelineDescriptor:(id)arg0 ;
-(BOOL)storeTileRenderPipelineDescriptor:(id)arg0 ;
-(NSUInteger)recompilablePipelineCount;
-(id)archiveFunctionIds;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)getArchiveDataForKey:(struct ? *)arg0 ;
-(id)getArchiveIDWithError:(*id)arg0 ;
-(id)getBinaryDataForKey:(id)arg0 ;
-(id)newPipelineDescriptorAtIndex:(NSUInteger)arg0 pipelineType:(*unsigned int)arg1 error:(*id)arg2 ;
-(struct MTLPipelineCollection *)pipelineCollection;
-(void)addArchiveEntry:(id)arg0 forKey:(struct ? *)arg1 ;
-(void)addBinaryEntry:(id)arg0 forKey:(id)arg1 ;


@end


#endif