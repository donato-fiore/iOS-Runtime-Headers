// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKSYNCTRANSACTION_H
#define SBKSYNCTRANSACTION_H

@class NSString, NSArray, NSURL;
@protocol SBKSyncTransactionProcessing;


#import "SBKTransaction.h"

@interface SBKSyncTransaction : SBKTransaction {
    NSString *_domain;
}


@property (readonly, nonatomic) NSInteger conflictDetectionType; // ivar: _conflictDetectionType
@property (readonly, nonatomic) NSArray *keysToDelete; // ivar: _keysToDelete
@property (readonly, nonatomic) NSArray *keysToUpdate; // ivar: _keysToUpdate
@property (readonly, copy, nonatomic) NSString *syncAnchor; // ivar: _syncAnchor
@property (readonly, nonatomic) NSURL *syncRequestURL; // ivar: _syncRequestURL
@property (weak, nonatomic) NSObject<SBKSyncTransactionProcessing> *transactionProcessor; // ivar: _transactionProcessor
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)clampsKey;
-(id)conflictDetectionOrdinalForKey:(id)arg0 ;
-(id)description;
-(id)domain;
-(id)initWithStoreBagContext:(id)arg0 syncAnchor:(id)arg1 keysToUpdate:(id)arg2 keysToDelete:(id)arg3 conflictDetectionType:(NSInteger)arg4 ;
-(id)initWithSyncRequestURL:(id)arg0 domain:(id)arg1 syncAnchor:(id)arg2 keysToUpdate:(id)arg3 keysToDelete:(id)arg4 conflictDetectionType:(NSInteger)arg5 ;
-(id)keyValuePairForUpdatedKey:(id)arg0 ;
-(id)newRequest;
-(id)requestURL;
-(void)_validateTransactionProcessor:(id)arg0 ;
-(void)processDataInResponse:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif