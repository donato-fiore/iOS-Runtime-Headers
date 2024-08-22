// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIEXPERIMENTHISTORYDATABASE_H
#define TRIEXPERIMENTHISTORYDATABASE_H


#import <Foundation/Foundation.h>

#import "TRIDatabase.h"

@interface TRIExperimentHistoryDatabase : NSObject {
    TRIDatabase *_db;
}




// -(BOOL)_enumerateRecordsMatchingWhereClause:(id)arg0 bind:(id)arg1 block:(unk)arg2  ;
-(BOOL)addRecord:(id)arg0 ;
-(BOOL)enumerateRecordsNewerThanDate:(id)arg0 matchingDeploymentEnvironments:(id)arg1 block:(id)arg2 ;
-(BOOL)expireRecordsOlderThanDate:(id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;


@end


#endif