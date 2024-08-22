// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLTREEENSEMBLEREGRESSOR_H
#define MLTREEENSEMBLEREGRESSOR_H

@class NSData, NSArray, NSString;
@protocol MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler;


#import "MLRegressor.h"

@interface MLTreeEnsembleRegressor : MLRegressor <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler>

 {
    NSData *_model_data;
    vector<unsigned char, std::allocator<unsigned char>> _cached_model;
    NSUInteger num_dimensions;
    NSArray *output_classes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)compileSpecification:(*void)arg0 toArchive:(*void)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compiledVersionForSpecification:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromSpecificationWithCompilationOptions:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
-(CGFloat)scalarRegress:(*CGFloat)arg0 ;
-(CGFloat)scalarRegress:(id)arg0 error:(*id)arg1 ;
-(char *)modelData;
-(id)regress:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)vectorRegress:(*CGFloat)arg0 dest:(*CGFloat)arg1 ;


@end


#endif