// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDREADLATERPERSISTENCE_H
#define EDREADLATERPERSISTENCE_H

@protocol EDPersistenceDatabaseSchemaProvider, EDReadLaterProvider, EDReadLaterCloudStorageDateProvider;

#import <Foundation/Foundation.h>

#import "EDReadLaterCloudStorage.h"
#import "EDPersistenceDatabase.h"
#import "EDPersistenceHookRegistry.h"

@interface EDReadLaterPersistence : NSObject <EDPersistenceDatabaseSchemaProvider, EDReadLaterProvider, EDReadLaterCloudStorageDateProvider>



@property (retain, nonatomic) EDReadLaterCloudStorage *cloudStorage; // ivar: _cloudStorage
@property (retain, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, nonatomic) BOOL hasReadLaterMessages;
@property (retain, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry


+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(id)cloudStorageReadLaterDateForMessage:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 hookRegistry:(id)arg1 ;
-(void)_persistReadLater:(id)arg0 date:(id)arg1 ;
-(void)_removeReadLater:(id)arg0 ;
-(void)_resetDisplayDateForMessage:(id)arg0 connection:(id)arg1 ;
-(void)persistReadLaterForMessage:(id)arg0 date:(id)arg1 ;
-(void)removeReadLaterForMessage:(id)arg0 ;
-(void)scheduleRecurringActivity;


@end


#endif