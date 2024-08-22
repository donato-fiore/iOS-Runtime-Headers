// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCRIMAGE_H
#define FCRIMAGE_H


#import <Foundation/Foundation.h>


@interface FCRImage : NSObject {
    char * rawDataBuffer;
    char * alignedDataBuffer;
    BOOL freeBufferWhenDone;
}


@property NSUInteger bytesPerRow; // ivar: bytesPerRow
@property NSUInteger height; // ivar: height
@property NSUInteger width; // ivar: width


-(char *)getAlignedImageData;
-(id)initWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 buffer:(char *)arg3 freeBufferWhenDone:(BOOL)arg4 ;
-(void)dealloc;


@end


#endif