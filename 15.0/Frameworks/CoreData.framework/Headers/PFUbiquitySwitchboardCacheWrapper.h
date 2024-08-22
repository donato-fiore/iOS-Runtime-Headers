// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYSWITCHBOARDCACHEWRAPPER_H
#define PFUBIQUITYSWITCHBOARDCACHEWRAPPER_H

@class NSString, NSLock;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "PFUbiquityGlobalObjectIDCache.h"
#import "PFUbiquityPeerRangeCache.h"
#import "PFUbiquityTransactionLogCache.h"
#import "PFUbiquityTransactionHistoryCache.h"
#import "PFUbiquityKnowledgeVector.h"
#import "PFUbiquityPeerReceipt.h"

@interface PFUbiquitySwitchboardCacheWrapper : NSObject {
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    PFUbiquityPeerRangeCache *_peerRangeCache;
    PFUbiquityTransactionLogCache *_transactionLogCache;
    PFUbiquityTransactionHistoryCache *_transactionHistoryCache;
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityKnowledgeVector *_baselineKV;
    PFUbiquityPeerReceipt *_peerReceipt;
    BOOL _pendingReceiptWrite;
    NSLock *_receiptFileLock;
    BOOL _allowSchedulingOfReceiptFileWrites;
}




-(id)init;
-(id)initWithStoreName:(id)arg0 privateStore:(id)arg1 forLocalPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)_appWillResignActive:(id)arg0 ;
-(void)dealloc;


@end


#endif