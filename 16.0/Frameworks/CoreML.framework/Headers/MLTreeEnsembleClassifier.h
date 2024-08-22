// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLTREEENSEMBLECLASSIFIER_H
#define MLTREEENSEMBLECLASSIFIER_H

@class NSData, NSArray, NSString;
@protocol MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler;


#import "MLClassifier.h"

@interface MLTreeEnsembleClassifier : MLClassifier <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler>

 {
    vector<unsigned char, std::allocator<unsigned char>> _cached_model;
    NSData *_model_data;
    NSUInteger num_dimensions;
    vector<std::string, std::allocator<std::string>> _classes_by_string;
    vector<long long, std::allocator<long long>> _classes_by_int64_t;
    NSInteger _class_type;
    NSArray *_class_values;
    NSString *_single_array_key;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_convertStringClassVector:(*void)arg0 int64ClassVector:(*void)arg1 dimensions:(NSUInteger)arg2 toClassLabel:(*id)arg3 classType:(*NSInteger)arg4 andReturnError:(*id)arg5 ;
+(id)compileSpecification:(*void)arg0 toArchive:(*void)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compiledVersionForSpecification:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromSpecificationWithCompilationOptions:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
-(char *)modelData;
-(id)_buildClassificationClasses:(*CGFloat)arg0 topk:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)classify:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)prepareInput:(id)arg0 error:(*id)arg1 ;
-(void)_setSingleArrayLookupField;


@end


#endif