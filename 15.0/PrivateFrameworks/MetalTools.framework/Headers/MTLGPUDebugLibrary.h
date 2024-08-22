// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLGPUDEBUGLIBRARY_H
#define MTLGPUDEBUGLIBRARY_H



#import "MTLToolsLibrary.h"

@interface MTLGPUDebugLibrary : MTLToolsLibrary



-(id)initWithLibrary:(id)arg0 device:(id)arg1 ;
-(id)newFunctionWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newFunctionWithName:(id)arg0 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 error:(*id)arg2 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 functionCache:(id)arg2 error:(*id)arg3 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 pipelineLibrary:(id)arg2 error:(*id)arg3 ;
-(id)newIntersectionFunctionWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(void)newFunctionWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newFunctionWithName:(id)arg0 constantValues:(id)arg1 completionHandler:(id)arg2 ;
-(void)newFunctionWithName:(id)arg0 constantValues:(id)arg1 pipelineLibrary:(id)arg2 completionHandler:(id)arg3 ;
-(void)newIntersectionFunctionWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif