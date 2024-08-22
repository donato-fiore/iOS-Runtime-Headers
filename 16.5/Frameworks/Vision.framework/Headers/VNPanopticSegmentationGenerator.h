// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNPANOPTICSEGMENTATIONGENERATOR_H
#define VNPANOPTICSEGMENTATIONGENERATOR_H



#import "VNEspressoModelFileBasedDetector.h"
#import "VNProcessingDevice.h"

@interface VNPanopticSegmentationGenerator : VNEspressoModelFileBasedDetector {
    VNProcessingDevice *_processingDevice;
    ? _boxesBuffer;
    ? _confidencesBuffer;
    ? _iousBuffer;
    ? _masksBuffer;
    NSUInteger _networkInputImageWidth;
    NSUInteger _networkInputImageHeight;
}




+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;


@end


#endif