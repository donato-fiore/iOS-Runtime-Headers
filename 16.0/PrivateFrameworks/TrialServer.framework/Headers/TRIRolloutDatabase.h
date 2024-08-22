// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIROLLOUTDATABASE_H
#define TRIROLLOUTDATABASE_H


#import <Foundation/Foundation.h>

#import "TRIDatabase.h"

@interface TRIRolloutDatabase : NSObject {
    TRIDatabase *_db;
}




// -(BOOL)_enumerateRecordsMatchingWhereClause:(id)arg0 bind:(id)arg1 prependingWithClause:(unk)arg2 usingTransaction:(id)arg3 block:(id)arg4  ;
-(BOOL)activateDeployment:(id)arg0 withFactorPackSetId:(id)arg1 targetingRuleIndex:(id)arg2 deactivatedDeployments:(id)arg3 deactivatedFactorPackSetIds:(id)arg4 usingTransaction:(id)arg5 ;
-(BOOL)addNewRolloutWithRecord:(id)arg0 ;
-(BOOL)deactivateDeployment:(id)arg0 usingTransaction:(id)arg1 ;
-(BOOL)deactivateDeploymentsWithRolloutId:(id)arg0 deactivatedDeployment:(*id)arg1 deactivatedFactorPackSetId:(*id)arg2 usingTransaction:(id)arg3 ;
-(BOOL)enumerateActiveRecordsWithVisibility:(unsigned int)arg0 usingTransaction:(id)arg1 block:(id)arg2 ;
-(BOOL)enumerateRecordsOverlappingNamespaces:(id)arg0 usingTransaction:(id)arg1 block:(id)arg2 ;
-(BOOL)enumerateRecordsUsingTransaction:(id)arg0 block:(id)arg1 ;
-(BOOL)enumerateRecordsWithRolloutId:(id)arg0 usingTransaction:(id)arg1 block:(id)arg2 ;
-(BOOL)hasRecordReferencingFactorPackSetId:(id)arg0 withReferenceType:(unsigned int)arg1 ;
-(BOOL)setActiveFactorPackSetId:(id)arg0 activeTargetingRuleIndex:(id)arg1 forDeployment:(id)arg2 usingTransaction:(id)arg3 ;
-(BOOL)setStatus:(NSInteger)arg0 forDeployment:(id)arg1 usingTransaction:(id)arg2 ;
-(BOOL)setTargetedFactorPackSetId:(id)arg0 targetedTargetingRuleIndex:(id)arg1 forDeployment:(id)arg2 usingTransaction:(id)arg3 ;
-(BOOL)targetDeployment:(id)arg0 toFactorPackSetId:(id)arg1 targetingRuleIndex:(id)arg2 usingTransaction:(id)arg3 ;
-(id)_dataNoCopyFromStmt:(id)arg0 columnName:(char *)arg1 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(id)recordWithDeployment:(id)arg0 usingTransaction:(id)arg1 ;
-(struct ? )removeRecordWithDeployment:(id)arg0 ;
-(struct ? )removeRecordWithDeployment:(id)arg0 usingRefCounting:(BOOL)arg1 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;


@end


#endif