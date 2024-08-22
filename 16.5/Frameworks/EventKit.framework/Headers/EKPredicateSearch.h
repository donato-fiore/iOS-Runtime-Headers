// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPREDICATESEARCH_H
#define EKPREDICATESEARCH_H

@class NSPredicate, NSString;
@protocol EKCancellableRemoteOperation;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation>

 {
    id *_callback;
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    id *_cancellationToken;
    BOOL _finished;
    BOOL _isCancelled;
    int _retryCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)searchWithEntityClass:(Class)arg0 predicate:(id)arg1 store:(id)arg2 ;
+(id)signpostHandle;
-(id)_createOSActivity;
-(id)fetchObjectIDs;
-(id)initWithEntityClass:(Class)arg0 predicate:(id)arg1 store:(id)arg2 ;
-(id)runSynchronously;
-(id)startWithCompletion:(id)arg0 ;
// -(void)_fetchObjectIDsActualWithCompletion:(id)arg0 synchronous:(unk)arg1  ;
// -(void)_startActivityWithCompletion:(id)arg0 synchronous:(unk)arg1  ;
// -(void)_startActualWithCompletion:(id)arg0 synchronous:(unk)arg1  ;
// -(void)_startFetchObjectIDsActivityWithCompletion:(id)arg0 synchronous:(unk)arg1  ;
// -(void)_startProcessingWithCompletion:(id)arg0 synchronous:(unk)arg1 processor:(BOOL)arg2  ;
-(void)cancel;
-(void)signpostEndWithError:(int)arg0 count:(NSUInteger)arg1 ;
-(void)signpostStart;
-(void)terminate;


@end


#endif