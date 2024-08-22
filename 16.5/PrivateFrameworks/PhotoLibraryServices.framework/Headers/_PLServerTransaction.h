// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PLSERVERTRANSACTION_H
#define _PLSERVERTRANSACTION_H

@class PLClientTransaction, NSCountedSet;
@protocol OS_dispatch_queue;



@interface _PLServerTransaction : PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}




-(BOOL)isClientTransaction;
-(id)changeScopes;
-(id)generateChangeScopesDescription;
-(id)initWithPathManager:(id)arg0 identifier:(char *)arg1 ;
-(void)_enqueueChangeScopes:(id)arg0 ;
-(void)abortTransaction;
-(void)addChangeScopes:(id)arg0 ;
-(void)completeTransaction;
-(void)completeTransactionScope:(id)arg0 ;
-(void)dealloc;
-(void)popChangeScopesBatch;
-(void)pushChangeScopesBatch;


@end


#endif