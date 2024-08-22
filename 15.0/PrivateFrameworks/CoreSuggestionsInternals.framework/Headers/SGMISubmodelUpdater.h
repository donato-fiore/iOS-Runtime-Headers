// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMISUBMODELUPDATER_H
#define SGMISUBMODELUPDATER_H


#import <Foundation/Foundation.h>


@interface SGMISubmodelUpdater : NSObject



+(id)submodelAges;
+(id)submodeledFeatures;
+(void)checkForAndProcessVersionChange;
// +(void)incrementalSubmodelUpdateWithSaliencyModelConfig:(id)arg0 store:(id)arg1 shouldContinue:(id)arg2 finalGroundTruthDate:(unk)arg3 withSimulatedCSSearchableItemForTesting:(id)arg4 limit:(id)arg5  ;
+(void)incrementalSubmodelUpdateWithStore:(id)arg0 limit:(NSUInteger)arg1 ;
// +(void)incrementalSubmodelUpdateWithStore:(id)arg0 shouldContinue:(id)arg1 limit:(unk)arg2  ;
+(void)pruneDB;
+(void)purgeDeletedEmailsReferencesFromStore:(id)arg0 ;
+(void)purgeOldTokensFromStore:(id)arg0 ;
+(void)purgeTokensToMatchCappingPolicyFromStore:(id)arg0 ;


@end


#endif