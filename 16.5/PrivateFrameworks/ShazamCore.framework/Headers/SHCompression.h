// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCOMPRESSION_H
#define SHCOMPRESSION_H


#import <Foundation/Foundation.h>


@interface SHCompression : NSObject



+(BOOL)decompressFile:(id)arg0 withAlgorithm:(int)arg1 toLocation:(id)arg2 error:(*id)arg3 ;
+(int)supportedCompressionTypeFromFilePathExtension:(id)arg0 ;
+(int)supportedCompressionTypeFromFileURL:(id)arg0 ;


@end


#endif