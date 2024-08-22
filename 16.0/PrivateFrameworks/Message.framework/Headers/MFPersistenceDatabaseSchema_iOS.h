// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPERSISTENCEDATABASESCHEMA_IOS_H
#define MFPERSISTENCEDATABASESCHEMA_IOS_H

@class EDPersistenceDatabaseSchema;
@protocol EDPersistenceDatabaseSchemaProvider;



@interface MFPersistenceDatabaseSchema_iOS : EDPersistenceDatabaseSchema <EDPersistenceDatabaseSchemaProvider>





+(id)additionalSchemaProviders;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;


@end


#endif