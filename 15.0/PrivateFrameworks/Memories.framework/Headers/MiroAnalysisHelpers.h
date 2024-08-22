// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROANALYSISHELPERS_H
#define MIROANALYSISHELPERS_H



#import "VEiOSSharedObject.h"

@interface MiroAnalysisHelpers : VEiOSSharedObject



+(id)buildTransientAggregateRangeTreeWithPersistentRanges:(id)arg0 masterSceneType:(NSUInteger)arg1 ;
+(int)timeInFramesWithDictionaryRepresentation:(id)arg0 naturalFrameRate:(NSInteger)arg1 ;
-(id)description;
-(id)init;
// -(void)analyzeUsingClientSideAnalyzerWithAsset:(id)arg0 performedAnalysisTypes:(NSUInteger)arg1 ranges:(id)arg2 options:(NSUInteger)arg3 relatedSortedAssets:(id)arg4 cancelGroup:(id)arg5 progressHandler:(id)arg6 completionHandler:(unk)arg7  ;
-(void)cancelAllAnalysisRequests;
-(void)dispatchFullOutOfProcessAnalysisForAssets:(id)arg0 ;


@end


#endif