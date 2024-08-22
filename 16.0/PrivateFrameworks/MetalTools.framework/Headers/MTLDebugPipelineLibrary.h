// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLDEBUGPIPELINELIBRARY_H
#define MTLDEBUGPIPELINELIBRARY_H

@class NSString;


#import "MTLToolsPipelineLibrary.h"

@interface MTLDebugPipelineLibrary : MTLToolsPipelineLibrary

@property (copy, nonatomic) NSString *filePath; // ivar: _filePath


-(id)initWithLibrary:(id)arg0 parent:(id)arg1 filePath:(id)arg2 ;
-(id)newComputePipelineStateWithName:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newRenderPipelineStateWithName:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif