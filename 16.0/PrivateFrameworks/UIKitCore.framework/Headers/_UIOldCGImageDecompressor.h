// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIOLDCGIMAGEDECOMPRESSOR_H
#define _UIOLDCGIMAGEDECOMPRESSOR_H

@class UICGImageDecompressor, NSData;



@interface _UIOldCGImageDecompressor : UICGImageDecompressor {
    NSData *_imageData;
    CGSize _maxSize;
    *CGImage _imageRef;
    NSUInteger _renderingIntent;
    NSUInteger _jpegDecodeRequestID;
    os_unfair_lock_s _metadataLock;
    os_unfair_lock_s _decompressionLock;
    ? _decompressorFlags;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(struct CGImage *)waitForImageRef;
-(void)dealloc;


@end


#endif