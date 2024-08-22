// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVTEXTUREDESCRIPTION_H
#define ASVTEXTUREDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ASVTextureDescription : NSObject {
    ? _originalSize;
}


@property (readonly, nonatomic) ? destinationPixelFormat; // ivar: _destinationPixelFormat
@property ? destinationSize;
@property (nonatomic) NSInteger downsamplingFactor; // ivar: _downsamplingFactor
@property (readonly, nonatomic) NSInteger fileType; // ivar: _fileType
@property (nonatomic) BOOL generateMipmaps; // ivar: _generateMipmaps
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) ? originalPixelFormat; // ivar: _originalPixelFormat
@property ? originalSize;
@property (readonly, nonatomic) BOOL requiresDownsampling;


+(NSInteger)pixelEncodingForBitsPerComponent:(NSUInteger)arg0 ;
+(NSUInteger)bytesPerComponentForColorModel:(NSInteger)arg0 ;
+(NSUInteger)bytesPerComponentForPixelEncoding:(NSInteger)arg0 ;
+(NSUInteger)bytesPerPixelForPixelFormat:(struct ? )arg0 ;
-(id)initWithName:(id)arg0 destinationPixelFormat:(struct ? )arg1 imageProperties:(struct __CFDictionary *)arg2 fileType:(struct __CFString *)arg3 generateMipmaps:(BOOL)arg4 ;
-(id)initWithName:(id)arg0 originalSize:(struct ? )arg1 originalPixelFormat:(struct ? )arg2 destinationPixelFormat:(NSInteger)arg3 downsamplingFactor:(NSInteger)arg4 fileType:(BOOL)arg5 generateMipmaps;


@end


#endif