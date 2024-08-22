// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDTABLEMETADATAPERSISTENCE_H
#define EDTABLEMETADATAPERSISTENCE_H

@protocol EDPersistenceDatabaseSchemaProvider;

#import <Foundation/Foundation.h>


@interface EDTableMetadataPersistence : NSObject <EDPersistenceDatabaseSchemaProvider>





+(BOOL)updateLargestDeletedRowID:(NSInteger)arg0 forTableName:(id)arg1 withConnection:(id)arg2 ;
+(NSInteger)largestDeletedRowIDForTableName:(id)arg0 withConnection:(id)arg1 ;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;


@end


#endif