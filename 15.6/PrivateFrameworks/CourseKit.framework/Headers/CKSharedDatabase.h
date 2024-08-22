// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSHAREDDATABASE_H
#define CKSHAREDDATABASE_H

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

#import <Foundation/Foundation.h>


@interface CKSharedDatabase : NSObject

@property (retain, nonatomic) NSManagedObjectContext *mainManagedObjectContext; // ivar: _mainManagedObjectContext
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel; // ivar: _managedObjectModel
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator


+(id)databaseURL;
-(id)newManagedObjectContext;
-(id)urlForDataModel;


@end


#endif