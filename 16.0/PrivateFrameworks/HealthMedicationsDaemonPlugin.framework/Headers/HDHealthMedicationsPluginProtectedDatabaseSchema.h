// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHMEDICATIONSPLUGINPROTECTEDDATABASESCHEMA_H
#define HDHEALTHMEDICATIONSPLUGINPROTECTEDDATABASESCHEMA_H

@class NSArray, NSString;
@protocol HDHealthMedicationsPluginDatabaseSchema;

#import <Foundation/Foundation.h>


@interface HDHealthMedicationsPluginProtectedDatabaseSchema : NSObject <HDHealthMedicationsPluginDatabaseSchema>



@property (readonly, nonatomic) NSInteger currentSchemaVersion;
@property (readonly, copy, nonatomic) NSArray *databaseEntities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_sydney_createMedicationDismissedInteractionsTableWithTransaction:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_sydney_dropAndReAddMedicationScheduleTableWithTransaction:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_sydney_dropMedicationIngredientsTableWithTransaction:(id)arg0 error:(*id)arg1 ;
-(void)registerMigrationStepsWithMigrator:(id)arg0 schemaName:(id)arg1 ;


@end


#endif