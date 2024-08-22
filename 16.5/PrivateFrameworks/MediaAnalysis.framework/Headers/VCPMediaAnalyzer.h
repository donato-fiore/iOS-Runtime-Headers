// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMEDIAANALYZER_H
#define VCPMEDIAANALYZER_H

@class NSNumber, NSXPCConnection, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface VCPMediaAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_analysisQueue;
    NSObject<OS_dispatch_queue> *_storageQueue;
    NSObject<OS_dispatch_group> *_storageGroup;
    NSNumber *_standalone;
    NSNumber *_minHighlightDuration;
    NSNumber *_noResultStrip;
    NSXPCConnection *_connection;
    NSXPCConnection *_mediaAnalysisServiceConnection;
    NSObject<OS_dispatch_queue> *_sandboxQueue;
    NSMutableDictionary *_sandboxHandles;
    atomic<int> _nextRequestID;
    NSObject<OS_dispatch_queue> *_cancelQueue;
    NSMutableDictionary *_cancelTokens;
}




+(Class)_getDistanceDescriptorClass;
+(NSUInteger)faceprintRevisionForPersonModel:(id)arg0 ;
+(id)classifyFaceObservation:(id)arg0 withPersonsModel:(id)arg1 error:(*id)arg2 ;
+(id)loadPersonModelAtPath:(id)arg0 error:(*id)arg1 ;
+(id)personModelFilepathForPhotoLibrary:(id)arg0 ;
+(id)sharedMediaAnalyzer;
-(BOOL)cancelAnalysisWithRequestID:(int)arg0 ;
-(NSInteger)_getDatabaseSandboxExtensionForPhotoLibraryURL:(id)arg0 ;
-(NSInteger)_getSandboxExtensionForMediaAnalysisDatabaseWithPhotoLibraryURL:(id)arg0 ;
-(NSUInteger)_metaAnalysisTypesForAsset:(id)arg0 ;
-(NSUInteger)_typesToRemove:(NSUInteger)arg0 requested:(NSUInteger)arg1 ;
-(id)_addClassificationResults:(id)arg0 analysis:(id)arg1 ;
-(id)_analyzeOndemand:(id)arg0 forAnalysisTypes:(NSUInteger)arg1 withExistingAnalysis:(id)arg2 andOptions:(id)arg3 storeAnalysis:(BOOL)arg4 cancelBlock:(id)arg5 ;
-(id)_databaseForPhotoLibrary:(id)arg0 ;
-(id)_postProcessMovieHighlights:(id)arg0 analysis:(id)arg1 withOptions:(id)arg2 ;
-(id)_queryDistanceDescriptor:(Class)arg0 ofAsset:(id)arg1 withExistingAnalysis:(id)arg2 andDatabase:(id)arg3 timeRange:(struct ? )arg4 lastFeature:(BOOL)arg5 isDegraded:(*BOOL)arg6 ;
-(id)_requestAnalysis:(NSUInteger)arg0 forAsset:(id)arg1 withExistingAnalysis:(id)arg2 andDatabase:(id)arg3 andOptions:(id)arg4 cancelBlock:(id)arg5 ;
-(id)analyzeOndemand:(id)arg0 pairedURL:(id)arg1 forAnalysisTypes:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)connection;
-(id)curateMovieAssetsForCollection:(id)arg0 withAlreadyCuratedAssets:(id)arg1 andDesiredCount:(NSUInteger)arg2 allowOnDemand:(BOOL)arg3 ;
-(id)init;
// -(id)requestAnalysis:(NSUInteger)arg0 forAssets:(id)arg1 withOptions:(id)arg2 andProgressHandler:(id)arg3 andError:(unk)arg4  ;
-(id)requestAnalysisTypes:(NSUInteger)arg0 forAssetWithResourceURLs:(id)arg1 withOptions:(id)arg2 error:(*id)arg3 ;
// -(id)requestAnalysisTypes:(NSUInteger)arg0 forAssets:(id)arg1 allowOndemand:(BOOL)arg2 progressHandler:(id)arg3 error:(unk)arg4  ;
-(id)requestLivePhotoEffectsForAssets:(id)arg0 allowOnDemand:(BOOL)arg1 flags:(NSUInteger)arg2 ;
-(id)requestMovieHighlightsForAssets:(id)arg0 withOptions:(id)arg1 ;
// -(int)requestAnalysesForAssets:(id)arg0 analysisTypes:(NSUInteger)arg1 allowOndemand:(BOOL)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
// -(int)requestAnalysis:(NSUInteger)arg0 forAssets:(id)arg1 withOptions:(id)arg2 andProgressHandler:(id)arg3 andCompletionHandler:(unk)arg4  ;
// -(int)requestAnalysisForAsset:(id)arg0 analysisTypes:(NSUInteger)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(int)requestAnalysisTypes:(NSUInteger)arg0 forAssets:(id)arg1 withOptions:(id)arg2 andProgressHandler:(id)arg3 cancelBlock:(unk)arg4 analyses:(id)arg5  ;
-(struct ? )postProcessMovieHighlightDuration:(id)arg0 withOptions:(id)arg1 ;
-(void)_checkDuplicate:(id)arg0 withAsset:(id)arg1 duplicate:(*NSInteger)arg2 ;
-(void)_getSceneDescriptors:(id)arg0 asDescriptorClass:(Class)arg1 withSceneRange:(struct ? )arg2 andAnalysisResults:(id)arg3 ;
-(void)_setupMediaAnalysisServiceConnection;
-(void)assetsAnalyzedSinceDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)assetsFromPhotoLibrary:(id)arg0 analyzedSinceDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)completeStorage;
-(void)dealloc;
-(void)distanceFromAsset:(id)arg0 timeRange:(struct ? )arg1 toAsset:(id)arg2 timeRange:(struct ? )arg3 duplicate:(*NSInteger)arg4 distance:(*float)arg5 ;
-(void)distanceFromAsset:(id)arg0 toAsset:(id)arg1 duplicate:(*NSInteger)arg2 distance:(*float)arg3 ;


@end


#endif