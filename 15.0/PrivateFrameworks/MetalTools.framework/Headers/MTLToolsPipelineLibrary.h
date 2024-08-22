// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSPIPELINELIBRARY_H
#define MTLTOOLSPIPELINELIBRARY_H

@class NSString, NSArray;
@protocol MTLPipelineLibrarySPI, MTLDevice, MTLPipelineCache;


#import "MTLToolsObject.h"

@interface MTLToolsPipelineLibrary : MTLToolsObject <MTLPipelineLibrarySPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property BOOL disableRunTimeCompilation;
@property (readonly, nonatomic) NSObject<MTLPipelineCache> *functionCache;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly, nonatomic) NSObject<MTLPipelineCache> *pipelineCache;
@property (readonly) NSArray *pipelineNames;
@property (readonly) Class superclass;


-(id)newComputePipelineDescriptorWithName:(id)arg0 error:(*id)arg1 ;
-(id)newComputePipelineStateWithName:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newRenderPipelineDescriptorWithName:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithName:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;


@end


#endif