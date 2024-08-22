// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTOR_H
#define VNDETECTOR_H

@class NSDictionary, NSString;
@protocol VNClassCodeProviding, VNDetectorKeyProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VNMetalContext.h"

@interface VNDetector : NSObject <VNClassCodeProviding, VNDetectorKeyProviding>



@property (readonly, nonatomic) NSUInteger backingStore; // ivar: _backingStore
@property (readonly, copy) NSDictionary *configurationOptions; // ivar: _configurationOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VNMetalContext *metalContext; // ivar: _metalContext
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // ivar: _synchronizationQueue


+(BOOL)isReentrant;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(Class)detectorClassForDetectorType:(id)arg0 configuredWithOptions:(id)arg1 error:(*id)arg2 ;
+(Class)detectorClassForDetectorType:(id)arg0 error:(*id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)arg0 value:(id)arg1 ;
+(id)detectorName;
+(id)detectorWithConfigurationOptions:(id)arg0 forSession:(id)arg1 error:(*id)arg2 ;
+(id)fullyPopulatedConfigurationOptionsWithOverridingOptions:(id)arg0 ;
+(id)keyForDetectorWithConfigurationOptions:(id)arg0 ;
+(id)supportedImageSizeSetForEspressoModelWithName:(id)arg0 inputImageBlobName:(id)arg1 analysisPixelFormatType:(unsigned int)arg2 error:(*id)arg3 ;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
+(unsigned int)VNClassCode;
+(void)fullyPopulateConfigurationOptions:(id)arg0 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
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
-(id)initWithConfigurationOptions:(id)arg0 ;
-(id)newMetalContextForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
-(id)processInSynchronizationQueueUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(id)requiredCancellerInOptions:(id)arg0 error:(*id)arg1 ;
-(id)tracedProcessWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(id)validatedImageBufferFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)validatedProcessingDeviceInOptions:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif