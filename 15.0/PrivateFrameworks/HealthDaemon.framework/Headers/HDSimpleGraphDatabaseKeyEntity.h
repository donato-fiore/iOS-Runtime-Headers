// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSIMPLEGRAPHDATABASEKEYENTITY_H
#define HDSIMPLEGRAPHDATABASEKEYENTITY_H

@class NSString;
@protocol HDSimpleGraphDatabaseEntityPredefinedValuesProvider;


#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseKeyEntity : HDSQLiteEntity <HDSimpleGraphDatabaseEntityPredefinedValuesProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)database:(id)arg0 hasKeyWithID:(NSInteger)arg1 error:(*id)arg2 ;
+(BOOL)insertKeyWithID:(NSInteger)arg0 name:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)databaseTable;
+(id)insertSQLStatementsForPredfinedValues;
+(id)keyEntityForeignKey;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif