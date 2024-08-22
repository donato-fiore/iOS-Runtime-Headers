// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPANALYSISPROGRESSQUERY_H
#define VCPANALYSISPROGRESSQUERY_H


#import <Foundation/Foundation.h>


@interface VCPAnalysisProgressQuery : NSObject



+(BOOL)_screenProgress;
+(NSUInteger)_countAnalysisWithAssetBatch:(id)arg0 andDatabase:(id)arg1 andTaskID:(NSUInteger)arg2 ;
+(NSUInteger)_countEmbeddingAnalysisWithAssetBatch:(id)arg0 ;
+(NSUInteger)_countFaceAnalysisWithAssetBatch:(id)arg0 ;
+(NSUInteger)_countFailuresWithAssetBatch:(id)arg0 andDatabase:(id)arg1 andTaskID:(NSUInteger)arg2 ;
+(NSUInteger)_countMediaAnalysisWithAssetBatch:(id)arg0 andDatabase:(id)arg1 ;
+(NSUInteger)_countOCRAnalysisWithAssetBatch:(id)arg0 ;
+(NSUInteger)_countSceneAnalysisWithAssetBatch:(id)arg0 ;
+(NSUInteger)_countVisualSearchAnalysisWithAssetBatch:(id)arg0 ;
+(NSUInteger)_vipStatusForPhotoLibrary:(id)arg0 andType:(NSUInteger)arg1 ;
+(id)_processedPredicateForTaskID:(NSUInteger)arg0 ;
+(id)reportProgressForPhotoLibrary:(id)arg0 andTaskID:(NSUInteger)arg1 withExtendTimeoutBlock:(id)arg2 ;
+(int)_queryProgressDetailExpress:(*id)arg0 forPhotoLibrary:(id)arg1 andTaskID:(NSUInteger)arg2 ;
+(int)_queryProgressDetailExpressEmbeddingAnalysis:(*id)arg0 forPhotoLibrary:(id)arg1 ;
+(int)_scanPhotoLibrary:(id)arg0 withTaskID:(NSUInteger)arg1 statistics:(*id)arg2 andExtendTimeoutBlock:(id)arg3 ;
+(int)queryCachedFaceAnalysisProgress:(*id)arg0 forPhotoLibrary:(id)arg1 withExtendTimeoutBlock:(id)arg2 ;
+(int)queryProgress:(*float)arg0 forPhotoLibrary:(id)arg1 andTaskID:(NSUInteger)arg2 withExtendTimeoutBlock:(id)arg3 ;
+(int)queryProgressDetail:(*id)arg0 forPhotoLibrary:(id)arg1 andTaskID:(NSUInteger)arg2 withExtendTimeoutBlock:(id)arg3 ;


@end


#endif