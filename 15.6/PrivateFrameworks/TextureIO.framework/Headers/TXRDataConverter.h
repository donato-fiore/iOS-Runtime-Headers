// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TXRDATACONVERTER_H
#define TXRDATACONVERTER_H


#import <Foundation/Foundation.h>


@interface TXRDataConverter : NSObject



+(id)newImageFromSourceImage:(id)arg0 newPixelFormat:(NSUInteger)arg1 bufferAllocator:(id)arg2 gammaDegamma:(BOOL)arg3 error:(*id)arg4 ;
+(id)newImageFromSourceImage:(id)arg0 newPixelFormat:(NSUInteger)arg1 bufferAllocator:(id)arg2 multiplyAlpha:(BOOL)arg3 gammaDegamma:(BOOL)arg4 error:(*id)arg5 ;
+(id)newPixelFormatSetForCGImage:(struct CGImage *)arg0 displayGamut:(NSUInteger)arg1 options:(id)arg2 ;


@end


#endif