// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOTESMIGRATIONMANAGER_H
#define NOTESMIGRATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface NotesMigrationManager : NSObject



-(BOOL)areStoreMetadata:(id)arg0 matchingEntityVersionsInModel:(id)arg1 ;
-(BOOL)migrateNotesStoreAtURL:(id)arg0 storeType:(id)arg1 managedObjectModel:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(BOOL)migrateNotesStoreAtURL:(id)arg0 storeType:(id)arg1 options:(id)arg2 sourceModel:(id)arg3 destinationModel:(id)arg4 mappingModel:(id)arg5 error:(*id)arg6 ;


@end


#endif