// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMISUBMODELSMANAGER_H
#define SGMISUBMODELSMANAGER_H


#import <Foundation/Foundation.h>


@interface SGMISubmodelsManager : NSObject



+(void)addSubmodelStatsToLog:(id)arg0 ;
+(void)checkForAndProcessVersionChange;
// +(void)incrementalSubmodelUpdateWithSaliencyModelConfig:(id)arg0 store:(id)arg1 shouldContinue:(id)arg2 finalGroundTruthDate:(unk)arg3 withSimulatedCSSearchableItemForTesting:(id)arg4 limit:(id)arg5  ;
// +(void)incrementalSubmodelUpdateWithSaliencyModelConfig:(id)arg0 store:(id)arg1 shouldContinue:(id)arg2 finalGroundTruthDate:(unk)arg3 withSimulatedCSSearchableItemForTesting:(id)arg4 limit:(id)arg5 log:(NSUInteger)arg6  ;
+(void)incrementalSubmodelUpdateWithStore:(id)arg0 limit:(NSUInteger)arg1 log:(id)arg2 ;
// +(void)incrementalSubmodelUpdateWithStore:(id)arg0 shouldContinue:(id)arg1 limit:(unk)arg2 log:(NSUInteger)arg3  ;
+(void)pruneDB;
+(void)purgeDeletedEmailsReferencesFromStore:(id)arg0 ;
+(void)purgeOldTokensFromStore:(id)arg0 ;
+(void)purgeTokensToMatchCappingPolicyFromStore:(id)arg0 ;


@end


#endif