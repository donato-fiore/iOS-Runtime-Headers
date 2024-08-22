// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANALYTICSPERSISTENCEMANAGER_H
#define ANALYTICSPERSISTENCEMANAGER_H

@class NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSXPCStoreServer;

#import <Foundation/Foundation.h>


@interface AnalyticsPersistenceManager : NSObject

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel; // ivar: _managedObjectModel
@property (retain, nonatomic) NSManagedObjectContext *persistenceContext; // ivar: _persistenceContext
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistenceCoordinator; // ivar: _persistenceCoordinator
@property (retain, nonatomic) NSXPCStoreServer *xpcStoreServer; // ivar: _xpcStoreServer


+(BOOL)isStoreCompatibleAtURL:(id)arg0 withModel:(id)arg1 ;
-(id)initWithManagedObjectModel:(id)arg0 storeDescriptor:(id)arg1 ;


@end


#endif