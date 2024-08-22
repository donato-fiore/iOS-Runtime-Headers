// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEALTHMEDICATIONSPLUGINUNPROTECTEDDATABASESCHEMA_H
#define HDHEALTHMEDICATIONSPLUGINUNPROTECTEDDATABASESCHEMA_H

@class NSArray, NSString;
@protocol HDHealthMedicationsPluginDatabaseSchema;

#import <Foundation/Foundation.h>


@interface HDHealthMedicationsPluginUnprotectedDatabaseSchema : NSObject <HDHealthMedicationsPluginDatabaseSchema>



@property (readonly, nonatomic) NSInteger currentSchemaVersion;
@property (readonly, copy, nonatomic) NSArray *databaseEntities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)registerMigrationStepsWithMigrator:(id)arg0 schemaName:(id)arg1 ;


@end


#endif