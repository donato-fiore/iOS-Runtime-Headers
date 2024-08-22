// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPREANALYZER_H
#define VCPPREANALYZER_H

@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCPPreAnalysisImageLoader.h"
#import "VCPPoolBasedPixelBufferCreator.h"
#import "VCPObjectPool.h"
#import "VCPMAMLModel.h"

@interface VCPPreAnalyzer : NSObject {
    NSObject<OS_dispatch_group> *_processingGroup;
    NSObject<OS_dispatch_queue> *_processingQueue;
    VCPPreAnalysisImageLoader *_imageLoader;
    VCPPoolBasedPixelBufferCreator *_monochromeBufferCreator;
    VCPObjectPool *_sessionPool;
    VCPMAMLModel *_rotationModel;
    VCPPoolBasedPixelBufferCreator *_rotationBufferCreator;
    VCPObjectPool *_ivsPool;
}




+(BOOL)_allowANE;
+(BOOL)_enableSceneAssetConcurrency;
+(BOOL)_includeCN;
+(BOOL)_includeDMF;
+(BOOL)_includeDO;
+(BOOL)_includeDocument;
+(BOOL)_includeIVS;
+(BOOL)_includeLM;
+(BOOL)_includeMeme;
+(BOOL)_includeNSFW;
+(BOOL)_includePA;
+(BOOL)_includeRotation;
+(BOOL)_includeSDG;
+(BOOL)_includeSE;
+(BOOL)_includeSO;
+(BOOL)_includeWP;
+(BOOL)_isMovieWithMediaType:(NSInteger)arg0 ;
+(BOOL)_isPanoWithMediaType:(NSInteger)arg0 andMediaSubtypes:(NSUInteger)arg1 ;
+(BOOL)_isSDOFWithMediaType:(NSInteger)arg0 andMediaSubtypes:(NSUInteger)arg1 ;
+(BOOL)_useR14J9;
+(NSUInteger)_getSHRevision;
+(id)_nonPanoPreWarmDimensions;
-(id)_extractAndSortBoundingBoxFromDetectedObjects:(id)arg0 ;
-(id)_obfuscateLabelName:(id)arg0 ;
-(id)_processBoundingBoxFromDetectedObjects:(id)arg0 forSceneClassID:(id)arg1 ;
-(id)init;
-(int)_collectSceneAnalysisResults:(*id)arg0 fromRequests:(id)arg1 wpResults:(id)arg2 ivsResults:(id)arg3 abnormalDimension:(NSUInteger)arg4 ;
-(int)_createRequests:(id)arg0 withMediaType:(NSInteger)arg1 ;
-(int)_performAnalysis:(*id)arg0 mediaType:(NSInteger)arg1 mediaSubtypes:(NSUInteger)arg2 abnormalDimension:(NSUInteger)arg3 colorPixelBuffer:(struct __CVBuffer *)arg4 andLumaPixelBuffer:(struct __CVBuffer *)arg5 image:(id)arg6 ;
-(int)_performBlurAnalysis:(*id)arg0 withLumaPixelBuffer:(struct __CVBuffer *)arg1 abnormalDimension:(NSUInteger)arg2 isSDOF:(BOOL)arg3 ;
-(int)_performBlurAnalysis:(*id)arg0 withPixelBuffer:(struct __CVBuffer *)arg1 usingAnalyzer:(id)arg2 ;
-(int)_performExposureAnalysis:(*id)arg0 withLumaPixelBuffer:(struct __CVBuffer *)arg1 ;
-(int)_performRotationAnalysis:(*id)arg0 withColorPixelBuffer:(struct __CVBuffer *)arg1 ;
-(int)_performSceneAnalysis:(*id)arg0 image:(id)arg1 mediaType:(NSInteger)arg2 mediaSubtypes:(NSUInteger)arg3 abnormalDimension:(NSUInteger)arg4 ;
-(int)_performWallpaperAnalysis:(*id)arg0 withSceneprint:(id)arg1 ;
-(void)_configureRequest:(id)arg0 ;
-(void)_configureRequest:(id)arg0 withRevision:(NSUInteger)arg1 ;
-(void)_generateSceneClassifications:(id)arg0 fromRequests:(id)arg1 ;
-(void)_insertBoundingBox:(id)arg0 toSortedBoundingBoxes:(id)arg1 ;
-(void)_parseClassificationObservations:(id)arg0 toClassificationResults:(id)arg1 ;
-(void)_parseClassificationObservations:(id)arg0 withPrefix:(id)arg1 toClassificationResults:(id)arg2 ;
-(void)analyzeWithImageURL:(id)arg0 mediaType:(NSInteger)arg1 mediaSubtypes:(NSUInteger)arg2 abnormalDimension:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;


@end


#endif