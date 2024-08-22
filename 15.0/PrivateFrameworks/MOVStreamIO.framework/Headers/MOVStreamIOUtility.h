// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOVSTREAMIOUTILITY_H
#define MOVSTREAMIOUTILITY_H


#import <Foundation/Foundation.h>


@interface MOVStreamIOUtility : NSObject



+(BOOL)isEncoderAvailableForEncoderType:(int)arg0 ;
+(BOOL)isEncoderAvailableWithEncoderName:(id)arg0 ;
+(BOOL)isValidJSONObject:(id)arg0 path:(id)arg1 ;
+(BOOL)verifyExactBytesPerRow:(NSUInteger)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 pixelFormat:(unsigned int)arg3 ;
+(CGFloat)transformAngleFromVideoOrientation:(int)arg0 ;
+(NSUInteger)getDefaultBitrateForVideoDimension:(struct ? )arg0 atExpectedFramerate:(CGFloat)arg1 forEncoderType:(int)arg2 ;
+(NSUInteger)getPreferredBytesPerRowAlignmentSize;
+(NSUInteger)getPreferredPlaneAlignmentSize;
+(id)addTrackTypeInfo:(NSUInteger)arg0 toConfiguration:(id)arg1 ;
+(id)addTransform:(struct CGAffineTransform )arg0 toConfiguration:(id)arg1 ;
+(id)audioNoneEncoderConfig;
+(id)color8bitHEVCWithAlphaEncoderConfig;
+(id)color8bitHEVCWithAlphaEncoderConfigWithBitrate:(NSUInteger)arg0 ;
+(id)colorH264EncoderConfig;
+(id)colorH264EncoderConfigWithBitrate:(NSUInteger)arg0 ;
+(id)colorHEVCEncoderConfig;
+(id)colorHEVCEncoderConfigWithBitrate:(NSUInteger)arg0 ;
+(id)colorHEVCLosslessEncoderConfig;
+(id)colorWithAlphaLossless8bitHEVCEncoderConfig;
+(id)customEncoderConfig;
+(id)customEncoderConfigWithEmbeddedConfiguration:(id)arg0 ;
+(id)getJsonFriendlyCopy:(id)arg0 ;
+(id)getPlistFriendlyCopyOf:(id)arg0 ;
+(id)jsonFriendlyCopy:(id)arg0 ;
+(id)monochrome10bitHEVCEncoderConfig;
+(id)monochrome10bitHEVCEncoderConfigWithBitrate:(NSUInteger)arg0 ;
+(id)monochrome10bitHEVCLosslessEncoderConfig;
+(id)monochrome8bitHEVCEncoderConfig;
+(id)monochrome8bitHEVCEncoderConfigWithBitrate:(NSUInteger)arg0 ;
+(id)monochrome8bitHEVCLosslessEncoderConfig;
+(id)noneEncoderConfig;
+(id)plistFriendlyCopyOf:(id)arg0 ;
+(id)sampleBufferConfigWithPixelFormat:(unsigned int)arg0 ;
+(id)slimEncoderConfig;
+(id)slimXEncoderConfig;
+(id)valueWithCGAffineTransform:(struct CGAffineTransform )arg0 ;
+(struct CGAffineTransform )CGAffineTransformValueFromNSValue:(id)arg0 ;
+(struct opaqueCMFormatDescription *)createL008FormatDescriptionFromCompandedRawBayerFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
+(struct opaqueCMFormatDescription *)createL010FormatDescriptionFromL016FormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
+(struct opaqueCMFormatDescription *)createL010FormatDescriptionFromRawBayerFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
+(struct opaqueCMFormatDescription *)createxf20FormatDescriptionFromRawBayerFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
+(struct opaqueCMFormatDescription *)formatForPixelBuffer:(struct __CVBuffer *)arg0 ;


@end


#endif