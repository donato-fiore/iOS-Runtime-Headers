// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETIMAGEPREPROCESSOR_H
#define ETIMAGEPREPROCESSOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ETImagePreprocessor : NSObject {
    vimage2espresso_param param;
    shared_ptr<Espresso::blob_cpu> imageBlob;
    shared_ptr<Espresso::abstract_context> ctx;
    NSUInteger nChannels;
    NSArray *imageShape;
    NSUInteger bytesPerPixel;
    NSUInteger bitsPerComponent;
    *CGColorSpace colorSpace;
    vImage_Buffer targetBuffer;
    vImage_Buffer srcBuffer;
    NSUInteger currentSrcBufferSize;
}




-(id)initWithImagePreprocessParams:(id)arg0 ;
-(id)tensorWithCGImage:(struct CGImage *)arg0 ;
-(id)tensorWithPath:(id)arg0 ;
-(void)dealloc;
-(void)loadSrcBufferWithCGImage:(struct CGImage *)arg0 ;
-(void)preprocess;


@end


#endif