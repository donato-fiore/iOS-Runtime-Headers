// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSITEXTUREHELPER_H
#define CSITEXTUREHELPER_H


#import <Foundation/Foundation.h>


@interface CSITextureHelper : NSObject {
    *_csibitmap bmp;
    *CGColorSpace colorspaceHint;
    NSUInteger sourceRowbytes;
    unsigned int width;
    unsigned int height;
    unsigned int imageBytes;
    int pixelFormat;
}




-(void)dealloc;


@end


#endif