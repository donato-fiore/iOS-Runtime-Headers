// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSXPCSTORESERVERCONNECTIONCONTEXT_H
#define NSXPCSTORESERVERCONNECTIONCONTEXT_H

@protocol NSCoreDataKeyedArchivingDelegate;

#import <Foundation/Foundation.h>

#import "NSManagedObjectContext.h"
#import "NSXPCStoreConnectionInfo.h"

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate>

 {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id *_manager;
}




-(BOOL)_allowCoreDataFutures;
-(id)cache;
-(id)description;
-(id)entitlements;
-(id)initWithConnectionInfo:(id)arg0 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(id)managedObjectContext;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(id)notificationManager;
-(id)persistentStoreCoordinator;
-(id)userInfo;
-(struct ? )auditToken;
-(void)dealloc;
-(void)setManagedObjectContext:(id)arg0 ;
-(void)setNotificationManager:(id)arg0 ;
-(void)setUserInfo:(id)arg0 ;


@end


#endif