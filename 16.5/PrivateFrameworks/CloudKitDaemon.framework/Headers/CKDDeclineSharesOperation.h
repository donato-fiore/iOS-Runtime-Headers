// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDDECLINESHARESOPERATION_H
#define CKDDECLINESHARESOPERATION_H

@class NSMutableDictionary, NSMutableArray;
@protocol CKDeclineSharesOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDDeclineSharesOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKDeclineSharesOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL; // ivar: _clientProvidedMetadatasByURL
@property (copy, nonatomic) id *declineCompletionBlock; // ivar: _declineCompletionBlock
@property (retain, nonatomic) NSMutableArray *shareURLsToDecline; // ivar: _shareURLsToDecline
@property (nonatomic) NSUInteger state;


-(BOOL)_declineShares;
-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleShareURLDeclined:(id)arg0 responseCode:(id)arg1 ;
-(void)_performCallbackForURL:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif