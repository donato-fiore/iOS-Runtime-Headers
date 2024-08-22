// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSERVICECOMMANDTRANSACTION_H
#define SVXSERVICECOMMANDTRANSACTION_H

@class NSMutableDictionary, AceObject<SAAceCommand>, NSArray, NSMutableSet, NSHashTable;
@protocol SVXPerforming, SVXTaskTracking;

#import <Foundation/Foundation.h>


@interface SVXServiceCommandTransaction : NSObject {
    id<SVXPerforming> *_performer;
    NSInteger _state;
    NSMutableDictionary *_preparedResultsByHandlerIdentifier;
    NSMutableDictionary *_preparedContextsByHandlerIdentifier;
    NSMutableDictionary *_handledResultsByHandlerIdentifier;
    AceObject<SAAceCommand> *_command;
    NSArray *_handlers;
    id<SVXTaskTracking> *_taskTracker;
    id *_completion;
    NSMutableSet *_blockingTransactions;
    NSHashTable *_blockedTransactions;
}




-(id)description;
-(id)initWithPerformer:(id)arg0 command:(id)arg1 handlers:(id)arg2 taskTracker:(id)arg3 dependencies:(id)arg4 completion:(id)arg5 ;
-(void)_addBlockedTransaction:(id)arg0 ;
-(void)_didHandleAll;
-(void)_didPrepareAll;
-(void)_dispatchCompletionWithResult:(id)arg0 ;
-(void)_handle;
-(void)_handler:(id)arg0 didHandleWithResult:(id)arg1 completion:(id)arg2 ;
-(void)_handler:(id)arg0 didPrepareSuccessfully:(BOOL)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)_invalidate;
-(void)_prepare;
-(void)_removeBlockingTransaction:(id)arg0 ;
-(void)_unblockDependentTransactions;
-(void)addBlockedTransaction:(id)arg0 ;
-(void)dealloc;
-(void)handler:(id)arg0 didHandleWithResult:(id)arg1 completion:(id)arg2 ;
-(void)handler:(id)arg0 didPrepareSuccessfully:(BOOL)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)invalidate;
-(void)removeBlockingTransaction:(id)arg0 ;


@end


#endif