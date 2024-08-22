// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSCOMPRESSIONHELPER_H
#define SSCOMPRESSIONHELPER_H


#import <Foundation/Foundation.h>


@interface SSCompressionHelper : NSObject



+(id)sharedInstance;
-(char *)getDataOutWithSize:(NSUInteger)arg0 withFlag:(NSUInteger)arg1 fd:(*int)arg2 ;
-(int)unTarFileWithFd:(id)arg0 toPath:(id)arg1 ;
-(int)unpackageTarForFd:(int)arg0 size:(NSUInteger)arg1 parentDir:(char *)arg2 ;
-(void)uncompressedContentsForCompressedFile:(id)arg0 outPath:(id)arg1 ;


@end


#endif