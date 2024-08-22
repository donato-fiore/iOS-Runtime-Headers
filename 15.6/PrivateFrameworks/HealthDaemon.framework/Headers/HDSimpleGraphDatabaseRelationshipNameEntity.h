// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSIMPLEGRAPHDATABASERELATIONSHIPNAMEENTITY_H
#define HDSIMPLEGRAPHDATABASERELATIONSHIPNAMEENTITY_H

@class NSString;
@protocol HDSimpleGraphDatabaseEntityPredefinedValuesProvider;


#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseRelationshipNameEntity : HDSQLiteEntity <HDSimpleGraphDatabaseEntityPredefinedValuesProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)unitTesting_addRelationshipTypeWithName:(id)arg0 nameID:(NSInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)databaseTable;
+(id)insertSQLStatementsForPredfinedValues;
+(id)relationshipNameEntityForeignKey;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif