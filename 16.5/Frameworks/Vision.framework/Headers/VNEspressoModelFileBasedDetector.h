// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNESPRESSOMODELFILEBASEDDETECTOR_H
#define VNESPRESSOMODELFILEBASEDDETECTOR_H



#import "VNDetector.h"
#import "VNEspressoResources.h"

@interface VNEspressoModelFileBasedDetector : VNDetector

@property (readonly, nonatomic) VNEspressoResources *espressoResources; // ivar: _espressoResources
@property (readonly, nonatomic) NSUInteger inputImageAspectRatioHandling; // ivar: _inputImageAspectRatioHandling
@property (readonly, nonatomic) NSUInteger networkRequiredInputImageHeight; // ivar: _networkRequiredInputImageHeight
@property (readonly, nonatomic) NSUInteger networkRequiredInputImageWidth; // ivar: _networkRequiredInputImageWidth


+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(id)keyForDetectorWithConfigurationOptions:(id)arg0 ;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
+(unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg0 ;
-(BOOL)_bindBuffer:(struct ? *)arg0 toNetworkBlobName:(id)arg1 bindMode:(int)arg2 error:(*id)arg3 ;
-(BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)bindBuffer:(struct ? *)arg0 toNetworkInputBlobName:(id)arg1 error:(*id)arg2 ;
-(BOOL)bindBuffer:(struct ? *)arg0 toNetworkOutputBlobName:(id)arg1 error:(*id)arg2 ;
-(BOOL)bindLockedPixelBuffer:(struct __CVBuffer *)arg0 toNetworkInputBlobName:(id)arg1 error:(*id)arg2 ;
-(BOOL)bindPixelBuffer:(struct __CVBuffer *)arg0 toNetworkBlobName:(id)arg1 error:(*id)arg2 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)executePlanAndReturnError:(*id)arg0 ;
-(BOOL)getWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 ofEspressoModelNetworkBlobNamed:(id)arg2 error:(*id)arg3 ;
-(int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg0 ;


@end


#endif