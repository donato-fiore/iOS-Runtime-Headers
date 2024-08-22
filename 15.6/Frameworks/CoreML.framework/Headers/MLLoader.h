// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLLOADER_H
#define MLLOADER_H


#import <Foundation/Foundation.h>


@interface MLLoader : NSObject



+(BOOL)checkAssetPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)createDecryptSessionForModelAtURL:(id)arg0 configuration:(id)arg1 decryptSession:(*id)arg2 loaderEvent:(id)arg3 error:(*id)arg4 ;
+(BOOL)unarchiveCodedModelFrom:(*void)arg0 to:(*id)arg1 error:(*id)arg2 ;
+(id)loadModelFromArchive:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromArchive:(*void)arg0 configuration:(id)arg1 loaderEvent:(id)arg2 error:(*id)arg3 ;
+(id)loadModelFromArchive:(*void)arg0 configuration:(id)arg1 loaderEvent:(id)arg2 useUpdatableModelLoaders:(BOOL)arg3 error:(*id)arg4 ;
+(id)loadModelFromArchive:(*void)arg0 error:(*id)arg1 ;
+(id)loadModelFromAssetAtURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromAssetAtURL:(id)arg0 configuration:(id)arg1 loaderEvent:(id)arg2 error:(*id)arg3 ;
+(id)loadModelFromAssetAtURL:(id)arg0 error:(*id)arg1 ;
+(id)loadModelWithClass:(Class)arg0 fromArchive:(*void)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(*id)arg5 ;
+(id)loadUpdatableModelFromArchive:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)loadUpdatableModelFromAssetAtURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)loadUpdatableModelWithClass:(Class)arg0 fromArchive:(*void)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(*id)arg5 ;
+(void)populateLoaderAndPredictionEvent:(id)arg0 model:(id)arg1 configuration:(id)arg2 loadTimeDuration:(NSUInteger)arg3 ;


@end


#endif