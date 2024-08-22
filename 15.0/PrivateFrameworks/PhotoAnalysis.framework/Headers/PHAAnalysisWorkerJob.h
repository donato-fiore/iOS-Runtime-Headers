// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAANALYSISWORKERJOB_H
#define PHAANALYSISWORKERJOB_H

@class NSMutableDictionary, NSDictionary;


#import "PHAAssetProcessingJob.h"

@interface PHAAnalysisWorkerJob : PHAAssetProcessingJob

@property (readonly, nonatomic) BOOL canUseNetwork; // ivar: _canUseNetwork
@property (readonly, nonatomic) NSMutableDictionary *ignoreUntilDatesByAssetLocalIdentifier; // ivar: _ignoreUntilDatesByAssetLocalIdentifier
@property (nonatomic) BOOL persistsAnalysisState; // ivar: _persistsAnalysisState
@property (readonly, nonatomic) BOOL shouldBackoffForFailedNoResourceErrors; // ivar: _shouldBackoffForFailedNoResourceErrors
@property (readonly, nonatomic) NSDictionary *workerFlagsByAssetLocalIdentifier; // ivar: _workerFlagsByAssetLocalIdentifier


-(BOOL)startProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(BOOL)stopProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(id)_fetchAllAssetsForLocalIdentifiers:(id)arg0 ;
-(id)_resultsDescription;
-(id)dataLoaderOptions;
-(id)description;
-(id)ignoreUntilDateForAssetLocalIdentifier:(id)arg0 ;
-(id)initWithWorkerType:(short)arg0 scenario:(NSUInteger)arg1 workInfos:(id)arg2 canUseNetwork:(BOOL)arg3 shouldBackoffForFailedNoResource:(BOOL)arg4 library:(id)arg5 ;
-(id)statusAsDictionary;
-(int)workerFlagsForAssetLocalIdentifier:(id)arg0 ;
-(void)_markAssetsPending;
-(void)_processFailures;
-(void)finish;
-(void)prepare;
-(void)setIgnoreUntilDate:(id)arg0 forAssetLocalIdentifier:(id)arg1 ;


@end


#endif