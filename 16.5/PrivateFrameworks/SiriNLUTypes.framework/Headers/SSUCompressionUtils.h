// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSUCOMPRESSIONUTILS_H
#define SSUCOMPRESSIONUTILS_H


#import <Foundation/Foundation.h>


@interface SSUCompressionUtils : NSObject



+(BOOL)_compressArchiveForData:(id)arg0 outputFileURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)compressArchiveForSSUFile:(id)arg0 outputFileURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)compressArchiveForSSUFileURL:(id)arg0 outputFileURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)decompressFromCompressedSSUFilePath:(id)arg0 outputFileURL:(id)arg1 error:(*id)arg2 ;
+(id)SSUFileFromCompressedSSUFilePath:(id)arg0 error:(*id)arg1 ;
+(id)_dataFromCompressedSSUFilePath:(id)arg0 error:(*id)arg1 ;


@end


#endif