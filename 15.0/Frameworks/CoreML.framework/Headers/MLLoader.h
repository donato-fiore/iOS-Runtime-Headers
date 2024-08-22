// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLLOADER_H
#define MLLOADER_H


#import <Foundation/Foundation.h>


@interface MLLoader : NSObject



+(BOOL)checkAssetPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)createDecryptSessionForModelAtURL:(id)arg0 configuration:(id)arg1 decryptSession:(*id)arg2 loaderEvent:(id)arg3 error:(*id)arg4 ;
+(BOOL)unarchiveCodedModelFrom:(*void)arg0 to:(*id)arg1 error:(*id)arg2 ;
+(id)loadModelFromArchive:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromArchive:(*void)arg0 configuration:(id)arg1 loaderEvent:(id)arg2 error:(*id)arg3 ;
+(id)loadModelFromArchive:(*void)arg0 error:(*id)arg1 ;
+(id)loadModelFromAssetAtURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromAssetAtURL:(id)arg0 configuration:(id)arg1 loaderEvent:(id)arg2 error:(*id)arg3 ;
+(id)loadModelFromAssetAtURL:(id)arg0 error:(*id)arg1 ;
+(id)loadUpdatableModelFromArchive:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)loadUpdatableModelFromAssetAtURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;


@end


#endif