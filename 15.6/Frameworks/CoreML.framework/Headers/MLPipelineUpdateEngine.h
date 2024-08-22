// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPIPELINEUPDATEENGINE_H
#define MLPIPELINEUPDATEENGINE_H

@class NSString;
@protocol MLUpdatable, OS_dispatch_queue;


#import "MLPipeline.h"
#import "MLUpdateProgressHandlers.h"

@interface MLPipelineUpdateEngine : MLPipeline <MLUpdatable>

 {
    vector<unsigned long long, std::allocator<unsigned long long>> _updatableModelIndicies;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (retain) MLUpdateProgressHandlers *progressHandlers; // ivar: _progressHandlers
@property (readonly) Class superclass;
@property ? updatableModelIndicies;


+(id)loadModelFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)initFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(void)resumeUpdateWithParameters:(id)arg0 ;
-(void)updateModelWithData:(id)arg0 ;


@end


#endif