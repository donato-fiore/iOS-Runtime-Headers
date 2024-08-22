// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEOFRAMEUTIL_H
#define VCVIDEOFRAMEUTIL_H


#import <Foundation/Foundation.h>


@interface VCVideoFrameUtil : NSObject



+(id)newXPCDictionaryWithCVPixelBuffer:(struct __CVBuffer *)arg0 depthPixelBuffer:(struct __CVBuffer *)arg1 time:(struct ? )arg2 ;
+(struct ? )CMTimeFromXPCDictionary:(id)arg0 ;
+(struct __CVBuffer *)newCVPixelBufferFromXPCDictionary:(id)arg0 isDepth:(BOOL)arg1 ;


@end


#endif