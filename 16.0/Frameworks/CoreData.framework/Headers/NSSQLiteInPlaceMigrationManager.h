// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLITEINPLACEMIGRATIONMANAGER_H
#define NSSQLITEINPLACEMIGRATIONMANAGER_H



#import "NSMigrationManager.h"

@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager



+(BOOL)_canMigrateWithMappingModel:(id)arg0 ;
-(BOOL)migrateStoreFromURL:(id)arg0 type:(id)arg1 options:(id)arg2 withMappingModel:(id)arg3 toDestinationURL:(id)arg4 destinationType:(id)arg5 destinationOptions:(id)arg6 error:(*id)arg7 ;
-(void)dealloc;


@end


#endif