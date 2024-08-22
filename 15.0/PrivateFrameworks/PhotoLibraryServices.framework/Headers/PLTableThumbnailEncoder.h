// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTABLETHUMBNAILENCODER_H
#define PLTABLETHUMBNAILENCODER_H


#import <Foundation/Foundation.h>


@interface PLTableThumbnailEncoder : NSObject



+(id)_encodeDownscaledImage:(struct CGImage *)arg0 toFormat:(id)arg1 withUUID:(id)arg2 error:(*id)arg3 ;
+(id)encodeThumbnailImage:(struct CGImage *)arg0 toFormat:(id)arg1 withUUID:(id)arg2 error:(*id)arg3 ;
+(id)encodeThumbnailImage:(struct CGImage *)arg0 toFormats:(id)arg1 withUUID:(id)arg2 error:(*id)arg3 ;
+(id)encodeThumbnailSource:(struct CGImageSource *)arg0 toFormat:(id)arg1 withUUID:(id)arg2 error:(*id)arg3 ;
+(id)encodeThumbnailSource:(struct CGImageSource *)arg0 toFormats:(id)arg1 withUUID:(id)arg2 error:(*id)arg3 ;
+(struct CGImage *)_createDownscaledImageFromSource:(struct CGImageSource *)arg0 format:(id)arg1 ;
+(struct CGImage *)_createDownscaledImageFromSourceImage:(struct CGImage *)arg0 format:(id)arg1 ;


@end


#endif