// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSIATECHELPER_H
#define CSIATECHELPER_H


#import <Foundation/Foundation.h>


@interface CSIATECHelper : NSObject {
    unsigned int width;
    unsigned int height;
    unsigned int rowbytes;
    unsigned int glInternalFormat;
    unsigned int metalPixelFormat;
    *__CFBoolean twiddled;
    *__CFData data;
}




-(void)dealloc;


@end


#endif