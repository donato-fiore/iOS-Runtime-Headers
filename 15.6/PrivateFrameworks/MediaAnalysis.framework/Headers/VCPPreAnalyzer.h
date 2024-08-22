// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPREANALYZER_H
#define VCPPREANALYZER_H

@class PVSceneTaxonomy;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCPSceneProcessingImageManager.h"
#import "VCPObjectPool.h"
#import "VCPMAMLModel.h"

@interface VCPPreAnalyzer : NSObject {
    VCPSceneProcessingImageManager *_imageManager;
    PVSceneTaxonomy *_sceneTaxonomy;
    NSObject<OS_dispatch_group> *_processingGroup;
    NSObject<OS_dispatch_queue> *_processingQueue;
    CF<__CVPixelBufferPool *> _pool8Y;
    CF<OpaqueVTPixelTransferSession *> _transferSession;
    VCPObjectPool *_sessionPool;
    VCPMAMLModel *_rotationModel;
    CF<__CVPixelBufferPool *> _rotationPool;
    VCPObjectPool *_ivsPool;
}




+(BOOL)_allowANE;
+(BOOL)_enableSceneAssetConcurrency;
+(BOOL)_includeDO;
+(BOOL)_includeDocument;
+(BOOL)_includeIVS;
+(BOOL)_includeLM;
+(BOOL)_includeMeme;
+(BOOL)_includeNSFW;
+(BOOL)_includeRotation;
+(BOOL)_includeSDG;
+(BOOL)_includeSE;
+(BOOL)_includeSO;
+(BOOL)_includeWP;
+(BOOL)_useR14J9;
+(NSUInteger)_getSHRevision;
-(?)_convertFromBuffertoLumaPixelBuffer;
-(?)_createPixelBufferPool:(?)arg0 withBufferSizeandPixelFormat;
-(?)_createPixelBufferWithWidth:(?)arg0 height:(?)arg1 pixelFormatpixelBuffer;
-(?)_loadImageURL:(?)arg0 abnormalDimension:(?)arg1 colorPixelBuffer:(?)arg2 andLumaPixelBufferimage;
-(id)_extractAndSortBoundingBoxFromDetectedObjects:(id)arg0 ;
-(id)_obfuscateLabelName:(id)arg0 ;
-(id)_processBoundingBoxFromDetectedObjects:(id)arg0 forSceneClassID:(id)arg1 ;
-(id)init;
-(int)_collectSceneAnalysisResults:(*id)arg0 fromRequests:(id)arg1 wpResults:(id)arg2 ivsResults:(id)arg3 ignoreSceneClassification:(BOOL)arg4 ;
-(int)_createRequests:(id)arg0 ;
-(int)_performAnalysis:(*id)arg0 abnormalDimension:(NSUInteger)arg1 isSDOF:(BOOL)arg2 colorPixelBuffer:(struct __CVBuffer *)arg3 andLumaPixelBuffer:(struct __CVBuffer *)arg4 image:(id)arg5 ;
-(int)_performBlurAnalysis:(*id)arg0 withLumaPixelBuffer:(struct __CVBuffer *)arg1 isSDOF:(BOOL)arg2 ;
-(int)_performExposureAnalysis:(*id)arg0 withLumaPixelBuffer:(struct __CVBuffer *)arg1 ;
-(int)_performRotationAnalysis:(*id)arg0 withColorPixelBuffer:(struct __CVBuffer *)arg1 ;
-(int)_performSceneAnalysis:(*id)arg0 image:(id)arg1 abnormalDimension:(NSUInteger)arg2 ;
-(void)_configureRequest:(id)arg0 withRevision:(NSUInteger)arg1 ;
-(void)_generateSceneClassifications:(id)arg0 fromRequests:(id)arg1 ;
-(void)_insertBoundingBox:(id)arg0 toSortedBoundingBoxes:(id)arg1 ;
-(void)_parseClassificationObservations:(id)arg0 toClassificationResults:(id)arg1 ;
-(void)_parseClassificationObservations:(id)arg0 withPrefix:(id)arg1 toClassificationResults:(id)arg2 ;
-(void)analyzeWithImageURL:(id)arg0 abnormalDimension:(NSUInteger)arg1 isSDOF:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;


@end


#endif