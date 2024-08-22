// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARODTHANDLEMANAGER_H
#define ARODTHANDLEMANAGER_H

@class NSDictionary;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface ARODTHandleManager : NSObject {
    *CV3DODTContext _odtHandle;
    NSObject<OS_dispatch_semaphore> *_odtHandleSemaphore;
    NSUInteger _odtCounter;
    NSDictionary *_options;
    *CV3DMLModel _mlModel;
    NSUInteger _odtPowerUsage;
}


@property (readonly, nonatomic) BOOL continuousDetection;
@property (readonly, nonatomic) BOOL deterministicMode;
@property (readonly, nonatomic) NSInteger maximumNumberOfTrackedImages;


+(NSInteger)actualNumberOfImagesTracked:(NSInteger)arg0 ;
+(id)handleAccumulatedErrorType:(NSInteger)arg0 failedReferenceImageNames:(id)arg1 ;
+(id)suggestionInternalError;
+(id)suggestionInvalidFeature;
+(id)suggestionInvalidImage;
+(int)_calibrationDataFromImageData:(id)arg0 pCalibrationData:(*id)arg1 ;
+(int)verifyReferenceImage:(id)arg0 ;
+(void)accumulateReferenceImageErrorsForResult:(int)arg0 refImage:(id)arg1 objectID:(NSUInteger)arg2 pReferenceImageMap:(*id)arg3 pFailedReferenceImageNames:(*id)arg4 pUserErrorType:(*NSInteger)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithDeterministicMode:(BOOL)arg0 ;
-(id)initWithMaximumNumberOfTrackedImages:(NSInteger)arg0 ;
-(id)initWithMaximumNumberOfTrackedImages:(NSInteger)arg0 continuousDetection:(BOOL)arg1 deterministicMode:(BOOL)arg2 ;
-(id)initWithRegionProposalModelAndDeterministicMode:(BOOL)arg0 ;
-(int)addReferenceImage:(id)arg0 tracking:(BOOL)arg1 pObjectID:(*NSUInteger)arg2 ;
-(int)addReferenceObject:(id)arg0 tracking:(BOOL)arg1 pObjectID:(*NSUInteger)arg2 ;
-(int)detectReferenceObjectsForImageData:(id)arg0 worldTrackingPose:(id)arg1 imageContext:(*void)arg2 pResultArray:(*id)arg3 ;
-(int)predictPlanarObjectsAtTimestamp:(CGFloat)arg0 worldTrackingPose:(id)arg1 timeBudget:(CGFloat)arg2 pResultArray:(*id)arg3 ;
-(int)trackPlanarObjectAndEstimateScaleForImageData:(id)arg0 worldTrackingPose:(id)arg1 imageContext:(*void)arg2 timeBudget:(CGFloat)arg3 pResultArray:(*id)arg4 ;
-(int)trackPlanarObjectForImageData:(id)arg0 imageContext:(*void)arg1 timeBudget:(CGFloat)arg2 pResultArray:(*id)arg3 ;
-(int)waitForAllObjectsAddToFinish;
-(void)dealloc;
-(void)releaseODTHandle;
-(void)updatePowerUsage:(NSUInteger)arg0 ;


@end


#endif