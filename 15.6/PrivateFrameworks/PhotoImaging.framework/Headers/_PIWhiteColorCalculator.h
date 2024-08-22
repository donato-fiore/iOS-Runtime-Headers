// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PIWHITECOLORCALCULATOR_H
#define _PIWHITECOLORCALCULATOR_H

@class NUComposition, NUBufferRenderClient, NUImageDataClient;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _PIWhiteColorCalculator : NSObject {
    NUComposition *_composition;
    NUBufferRenderClient *_bufferRenderClient;
    NUImageDataClient *_imageDataClient;
    NSObject<OS_dispatch_queue> *_q;
    BOOL _useSushi;
}




-(id)_brightnessMultiplierFromImageProperties:(id)arg0 ;
-(id)initWithComposition:(id)arg0 useSushi:(BOOL)arg1 ;
-(struct ? )_computeWhitePointColorWithGrayEdgesBuffer:(id)arg0 grayWorldBuffer:(id)arg1 greenChannelPercentage:(CGFloat)arg2 RAWCameraSpaceProperties:(id)arg3 ;
-(struct ? )_whitePointColorFromGrayEdgesImage:(id)arg0 grayWorldImage:(id)arg1 greenChannelPercentage:(CGFloat)arg2 RAWCameraSpaceProperties:(id)arg3 ;
-(void)_computeGreenPercentage:(id)arg0 ;
-(void)_configureRequest:(id)arg0 ;
-(void)_submitGERenderRequest:(id)arg0 ;
-(void)_submitGWRenderRequest:(id)arg0 ;
-(void)calculateColorWithProperties:(id)arg0 completion:(id)arg1 ;
-(void)readBufferFromImage:(id)arg0 withRGBAfBufferBlock:(id)arg1 ;


@end


#endif