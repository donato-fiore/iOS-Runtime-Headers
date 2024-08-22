// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDNANOSYNCSESSION_H
#define HDNANOSYNCSESSION_H



#import "HDSyncSession.h"
#import "HDSyncPredicate.h"
#import "HDNanoSyncStore.h"

@interface HDNanoSyncSession : HDSyncSession {
    NSUInteger _options;
    HDSyncPredicate *_syncPredicate;
}


@property (readonly, copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic, getter=isLastChance) BOOL lastChance;
@property (readonly, nonatomic) NSUInteger messageCount; // ivar: _messageCount
@property (readonly, nonatomic) HDNanoSyncStore *nanoSyncStore;
@property (readonly, nonatomic, getter=isPullRequest) BOOL pullRequest;
@property (readonly, nonatomic, getter=isRequestedByRemote) BOOL requestedByRemote;


-(BOOL)shouldOverrideCycleTrackingSymptomsForBackwardsCompatibilty;
-(NSInteger)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg0 ;
-(NSInteger)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg0 ;
-(id)changeSetWithChanges:(id)arg0 statusCode:(int)arg1 error:(id)arg2 ;
-(id)initWithSyncStore:(id)arg0 options:(NSUInteger)arg1 reason:(id)arg2 delegate:(id)arg3 completion:(id)arg4 ;
-(id)newChangeWithSyncEntityClass:(Class)arg0 version:(struct ? )arg1 ;
-(id)syncPredicate;
-(void)incrementMessageCount;
-(void)invokeCompletionWithSuccess:(BOOL)arg0 error:(id)arg1 ;


@end


#endif