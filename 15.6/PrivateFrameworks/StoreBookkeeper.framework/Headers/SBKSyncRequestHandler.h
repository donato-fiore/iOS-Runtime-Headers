// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKSYNCREQUESTHANDLER_H
#define SBKSYNCREQUESTHANDLER_H

@class NSString, NSMutableDictionary, NSArray;
@protocol SBKSyncTransactionProcessing, OS_dispatch_queue;


#import "SBKRequestHandler.h"
#import "SBKSyncResponseData.h"
#import "SBKTransactionController.h"

@interface SBKSyncRequestHandler : SBKRequestHandler <SBKSyncTransactionProcessing>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_overrideResponseDomainVersion;
    NSMutableDictionary *_responseDataByKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *responseConflictedKeys; // ivar: _responseConflictedKeys
@property (readonly, nonatomic) SBKSyncResponseData *responseData; // ivar: _responseData
@property (readonly, nonatomic) NSArray *responseDeletedKeys; // ivar: _responseDeletedKeys
@property (copy, nonatomic) NSString *responseDomainVersion;
@property (readonly, nonatomic) NSArray *responseUpdatedKeys; // ivar: _responseUpdatedKeys
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBKTransactionController *transactionController; // ivar: _transactionController


+(NSInteger)conflictDetectionType;
-(id)initWithBagContext:(id)arg0 ;
-(id)initWithBagContext:(id)arg0 accountIdentifier:(id)arg1 ;
-(id)responseDataForResponseKey:(id)arg0 ;
-(id)transaction:(id)arg0 keyValuePairForUpdatedKey:(id)arg1 ;
-(void)_onQueue_clearTransactionResponseData;
-(void)clearTransactionResponseData;
-(void)startTransactionWithSyncAnchor:(id)arg0 keysToUpdate:(id)arg1 keysToDelete:(id)arg2 finishedBlock:(id)arg3 ;
-(void)transaction:(id)arg0 didProcessResponseData:(id)arg1 ;
-(void)transaction:(id)arg0 processDeletedKey:(id)arg1 isDirty:(*BOOL)arg2 ;
-(void)transaction:(id)arg0 processUpdatedKey:(id)arg1 data:(id)arg2 conflict:(BOOL)arg3 isDirty:(*BOOL)arg4 ;
-(void)transaction:(id)arg0 willProcessResponseData:(id)arg1 ;


@end


#endif