// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASDATABASEMIGRATOR_H
#define _PASDATABASEMIGRATOR_H


#import <Foundation/Foundation.h>

#import "_PASLock.h"

@interface _PASDatabaseMigrator : NSObject {
    _PASLock *_contexts;
}




-(BOOL)_allContextsAtVersionZeroWithContexts:(id)arg0 ;
-(BOOL)_anyContextHasFutureVersionWithContexts:(id)arg0 ;
-(BOOL)_anyContextHasMismatchedVersionWithContexts:(id)arg0 ;
-(BOOL)_canContinueMigratingWithContexts:(id)arg0 ;
-(BOOL)_migrationNeededWithContexts:(id)arg0 toVersion:(unsigned int)arg1 ;
-(BOOL)migrationNeeded;
-(id)_contextForMigrationObject:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMigrationObjects:(id)arg0 ;
-(unsigned char)_clearDatabase:(id)arg0 ;
-(unsigned char)_migrateDatabasesWithContexts:(id)arg0 toVersion:(unsigned int)arg1 ;
-(unsigned char)_migrateOneStepToVersion:(unsigned int)arg0 contexts:(id)arg1 ;
-(unsigned char)_runQueries:(id)arg0 nextVersion:(unsigned int)arg1 context:(id)arg2 ;
-(unsigned char)_runQuery:(id)arg0 context:(id)arg1 database:(id)arg2 ;
-(unsigned char)_skipFromZeroSchemaWithContexts:(id)arg0 ;
-(unsigned char)_unmigrateDatabasesWithContexts:(id)arg0 ;
-(unsigned char)migrateDatabases;
-(unsigned char)migrateDatabasesToVersion:(unsigned int)arg0 ;
-(unsigned char)unmigrateDatabases;
-(void)_prepareContexts:(id)arg0 ;


@end


#endif