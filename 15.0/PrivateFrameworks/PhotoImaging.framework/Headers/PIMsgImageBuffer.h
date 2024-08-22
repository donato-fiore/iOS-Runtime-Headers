// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIMSGIMAGEBUFFER_H
#define PIMSGIMAGEBUFFER_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface PIMsgImageBuffer : NSObject {
    *CGColorSpace bufferColorspace;
}


@property (retain) NSMutableData *data; // ivar: data
@property (readonly) NSUInteger elementByteSize; // ivar: elementByteSize
@property (readonly) int format; // ivar: format
@property (readonly) NSUInteger height; // ivar: height
@property (readonly) NSUInteger rowElements; // ivar: rowElements
@property (readonly) NSUInteger width; // ivar: width


-(*void)bytes;
-(id)image;
-(id)initWithBytes:(*void)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 bytesPerRow:(NSInteger)arg3 bytesPerComponent:(NSUInteger)arg4 format:(int)arg5 colorspace:(struct CGColorSpace *)arg6 ;
-(id)initWithData:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 bytesPerRow:(NSInteger)arg3 bytesPerComponent:(NSUInteger)arg4 format:(int)arg5 colorspace:(struct CGColorSpace *)arg6 ;
-(void)dealloc;


@end


#endif