// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRINAMESPACEDATABASE_H
#define TRINAMESPACEDATABASE_H


#import <Foundation/Foundation.h>

#import "TRIDatabase.h"

@interface TRINamespaceDatabase : NSObject {
    TRIDatabase *_db;
}




// -(BOOL)_enumerateDynamicNamespaceRecordsWithWhereClause:(id)arg0 bind:(id)arg1 block:(unk)arg2  ;
-(BOOL)addOrUpdateDynamicNamespaceWithName:(id)arg0 compatibilityVersion:(unsigned int)arg1 defaultsFileURL:(id)arg2 teamId:(id)arg3 appContainerId:(id)arg4 appContainerType:(NSInteger)arg5 cloudKitContainer:(int)arg6 ;
-(BOOL)enumerateAppContainerIdsForContainer:(int)arg0 block:(id)arg1 ;
-(BOOL)enumerateDynamicNamespaceRecordsForContainer:(int)arg0 teamId:(id)arg1 block:(id)arg2 ;
-(BOOL)enumerateDynamicNamespaceRecordsWithBlock:(id)arg0 ;
-(BOOL)hasUnfetchedNamespaceForTeamId:(id)arg0 ;
-(id)dynamicNamespaceRecordWithNamespaceName:(id)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(struct ? )removeDynamicNamespaceRecordWithNamespaceName:(id)arg0 ;
-(struct ? )setFetched:(BOOL)arg0 forDynamicNamespaceName:(id)arg1 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;


@end


#endif