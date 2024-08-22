// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVIMAGELOADER_H
#define PVIMAGELOADER_H


#import <Foundation/Foundation.h>


@interface PVImageLoader : NSObject



+(id)imageFromSRGBImageBuffer:(*void)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3 bitmapInfo:(unsigned int)arg4 error:(*id)arg5 ;


@end


#endif