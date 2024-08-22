// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCEVIDEOFORMAT_H
#define BWINFERENCEVIDEOFORMAT_H

@class NSDictionary;
@protocol NSCopying, BWInferenceCropDescriptor;

#import <Foundation/Foundation.h>

#import "BWVideoFormat.h"

@interface BWInferenceVideoFormat : NSObject <NSCopying>

 {
    BWVideoFormat *_underlyingVideoFormat;
    BOOL _deviceOriented;
    NSInteger _videoContentMode;
    BOOL _includesInvalidContent;
    id<BWInferenceCropDescriptor> *_cropDescriptor;
    int _rotationDegrees;
}


@property (readonly, nonatomic) int colorSpaceProperties;
@property (readonly, nonatomic) NSObject<BWInferenceCropDescriptor> *cropDescriptor;
@property (readonly, nonatomic) BOOL deviceOriented;
@property (readonly, nonatomic) NSUInteger extendedHeight;
@property (readonly, nonatomic) NSUInteger extendedWidth;
@property (readonly) *opaqueCMFormatDescription formatDescription;
@property (readonly, nonatomic) NSUInteger height;
@property (readonly, nonatomic) BOOL includesInvalidContent;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) unsigned int pixelFormat;
@property (readonly, nonatomic) int rotationDegrees;
@property (readonly, nonatomic) BWVideoFormat *underlyingVideoFormat;
@property (readonly, nonatomic) NSInteger videoContentMode;
@property (readonly, nonatomic) NSUInteger width;


+(id)formatByResolvingRequirements:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)representsCompressedEquivalent;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUnderlyingFormat:(id)arg0 isDeviceOriented:(BOOL)arg1 videoContentMode:(NSInteger)arg2 includesInvalidContent:(BOOL)arg3 cropDescriptor:(id)arg4 rotationDegrees:(int)arg5 ;
-(unsigned int)uncompressedEquivalent;
-(void)dealloc;


@end


#endif