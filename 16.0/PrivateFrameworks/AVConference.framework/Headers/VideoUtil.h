// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOUTIL_H
#define VIDEOUTIL_H


#import <Foundation/Foundation.h>


@interface VideoUtil : NSObject



+(?)setupBufferPool:(?)arg0 widthheight;
+(NSInteger)compareVideoAspectRatioSizeA:(struct CGSize )arg0 toSizeB:(struct CGSize )arg1 ;
+(NSInteger)videoResolutionForWidth:(int)arg0 height:(int)arg1 ;
+(id)convertPixelBuffer:(struct __CVBuffer *)arg0 toImageType:(int)arg1 withAssetIdentifier:(id)arg2 cameraStatusBits:(unsigned char)arg3 allowTimeMetaData:(BOOL)arg4 ;
+(struct CGRect )adjustFaceBounds:(struct CGRect )arg0 fromOriginalBufferSize:(struct CGSize )arg1 toCroppedBufferSize:(struct CGSize )arg2 ;
+(struct CGSize )computeVisibleAspectRatioWithRemoteScreenAspectRatio:(struct CGSize )arg0 remoteExpectedAspectRatio:(struct CGSize )arg1 encodeWidth:(int)arg2 encodeHeight:(int)arg3 ;
+(struct CGSize )getBestCaptureSizeForEncodingSize:(struct CGSize )arg0 ;
+(struct CGSize )sizeForVideoResolution:(NSInteger)arg0 ;
+(struct __CFString *)typeIdentifierForImageType:(int)arg0 ;
+(unsigned int)videoCodecForPayload:(int)arg0 ;
+(void)adjustFaceMetadataForPixelBuffer:(struct __CVBuffer *)arg0 originalWidth:(NSUInteger)arg1 originalHeight:(NSUInteger)arg2 ;
+(void)attachMetadata:(id)arg0 toCVPixelBuffer:(struct __CVBuffer *)arg1 ;


@end


#endif