// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYTRANSACTIONLOGCACHE_H
#define PFUBIQUITYTRANSACTIONLOGCACHE_H

@class NSString, NSMutableDictionary, NSRecursiveLock;

#import <Foundation/Foundation.h>

#import "PFUbiquityGlobalObjectIDCache.h"

@interface PFUbiquityTransactionLogCache : NSObject {
    NSString *_localPeerID;
    NSMutableDictionary *_transactionLogCache;
    NSRecursiveLock *_transactionLogCacheLock;
    PFUbiquityGlobalObjectIDCache *_gidCache;
}




-(id)init;
-(id)initWithLocalPeerID:(id)arg0 andGlobalIDCache:(id)arg1 ;
-(void)dealloc;


@end


#endif