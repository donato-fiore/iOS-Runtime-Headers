// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSIMPLEGRAPHDATABASEVALUETYPEENTITY_H
#define HDSIMPLEGRAPHDATABASEVALUETYPEENTITY_H

@class NSString;
@protocol HDSimpleGraphDatabaseEntityPredefinedValuesProvider;


#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseValueTypeEntity : HDSQLiteEntity <HDSimpleGraphDatabaseEntityPredefinedValuesProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)databaseTable;
+(id)indices;
+(id)insertSQLStatementsForPredfinedValues;
+(id)valueTypeEntityForeignKey;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif