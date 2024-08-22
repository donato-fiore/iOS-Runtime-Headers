// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TBPREFERLOCALFETCHOPERATION_H
#define TBPREFERLOCALFETCHOPERATION_H

@class NSOperation, NSDate, NSOperationQueue, NSArray;
@protocol TBFetchRequest, TBFetchResponse;


#import "TBPreferLocalFetchDataSource.h"

@interface TBPreferLocalFetchOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}


@property (retain, nonatomic) TBPreferLocalFetchDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSOperationQueue *fetchQueue; // ivar: _fetchQueue
@property (retain, nonatomic) NSObject<TBFetchRequest> *fetchRequest; // ivar: _fetchRequest
@property (retain, nonatomic) NSObject<TBFetchRequest> *fetchRequestCopy; // ivar: _fetchRequestCopy
@property (retain, nonatomic) NSArray *remoteKeysToFetch; // ivar: _remoteKeysToFetch
@property (retain, nonatomic) NSObject<TBFetchResponse> *response; // ivar: _response
@property (retain, nonatomic) NSArray *satisfiedLocalKeys; // ivar: _satisfiedLocalKeys


-(BOOL)_doResults:(id)arg0 satisfyFetchRequest:(id)arg1 keysToFetchRemotely:(*id)arg2 satisfiedKeys:(*id)arg3 ;
-(BOOL)isFinished;
-(BOOL)isReady;
-(id)_tileItemsFromTileKeys:(id)arg0 ;
-(id)initWithFetchRequest:(id)arg0 dataSource:(id)arg1 fetchQueue:(id)arg2 ;
-(id)name;
-(void)_captureCacheEventWithStatus:(NSUInteger)arg0 userInfo:(id)arg1 error:(id)arg2 type:(NSUInteger)arg3 ;
-(void)_fetchLocal;
-(void)_fetchRemote;
-(void)_mergeLocalAndRemoteResults:(id)arg0 ;
-(void)finish;
-(void)finishAndCallCompletionWithResponse:(id)arg0 ;
-(void)start;


@end


#endif