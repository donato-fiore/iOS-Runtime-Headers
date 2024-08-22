// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPFULLANALYSISASSETPROCESSINGTASK_H
#define VCPFULLANALYSISASSETPROCESSINGTASK_H

@class NSArray, PHPhotoLibrary, NSDictionary;
@protocol VCPMADTaskProtocol;

#import <Foundation/Foundation.h>

#import "VCPDatabaseReader.h"

@interface VCPFullAnalysisAssetProcessingTask : NSObject <VCPMADTaskProtocol>

 {
    id *_completionHandler;
    NSArray *_assets;
    PHPhotoLibrary *_photoLibrary;
    VCPDatabaseReader *_database;
    atomic<bool> _cancel;
    atomic<bool> _started;
    BOOL _allowOnDemand;
    NSUInteger _analysisTypes;
    NSDictionary *_options;
}




// +(id)taskWithAsset:(id)arg0 andAnalysisTypes:(NSUInteger)arg1 andOptions:(id)arg2 andProgressHandler:(id)arg3 andCompletionHandler:(unk)arg4  ;
-(BOOL)autoCancellable;
-(float)resourceRequirement;
-(id)analyzeOndemand:(id)arg0 forAnalysisTypes:(NSUInteger)arg1 withExistingAnalysis:(id)arg2 error:(*id)arg3 ;
// -(id)initWithAssets:(id)arg0 analysisTypes:(NSUInteger)arg1 options:(id)arg2 progressHandler:(id)arg3 andCompletionHandler:(unk)arg4  ;
-(id)requestAnalysis:(NSUInteger)arg0 forAsset:(id)arg1 andDatabase:(id)arg2 error:(*id)arg3 ;
-(int)main;
-(int)run;
-(void)cancel;
-(void)dealloc;


@end


#endif