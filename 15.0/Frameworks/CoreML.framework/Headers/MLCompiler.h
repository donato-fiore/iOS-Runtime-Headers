// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCOMPILER_H
#define MLCOMPILER_H


#import <Foundation/Foundation.h>


@interface MLCompiler : NSObject



+(BOOL)encryptCompiledModelAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(BOOL)encryptFileAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(BOOL)fingerprintSpecificationAtURL:(id)arg0 toArchive:(*void)arg1 error:(*id)arg2 ;
+(BOOL)storeEncryptionInfoInCompiledArchive:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)_compileSpecificationAtURL:(id)arg0 toURL:(id)arg1 compiledModelName:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(id)compileModelAtURL:(id)arg0 toURL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compileSpecification:(*void)arg0 toArchive:(*void)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compileSpecificationAtURL:(id)arg0 toURL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compiledVersionForModelAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)compiledVersionForSpecification:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)compiledVersionForSpecificationAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)contentsOfDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
+(id)versionInfo;


@end


#endif