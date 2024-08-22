// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCSTREAMINGRESULTS_H
#define FCSTREAMINGRESULTS_H

@class NSHashTable, NSMutableArray;
@protocol FCStreaming;

#import <Foundation/Foundation.h>

#import "FCAsyncSerialQueue.h"

@interface FCStreamingResults : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) _NSRange range;
@property (readonly, nonatomic) NSMutableArray *results; // ivar: _results
@property (readonly, nonatomic) FCAsyncSerialQueue *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) NSObject<FCStreaming> *underlyingStream; // ivar: _underlyingStream


-(id)array;
-(id)init;
-(id)initWithResults:(id)arg0 followedByStream:(id)arg1 ;
-(id)initWithStream:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsInRange:(struct _NSRange )arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)fetchAllObjectsWithBatchSize:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;
-(void)fetchObjectsUpToCount:(NSUInteger)arg0 ;
-(void)fetchObjectsUpToCount:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)fetchObjectsUpToCount:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 ;
-(void)fetchObjectsUpToCount:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 batchSize:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)fetchObjectsUpToCount:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif