// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FACECOREIMAGE_H
#define FACECOREIMAGE_H


#import <Foundation/Foundation.h>


@interface FaceCoreImage : NSObject {
    char * _rawDataBuffer;
    char * _alignedDataBuffer;
    BOOL _freeWhenDone;
}


@property (readonly) char * alignedImageData;
@property (readonly) NSUInteger bytesPerRow; // ivar: _bytesPerRow
@property (readonly) NSUInteger height; // ivar: _height
@property (readonly) NSUInteger width; // ivar: _width


-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 buffer:(*void)arg3 freeWhenDone:(BOOL)arg4 ;
-(void)dealloc;


@end


#endif