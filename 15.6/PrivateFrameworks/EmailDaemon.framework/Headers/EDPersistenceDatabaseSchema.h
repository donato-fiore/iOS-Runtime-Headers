// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPERSISTENCEDATABASESCHEMA_H
#define EDPERSISTENCEDATABASESCHEMA_H


#import <Foundation/Foundation.h>


@interface EDPersistenceDatabaseSchema : NSObject



+(id)_protectedSchemaProviders;
+(id)_schemaProviders;
+(id)_schemaWithPopulationBlock:(id)arg0 ;
+(id)additionalSchemaProviders;
+(id)mailboxesTableName;
+(id)objectPropertyMapperForSchema:(id)arg0 protectedSchema:(id)arg1 ;
+(id)partialMailboxesTableSchema;
+(id)propertiesTableName;
+(id)propertiesTableSchema;
+(id)propertyMapper;
+(id)protectedSchema;
+(id)schema;
+(void)_initializeSchemas;
+(void)test_resetSchema;


@end


#endif