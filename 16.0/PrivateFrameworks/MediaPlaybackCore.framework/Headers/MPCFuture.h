// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCFUTURE_H
#define MPCFUTURE_H

@class NSMutableArray, NSString, NSError, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPCFuture : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (copy, nonatomic) NSString *debugLabel; // ivar: _debugLabel
@property (readonly, nonatomic, getter=isDisconnected) BOOL disconnected; // ivar: _disconnected
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSMutableArray *failureBlocks; // ivar: _failureBlocks
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized; // ivar: _finalized
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid; // ivar: _invalid
@property (readonly, nonatomic) NSMapTable *invalidBlocks; // ivar: _invalidBlocks
@property (readonly, nonatomic) id *result; // ivar: _result
@property (readonly, nonatomic) NSMutableArray *successBlocks; // ivar: _successBlocks


-(id)description;
-(id)initWithQueue:(id)arg0 ;
-(id)onCompletion:(id)arg0 ;
-(id)onFailure:(id)arg0 ;
-(id)onInvalid:(id)arg0 ;
-(id)onSuccess:(id)arg0 ;
-(void)_onQueue_finalize;
-(void)dealloc;
-(void)disconnect;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithValue:(id)arg0 ;
-(void)invalidate;


@end


#endif