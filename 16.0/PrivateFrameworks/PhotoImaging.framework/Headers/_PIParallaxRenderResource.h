// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PIPARALLAXRENDERRESOURCE_H
#define _PIPARALLAXRENDERRESOURCE_H

@class PFParallaxColor, NSString, CIImage, NUImageHistogram, CIRenderTask;
@protocol NUPurgeableStorage;

#import <Foundation/Foundation.h>


@interface _PIParallaxRenderResource : NSObject

@property (retain, nonatomic) NSObject<NUPurgeableStorage> *destination; // ivar: _destination
@property (readonly, nonatomic) PFParallaxColor *dominantColor;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) CIImage *image; // ivar: _image
@property (retain, nonatomic) NUImageHistogram *imageHistogram; // ivar: _imageHistogram
@property (nonatomic) ? luminanceThresholds; // ivar: _luminanceThresholds
@property (nonatomic) ? luminanceWeights; // ivar: _luminanceWeights
@property (readonly, nonatomic) PFParallaxColor *medianColor;
@property (retain, nonatomic) CIRenderTask *task; // ivar: _task




@end


#endif