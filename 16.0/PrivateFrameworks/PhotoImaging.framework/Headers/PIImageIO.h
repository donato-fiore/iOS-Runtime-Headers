// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIIMAGEIO_H
#define PIIMAGEIO_H


#import <Foundation/Foundation.h>


@interface PIImageIO : NSObject



+(BOOL)writeCGImage:(struct CGImage *)arg0 fileURL:(id)arg1 ;
+(BOOL)writeCGImage:(struct CGImage *)arg0 fileURL:(id)arg1 options:(id)arg2 ;
+(BOOL)writeImage:(id)arg0 fileURL:(id)arg1 ;
+(id)writeImage:(id)arg0 toDirectoryAtPath:(id)arg1 withBasename:(id)arg2 ;
+(id)writeImage:(id)arg0 toTemporaryDirectoryWithBasename:(id)arg1 ;


@end


#endif