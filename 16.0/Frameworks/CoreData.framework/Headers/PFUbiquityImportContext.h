// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYIMPORTCONTEXT_H
#define PFUBIQUITYIMPORTCONTEXT_H

@class NSString, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "_PFUbiquityStack.h"
#import "PFUbiquityStoreMetadata.h"
#import "PFUbiquityPeer.h"
#import "PFUbiquityKnowledgeVector.h"
#import "PFUbiquityTransactionLog.h"
#import "PFUbiquityStoreSaveSnapshot.h"
#import "PFUbiquitySwitchboardCacheWrapper.h"
#import "PFUbiquityBaselineHeuristics.h"

@interface PFUbiquityImportContext : NSObject {
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeer *_actingPeer;
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    NSString *_exportingPeerID;
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquityStoreSaveSnapshot *_storeSaveSnapshot;
    NSDictionary *_globalIDToLocalIDURICache;
    NSMutableDictionary *_globalIDToFetchedObject;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
    PFUbiquityBaselineHeuristics *_heuristics;
}




-(id)init;
-(id)initWithStack:(id)arg0 andStoreMetadata:(id)arg1 ;
-(id)initWithStoreName:(id)arg0 andUbiquityRootLocation:(id)arg1 withLocalPeerID:(id)arg2 ;
-(void)dealloc;


@end


#endif