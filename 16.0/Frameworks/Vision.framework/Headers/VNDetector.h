// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDETECTOR_H
#define VNDETECTOR_H

@class NSDictionary, NSString;
@protocol VNClassCodeProviding, VNDetectorKeyProviding;

#import <Foundation/Foundation.h>

#import "VNMetalContext.h"
#import "VNControlledCapacityTasksQueue.h"

@interface VNDetector : NSObject <VNClassCodeProviding, VNDetectorKeyProviding>

 {
    os_unfair_lock_s _detectorMultiSessionAccessLock;
}


@property (readonly, nonatomic) NSUInteger backingStore; // ivar: _backingStore
@property (readonly, copy) NSDictionary *configurationOptions; // ivar: _configurationOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VNMetalContext *metalContext; // ivar: _metalContext
@property (readonly, nonatomic) NSUInteger signPostAdditionalParameter;
@property (readonly) Class superclass;
@property (retain, nonatomic) VNControlledCapacityTasksQueue *synchronizationQueue; // ivar: _synchronizationQueue


+(BOOL)isReentrant;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(Class)detectorClassForDetectorType:(id)arg0 configuredWithOptions:(id)arg1 error:(*id)arg2 ;
+(Class)detectorClassForDetectorType:(id)arg0 error:(*id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)detectorCropCreationAsyncTasksQueue;
+(id)detectorCropProcessingAsyncTasksQueue;
+(id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)arg0 value:(id)arg1 ;
+(id)detectorName;
+(id)detectorWithConfigurationOptions:(id)arg0 forSession:(id)arg1 error:(*id)arg2 ;
+(id)fullyPopulatedConfigurationOptionsWithOverridingOptions:(id)arg0 ;
+(id)keyForDetectorWithConfigurationOptions:(id)arg0 ;
+(id)primaryInferenceNetworkDescriptorForIdentifier:(id)arg0 version:(id)arg1 error:(*id)arg2 ;
+(id)supportedImageSizeSetForEspressoModelWithName:(id)arg0 inputImageBlobName:(id)arg1 analysisPixelFormatType:(unsigned int)arg2 error:(*id)arg3 ;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
+(unsigned int)VNClassCode;
+(void)fullyPopulateConfigurationOptions:(id)arg0 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
// +(void)runSuccessReportingBlockSynchronously:(id)arg0 detector:(unk)arg1 qosClass:(id)arg2 error:(unsigned int)arg3  ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)canBehaveAsDetectorOfClass:(Class)arg0 withConfiguration:(id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)currentQueueIsSynchronizationQueue;
-(BOOL)getOptionalCanceller:(*id)arg0 inOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)needsMetalContext;
-(BOOL)shouldBeReplacedByDetectorOfClass:(Class)arg0 withConfiguration:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg0 ;
-(BOOL)useGPU;
-(BOOL)validateImageBuffer:(id)arg0 error:(*id)arg1 ;
-(BOOL)warmUpSession:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)inferenceNetworkIdentifiers;
-(id)initWithConfigurationOptions:(id)arg0 ;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(id)newMetalContextForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(id)processUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(id)requiredCancellerInOptions:(id)arg0 error:(*id)arg1 ;
-(id)validatedImageBufferFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)validatedProcessingDeviceInOptions:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)recordImageCropQuickLookInfoFromOptions:(id)arg0 toObservation:(id)arg1 ;
-(void)recordImageCropQuickLookInfoFromOptionsSafe:(id)arg0 toObservation:(id)arg1 ;
-(void)recordImageCropQuickLookInfoToOptions:(id)arg0 cacheKey:(id)arg1 imageBuffer:(id)arg2 ;
-(void)recordImageCropQuickLookInfoToOptionsSafe:(id)arg0 cacheKey:(id)arg1 imageBuffer:(id)arg2 ;


@end


#endif