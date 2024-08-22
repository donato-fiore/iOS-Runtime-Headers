// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYTRANSACTIONHISTORYCACHE_H
#define PFUBIQUITYTRANSACTIONHISTORYCACHE_H

@class NSString, NSMutableDictionary, NSRecursiveLock, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "NSPersistentStore.h"
#import "NSPersistentStoreCoordinator.h"
#import "PFUbiquityKnowledgeVector.h"
#import "PFUbiquityGlobalObjectIDCache.h"

@interface PFUbiquityTransactionHistoryCache : NSObject {
    NSString *_localPeerID;
    PFUbiquityLocation *_rootLocation;
    NSString *_storeName;
    NSPersistentStore *_privateStore;
    NSPersistentStoreCoordinator *_privatePSC;
    NSMutableDictionary *_peerIDToHistoryArray;
    NSMutableDictionary *_globalIDToHistoryArray;
    NSRecursiveLock *_peerIDToHistoryArrayLock;
    NSMutableArray *_entriesToWrite;
    PFUbiquityKnowledgeVector *_cacheKV;
    PFUbiquityKnowledgeVector *_minCacheKV;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    BOOL _hasScheduledWriteBlock;
}




-(BOOL)addTransactionEntry:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif