// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMOMENTSUTIL_H
#define VCMOMENTSUTIL_H


#import <Foundation/Foundation.h>


@interface VCMomentsUtil : NSObject



+(?)setupBufferPool:(?)arg0 widthheight;
+(BOOL)pixelBufferPool:(struct __CVPixelBufferPool *)arg0 matchesWidth:(int)arg1 height:(int)arg2 ;
+(struct OpaqueVTPixelTransferSession *)allocTransferSession;
+(struct __CVBuffer *)createResizeFrame:(struct __CVBuffer *)arg0 transferSession:(struct OpaqueVTPixelTransferSession *)arg1 bufferPool:(struct __CVPixelBufferPool *)arg2 ;


@end


#endif