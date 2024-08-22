// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXVISUALINTELLIGENCEREQUEST_H
#define _PXVISUALINTELLIGENCEREQUEST_H

@class UIImage, VKCImageAnalyzerRequest;
@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface _PXVisualIntelligenceRequest : NSObject

@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) *CGImage cgImage; // ivar: _cgImage
@property (readonly, nonatomic) NSInteger cgImageOrPixelBufferOrientation; // ivar: _cgImageOrPixelBufferOrientation
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly, nonatomic) int requestID; // ivar: _requestID
@property (readonly, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) VKCImageAnalyzerRequest *vkImageRequest;
@property (nonatomic) int vkRequestID; // ivar: _vkRequestID


-(id)initWithAsset:(id)arg0 cgImage:(struct CGImage *)arg1 orientation:(NSInteger)arg2 requestID:(int)arg3 resultHandler:(id)arg4 ;
-(id)initWithAsset:(id)arg0 image:(id)arg1 requestID:(int)arg2 resultHandler:(id)arg3 ;
-(id)initWithAsset:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 orientation:(NSInteger)arg2 requestID:(int)arg3 resultHandler:(id)arg4 ;
-(id)initWithAsset:(id)arg0 requestID:(int)arg1 resultHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif