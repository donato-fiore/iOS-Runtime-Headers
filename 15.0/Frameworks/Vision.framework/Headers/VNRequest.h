// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNREQUEST_H
#define VNREQUEST_H

@class NSString, NSArray;
@protocol VNWarningRecorder, VNSequencedRequestSupporting, VNClassCodeProviding, NSCopying, OS_dispatch_queue, OS_dispatch_semaphore, MTLDevice;

#import <Foundation/Foundation.h>

#import "VNRequestConfiguration.h"
#import "VNWarningRecorder.h"
#import "VNCanceller.h"
#import "VNProcessingDevice.h"
#import "VNRequestSpecifier.h"

@interface VNRequest : NSObject <VNWarningRecorder, VNSequencedRequestSupporting, VNClassCodeProviding, NSCopying>

 {
    VNRequestConfiguration *_configuration;
    VNWarningRecorder *_warningRecorder;
    VNCanceller *_canceller;
    BOOL _cancellationTriggered;
    os_unfair_lock_s _cancellationResourcesLock;
    NSObject<OS_dispatch_queue> *_cancellationQueue;
    NSUInteger _serialNumber;
    NSUInteger _executionNanoseconds;
}


@property (retain) NSObject<OS_dispatch_semaphore> *cancellationSemaphore; // ivar: _cancellationSemaphore
@property (readonly) BOOL cancellationTriggered;
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger detectionLevel;
@property (readonly) NSUInteger executionNanoseconds;
@property (readonly) CGFloat executionTimeInternal;
@property (readonly) VNProcessingDevice *explicitlyConfiguredProcessingDevice;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumProcessingDimensionOnTheLongSide;
@property (nonatomic) NSUInteger metalContextPriority;
@property (nonatomic) NSUInteger modelFileBackingStore;
@property (nonatomic) BOOL preferBackgroundProcessing;
@property (retain, nonatomic) NSObject<MTLDevice> *preferredMetalContext;
@property (copy, nonatomic) VNProcessingDevice *processingDevice;
@property (readonly, copy, nonatomic) NSArray *results; // ivar: _results
@property (nonatomic) NSUInteger revision; // ivar: _revision
@property (readonly) NSUInteger serialNumber;
@property (readonly) VNRequestSpecifier *specifier;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesCPUOnly;


+(BOOL)defaultRequestInstanceWarmUpSession:(id)arg0 error:(*id)arg1 ;
+(BOOL)getDoubleValue:(*CGFloat)arg0 forKey:(id)arg1 inOptions:(id)arg2 error:(*id)arg3 ;
+(BOOL)getDoubleValue:(*CGFloat)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(CGFloat)arg3 error:(*id)arg4 ;
+(BOOL)getFloatValue:(*float)arg0 forKey:(id)arg1 inOptions:(id)arg2 error:(*id)arg3 ;
+(BOOL)getFloatValue:(*float)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(float)arg3 error:(*id)arg4 ;
+(BOOL)getOptionalArray:(*id)arg0 forKey:(id)arg1 inOptions:(id)arg2 withElementsOfClass:(Class)arg3 error:(*id)arg4 ;
+(BOOL)getOptionalObject:(*id)arg0 ofClass:(Class)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(*id)arg4 ;
+(BOOL)getRequiredObject:(*id)arg0 ofClass:(Class)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(*id)arg4 ;
+(BOOL)setsTimeRangeOnResults;
+(BOOL)supportsPrivateRevision:(NSUInteger)arg0 ;
+(BOOL)supportsRevision:(NSUInteger)arg0 ;
+(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
+(Class)configurationClass;
+(NSUInteger)_defaultRevisionForBuildVersion:(int)arg0 ;
+(NSUInteger)compatibleRevisionForDependentRequestOfClass:(Class)arg0 beingPerformedByRevision:(NSUInteger)arg1 ;
+(NSUInteger)currentRevision;
+(NSUInteger)defaultRevision;
+(NSUInteger)firstSupportedRevisionInOrderedRevisionList:(NSUInteger)arg0 ;
+(NSUInteger)resolvedRevisionForRevision:(NSUInteger)arg0 ;
+(id)_introspectionBuiltSupportedRevisions;
+(id)createVNEntityIdentificationModelEntryPrintForRevision:(NSUInteger)arg0 fromDescriptorData:(*void)arg1 length:(NSUInteger)arg2 elementCount:(NSUInteger)arg3 error:(*id)arg4 ;
+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)newConfigurationInstance;
+(id)supportedPrivateRevisions;
+(id)supportedRevisions;
+(struct ? *)dependentRequestCompatibility;
+(unsigned int)VNClassCode;
+(void)initialize;
-(BOOL)allowsCachingOfResults;
-(BOOL)cancellationTriggeredAndReturnError:(*id)arg0 ;
-(BOOL)hasCancellationHook;
-(BOOL)internalCancelInContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)performInContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPrivateRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)validateConfigurationAndReturnError:(*id)arg0 ;
-(BOOL)validateImageBuffer:(id)arg0 ofNonZeroWidth:(*NSUInteger)arg1 andHeight:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(NSUInteger)compatibleRevisionForDependentRequest:(id)arg0 ;
-(NSUInteger)resolvedRevision;
-(id)_defaultProcessingDevice;
-(id)cancellerAndReturnError:(*id)arg0 ;
-(id)configuration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCompletionHandler:(id)arg0 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)newDefaultDetectorOptionsForSession:(id)arg0 ;
-(id)newDefaultRequestInstance;
-(id)sequencedRequestPreviousObservationsKey;
-(id)supportedImageSizeSetForDetectorType:(id)arg0 ;
-(id)valueForWarning:(id)arg0 ;
-(id)warnings;
-(void)_setResolvedRevision:(NSUInteger)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;
-(void)cancel;
-(void)copyStateOfRequest:(id)arg0 ;
-(void)recordWarning:(id)arg0 value:(id)arg1 ;
-(void)resolvedRevisionDidChangeFromRevision:(NSUInteger)arg0 ;
-(void)setSortedResults:(id)arg0 ;


@end


#endif