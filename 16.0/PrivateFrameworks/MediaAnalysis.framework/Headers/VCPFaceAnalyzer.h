// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPFACEANALYZER_H
#define VCPFACEANALYZER_H


#import <Foundation/Foundation.h>

#import "VCPFaceMerger.h"
#import "VCPObjectPool.h"

@interface VCPFaceAnalyzer : NSObject {
    int _processingVersion;
    VCPFaceMerger *_faceMerger;
    VCPObjectPool *_sessionPool;
}




+(BOOL)_downsampleBeforeFaceProcessing;
+(BOOL)_faceprintFastMode;
-(id)_existingFacesFromAsset:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(int)_createBlurRequests:(*id)arg0 andExposureRequests:(*id)arg1 forFaceObservations:(id)arg2 ;
-(int)_loadImageRequestHandler:(*id)arg0 orientation:(*unsigned int)arg1 bufferWidth:(*int)arg2 bufferHeight:(*int)arg3 withResource:(id)arg4 resourceURL:(id)arg5 andAsset:(id)arg6 ;
-(int)_performAnalysis:(*id)arg0 withRequestHandler:(id)arg1 quickMode:(BOOL)arg2 sourceWidth:(NSUInteger)arg3 sourceHeight:(NSUInteger)arg4 ;
-(int)analyzeAsset:(id)arg0 withResource:(id)arg1 resourceURL:(id)arg2 quickMode:(BOOL)arg3 results:(*id)arg4 ;
-(int)analyzeFaceQuality:(*id)arg0 withAsset:(id)arg1 andCancelBlock:(id)arg2 ;
-(int)quickAnalyzeAsset:(id)arg0 results:(*id)arg1 ;
-(int)refineAnalysis:(*id)arg0 requestHandler:(id)arg1 forAsset:(id)arg2 orientedWidth:(NSUInteger)arg3 orientedHeight:(NSUInteger)arg4 ;
-(int)updateMissingFaceprintForFaces:(id)arg0 withAsset:(id)arg1 ;
-(void)_checkAnalysisRequests:(id)arg0 forTooSmallFaceObservations:(id)arg1 withAnalysisResults:(id)arg2 ;
-(void)dealloc;


@end


#endif