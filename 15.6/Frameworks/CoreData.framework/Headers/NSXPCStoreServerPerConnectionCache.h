// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSXPCSTORESERVERPERCONNECTIONCACHE_H
#define NSXPCSTORESERVERPERCONNECTIONCACHE_H

@class NSMutableDictionary, NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>

#import "NSSQLitePrefetchRequestCache.h"
#import "NSPersistentStoreCoordinator.h"

@interface NSXPCStoreServerPerConnectionCache : NSObject {
    NSSQLitePrefetchRequestCache *_prefetchRequestCache;
    NSMutableDictionary *_generationTokenMap;
    NSObject<OS_os_transaction> *_transaction;
    NSInteger _connections;
    NSString *_clientIdentifier;
}


@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator; // ivar: _coordinator


-(id)initWithCoordinator:(id)arg0 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(void)dealloc;


@end


#endif