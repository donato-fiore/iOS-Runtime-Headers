// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPFILEMANAGER_H
#define TSPFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface TSPFileManager : NSObject



+(BOOL)copyDataFromReadChannel:(id)arg0 decryptionInfo:(id)arg1 size:(NSUInteger)arg2 toWriteChannel:(id)arg3 encryptionInfo:(id)arg4 encodedLength:(*NSUInteger)arg5 error:(*id)arg6 ;
+(BOOL)linkOrCloneItemAtURL:(id)arg0 toURL:(id)arg1 canLink:(BOOL)arg2 canClone:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)linkOrCloneItemAtURL:(id)arg0 toURL:(id)arg1 canLink:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)linkOrCopyItemAtURL:(id)arg0 decryptionInfo:(id)arg1 toURL:(id)arg2 encryptionInfo:(id)arg3 canLink:(BOOL)arg4 encodedLength:(*NSUInteger)arg5 error:(*id)arg6 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 sourcePath:(id)arg2 targetPath:(id)arg3 ;
+(id)ioCompletionQueue;
+(void)copyDataFromReadChannel:(id)arg0 decryptionInfo:(id)arg1 size:(NSUInteger)arg2 toWriteChannel:(id)arg3 encryptionInfo:(id)arg4 synchronous:(BOOL)arg5 completion:(id)arg6 ;
+(void)copyDataFromReadChannel:(id)arg0 decryptionInfo:(id)arg1 toWriteChannel:(id)arg2 encryptionInfo:(id)arg3 completion:(id)arg4 ;
+(void)copyDataFromReadChannel:(id)arg0 size:(NSUInteger)arg1 toWriteChannel:(id)arg2 synchronous:(BOOL)arg3 completion:(id)arg4 ;
+(void)transcodeReadChannel:(id)arg0 decryptionInfo:(id)arg1 size:(NSUInteger)arg2 toWriteChannel:(id)arg3 encryptionInfo:(id)arg4 synchronous:(BOOL)arg5 completion:(id)arg6 ;


@end


#endif