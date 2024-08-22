// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEPRESENTERRELINQUISHMENT_H
#define NSFILEPRESENTERRELINQUISHMENT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "NSCountedSet.h"

@interface NSFilePresenterRelinquishment : NSObject {
    os_unfair_lock_s _lock;
    NSCountedSet *_blockingAccessClaimIDs;
    NSMutableArray *_relinquishReplies;
    id *_reacquirer;
    NSMutableArray *_blockingPrerelinquishReplies;
    BOOL _prerelinquishInProgress;
}




-(BOOL)_locked_addRelinquishReply:(id)arg0 ;
-(void)_locked_addPrerelinquishReply:(id)arg0 ;
-(void)dealloc;
-(void)didRelinquish;
// -(void)performRelinquishmentToAccessClaimIfNecessary:(id)arg0 usingBlock:(id)arg1 withReply:(unk)arg2  ;
// -(void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(id)arg0 withReply:(unk)arg1  ;
-(void)removeAllBlockingAccessClaimIDs;
-(void)removeBlockingAccessClaimID:(id)arg0 ;
-(void)removeBlockingAccessClaimID:(id)arg0 thenContinue:(id)arg1 ;
-(void)setReacquirer:(id)arg0 ;


@end


#endif