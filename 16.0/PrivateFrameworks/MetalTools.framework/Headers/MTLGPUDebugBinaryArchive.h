// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUDEBUGBINARYARCHIVE_H
#define MTLGPUDEBUGBINARYARCHIVE_H



#import "MTLToolsBinaryArchive.h"

@interface MTLGPUDebugBinaryArchive : MTLToolsBinaryArchive



-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithBinaryArchive:(id)arg0 device:(id)arg1 ;


@end


#endif