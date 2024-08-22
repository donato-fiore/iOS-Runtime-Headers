// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCOMPILER_H
#define MLCOMPILER_H


#import <Foundation/Foundation.h>


@interface MLCompiler : NSObject



+(BOOL)_loadSpecificationAtURL:(id)arg0 to:(*void)arg1 error:(*id)arg2 ;
+(BOOL)canAddMLProgramToCompiledModelAtURL:(id)arg0 ;
+(BOOL)encryptCompiledModelAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(BOOL)encryptFileAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(BOOL)fillCompilerEvent:(id)arg0 withMetadataFromModelAt:(id)arg1 error:(*id)arg2 ;
+(BOOL)fingerprintSpecificationAtURL:(id)arg0 toArchive:(*void)arg1 hash:(id)arg2 error:(*id)arg3 ;
+(BOOL)storeEncryptionInfoInCompiledArchive:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)_compileSpecificationAtURL:(id)arg0 toURL:(id)arg1 compiledModelName:(id)arg2 overridingModelDescription:(id)arg3 options:(id)arg4 error:(*id)arg5 ;
+(id)addMLProgramToCompiledModelAtURL:(id)arg0 error:(*id)arg1 ;
+(id)addMLProgramToCompiledModelAtURL:(id)arg0 withCompilationMode:(int)arg1 dryRun:(BOOL)arg2 oarchiveForModelCompilation:(*void)arg3 compilerEvent:(id)arg4 error:(*id)arg5 ;
+(id)compileModelAtURL:(id)arg0 toURL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compileSpecification:(*void)arg0 toArchive:(*void)arg1 options:(id)arg2 compilerEvent:(id)arg3 error:(*id)arg4 ;
+(id)compileSpecification:(*void)arg0 toArchive:(*void)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compileSpecificationAtURL:(id)arg0 toURL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compiledVersionForModelAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)compiledVersionForSpecification:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)compiledVersionForSpecificationAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)contentsOfDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
+(id)hashSpecificationAtURL:(id)arg0 ;
+(id)versionInfo;
+(void)_updateFeatures:(*void)arg0 withFeatures:(id)arg1 ;
+(void)_updateMetadata:(*void)arg0 withMetadata:(id)arg1 ;
+(void)_updateSpecification:(*void)arg0 withModelDescription:(id)arg1 ;


@end


#endif