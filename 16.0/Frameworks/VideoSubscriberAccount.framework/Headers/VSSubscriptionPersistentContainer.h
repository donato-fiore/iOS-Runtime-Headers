// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSUBSCRIPTIONPERSISTENTCONTAINER_H
#define VSSUBSCRIPTIONPERSISTENTCONTAINER_H

@class NSOperationQueue, NSPersistentStoreCoordinator, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "VSOptional.h"

@interface VSSubscriptionPersistentContainer : NSObject

@property (nonatomic) BOOL didSetupPersistence; // ivar: _didSetupPersistence
@property (retain, nonatomic) NSOperationQueue *migrationQueue; // ivar: _migrationQueue
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator
@property (copy, nonatomic) NSString *persistentStoreType; // ivar: _persistentStoreType
@property (copy, nonatomic) NSURL *persistentStoreURL; // ivar: _persistentStoreURL
@property (nonatomic) BOOL skipMigration; // ivar: _skipMigration
@property (copy, nonatomic) NSURL *subscriptionsPropertyListURL; // ivar: _subscriptionsPropertyListURL
@property (retain, nonatomic) VSOptional *viewContext; // ivar: _viewContext


-(BOOL)_setupPersistenceIfNeeded:(*id)arg0 ;
-(id)init;
// -(void)_performBlock:(id)arg0 andWait:(unk)arg1  ;
-(void)_removePersistentStore;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;


@end


#endif