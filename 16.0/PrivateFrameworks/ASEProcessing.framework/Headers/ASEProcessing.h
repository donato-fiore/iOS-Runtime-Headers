// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASEPROCESSING_H
#define ASEPROCESSING_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface ASEProcessing : NSObject {
    NSUInteger _numberOfRequestedFrames;
    NSUInteger _numberOfScheduledFrames;
    NSUInteger _numberOfProcessedFrames;
    unsigned int _asePlatform;
    int _aseProcessingVersion;
    unsigned int _aseProcessingType;
    unsigned int _inputWidth;
    unsigned int _inputHeight;
    *? _aseFrameProcessing;
    *hwConfigurationUnits_t _aseControlUnit;
    NSObject<OS_dispatch_queue> *_scheduleQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_semaphore> *_scheduleSemaphone;
    unsigned int _noiseMeterStepSize;
    unsigned int _FD_state;
    unsigned int _FG_count;
    unsigned int _NFG_count;
    unsigned int _prev_H1_7;
    unsigned int _prev_V1_7;
    unsigned int _prev_ratio_2D_1D;
    unsigned int _productType;
}


@property unsigned int destinationHeight; // ivar: _destinationHeight
@property unsigned int destinationWidth; // ivar: _destinationWidth
@property float enhancementStrength; // ivar: _enhancementStrength


+(BOOL)shouldEnhanceWidth:(unsigned int)arg0 height:(unsigned int)arg1 destinationWidth:(unsigned int)arg2 destinationHeight:(unsigned int)arg3 ;
+(BOOL)shouldEnhanceWidth:(unsigned int)arg0 height:(unsigned int)arg1 destinationWidth:(unsigned int)arg2 destinationHeight:(unsigned int)arg3 fps:(float)arg4 ;
-(NSInteger)processFrameWithInput:(struct ? *)arg0 Output:(struct ? *)arg1 ;
-(NSInteger)processFrameWithInput:(struct ? *)arg0 callback:(id)arg1 ;
-(NSInteger)processFrameWithInput:(struct ? *)arg0 outputData:(*id)arg1 ;
-(id)init;
-(id)initWithConfig:(struct ? *)arg0 ;
-(void)configControlHeader:(struct hwConfigurationUnits_t *)arg0 ;
-(void)dealloc;
-(void)digitalZoomSelectControl_V1:(struct ? *)arg0 ;
-(void)digitalZoomSelectControl_V2:(struct hwConfigurationUnits_t *)arg0 ;
-(void)printAseMeasurementOutput:(struct ? *)arg0 ;
-(void)processPixelWithInput:(struct ? *)arg0 Output:(struct ? *)arg1 ;
-(void)processPixelWithInput:(struct ? *)arg0 controlUnit:(struct hwConfigurationUnits_t *)arg1 ;
-(void)processPixelWithInput_V1:(struct ? *)arg0 Output:(struct ? *)arg1 ;
-(void)processPixelWithInput_V2:(struct ? *)arg0 Output:(struct hwConfigurationUnits_t *)arg1 ;
-(void)processPixelWithMeasurement_V1:(struct ? *)arg0 pixelControl:(struct ? *)arg1 ;
-(void)processPixelWithMeasurement_V2:(struct ? *)arg0 Output:(struct hwConfigurationUnits_t *)arg1 ;
-(void)processPixelWithPixelControl_V1:(struct ? *)arg0 ;
-(void)processPixelWithPixelControl_V2:(struct hwConfigurationUnits_t *)arg0 ;


@end


#endif