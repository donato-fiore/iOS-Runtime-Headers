// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPFACEANALYZER_H
#define VCPFACEANALYZER_H

@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCPPhotosFaceProcessingContext.h"
#import "VCPFaceMerger.h"
#import "VCPObjectPool.h"

@interface VCPFaceAnalyzer : NSObject {
    VCPPhotosFaceProcessingContext *_context;
    VCPFaceMerger *_faceMerger;
    NSObject<OS_dispatch_group> *_processingGroup;
    NSObject<OS_dispatch_queue> *_processingQueue;
    VCPObjectPool *_sessionPool;
}




+(BOOL)_allowANE;
+(BOOL)_faceprintFastMode;
-(BOOL)_isColocatingAnimalObservation:(id)arg0 withFaceObservations:(id)arg1 orTorsoObservations:(id)arg2 ;
-(CGFloat)_calculateIoUBetweenObservation:(id)arg0 andObservation:(id)arg1 ;
-(CGFloat)_calculateOverlappingBetweenFaceObservation:(id)arg0 andHumanObservation:(id)arg1 ;
-(NSInteger)_qualityMeasureForFace:(id)arg0 countOfFacesOnAsset:(NSUInteger)arg1 ;
-(id)_vcpPhotosFaceArrayFromAsset:(id)arg0 ;
-(id)_verifiedPersonsFetchResultWithLocalIdentifiers:(id)arg0 andPhotoLibrary:(id)arg1 andError:(*id)arg2 ;
-(id)getVCPPhotosFaceFromFaceObservation:(id)arg0 humanObservation:(id)arg1 sourceWidth:(NSUInteger)arg2 sourceHeight:(NSUInteger)arg3 visionRequests:(id)arg4 algorithmVersion:(int)arg5 force:(BOOL)arg6 andError:(*id)arg7 ;
-(id)getVCPPhotosFacesFromFaceObservations:(id)arg0 humanObservations:(id)arg1 animalObservations:(id)arg2 sourceWidth:(NSUInteger)arg3 sourceHeight:(NSUInteger)arg4 visionRequests:(id)arg5 blurScorePerFace:(id)arg6 exposureScorePerFace:(id)arg7 tooSmallFaceObservations:(id)arg8 algorithmVersion:(int)arg9 ;
-(id)initWithContext:(id)arg0 ;
-(int)_createBlurRequests:(*id)arg0 andExposureRequests:(*id)arg1 forFaceObservations:(id)arg2 ;
-(int)_detectFacesWithPVImage:(id)arg0 forAsset:(id)arg1 withAnalysis:(*id)arg2 ;
-(int)_loadPVImage:(*id)arg0 forAsset:(id)arg1 ;
-(int)_performAnalysis:(*id)arg0 withRequestHandler:(id)arg1 options:(id)arg2 sourceWidth:(NSUInteger)arg3 sourceHeight:(NSUInteger)arg4 ;
-(int)_refineAnalysis:(*id)arg0 forAsset:(id)arg1 andImage:(id)arg2 ;
-(int)analyzeWithImage:(id)arg0 andAsset:(id)arg1 andOptions:(id)arg2 andResults:(*id)arg3 ;
-(int)processAsset:(id)arg0 withAnalysis:(*id)arg1 ;
-(void)_checkAnalysisRequests:(id)arg0 forTooSmallFaceObservations:(id)arg1 withAnalysisResults:(id)arg2 ;
-(void)dealloc;


@end


#endif