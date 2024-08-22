// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAANALYSISWORKERJOB_H
#define PHAANALYSISWORKERJOB_H



#import "PHAWorkerJob.h"

@interface PHAAnalysisWorkerJob : PHAWorkerJob

@property (readonly, nonatomic) BOOL canUseNetwork; // ivar: _canUseNetwork
@property (nonatomic) BOOL persistsAnalysisState; // ivar: _persistsAnalysisState


-(BOOL)startProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(BOOL)stopProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(id)description;
-(id)initWithWorkerType:(short)arg0 scenario:(NSUInteger)arg1 canUseNetwork:(BOOL)arg2 library:(id)arg3 ;


@end


#endif