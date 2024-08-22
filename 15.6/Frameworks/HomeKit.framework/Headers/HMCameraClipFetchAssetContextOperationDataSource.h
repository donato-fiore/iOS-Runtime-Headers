// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCAMERACLIPFETCHASSETCONTEXTOPERATIONDATASOURCE_H
#define HMCAMERACLIPFETCHASSETCONTEXTOPERATIONDATASOURCE_H

@class NSString;
@protocol HMCameraClipFetchAssetContextOperationDataSource;

#import <Foundation/Foundation.h>


@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject <HMCameraClipFetchAssetContextOperationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)copyItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeItemAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 toFileURL:(id)arg1 error:(*id)arg2 ;
-(id)createTemporaryDirectoryAppropriateForURL:(id)arg0 error:(*id)arg1 ;
-(id)createVideoFileCombinerWithVideoFileURLs:(id)arg0 queue:(id)arg1 ;
-(id)dataFromEncryptedDataContext:(id)arg0 usingDecryptionManager:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg0 httpHeaderFields:(id)arg1 ;
-(id)outputStreamToFileAtURL:(id)arg0 shouldAppend:(BOOL)arg1 ;


@end


#endif