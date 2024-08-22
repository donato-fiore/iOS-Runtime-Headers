// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKBARCODEFRAMEPROCESSOR_H
#define VKBARCODEFRAMEPROCESSOR_H

@class NSMutableArray;


#import "VKFrameProcessor.h"
#import "VKBarcodeFrameProcessorConfiguration.h"

@interface VKBarcodeFrameProcessor : VKFrameProcessor {
    VKBarcodeFrameProcessorConfiguration *_config;
    ? _warpTransform;
    NSMutableArray *_recognizedItems;
    id *_resultHandler;
    VKBarcodeFrameProcessorConfiguration *_currentConfig;
}


@property (copy, nonatomic) VKBarcodeFrameProcessorConfiguration *configuration;
@property (copy, nonatomic) id *resultHandler;


-(BOOL)wantsThrottling;
-(id)init;
-(void)applyWarpTransform:(struct ? )arg0 ;
-(void)processFrame:(id)arg0 ;
-(void)reset;


@end


#endif