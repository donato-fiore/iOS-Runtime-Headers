// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSOURCESTORAGE_H
#define PPSOURCESTORAGE_H


#import <Foundation/Foundation.h>

#import "PPSQLDatabase.h"
#import "PPContactStorage.h"

@interface PPSourceStorage : NSObject {
    PPSQLDatabase *_db;
    PPContactStorage *_contactStorage;
}




+(CGFloat)matchAccuracyForSecondsFrom1970;
-(BOOL)iterSourcesWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(NSInteger)pruneSourcesWithNoReferencesWithTxnWitness:(id)arg0 ;
-(NSInteger)updateOrCreateRowForSource:(id)arg0 addingRefCount:(NSInteger)arg1 txnWitness:(id)arg2 ;
-(id)createSourceWithStatement:(id)arg0 txnWitness:(id)arg1 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(id)loadSourcesWithBundleId:(id)arg0 groupId:(id)arg1 documentId:(id)arg2 txnWitness:(id)arg3 ;
-(id)whereSourceIdInSubclauseWithSourceIds:(id)arg0 tableNameAlias:(id)arg1 binders:(id)arg2 ;


@end


#endif