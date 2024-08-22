// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTORESTREAM_H
#define BMSTORESTREAM_H

@class NSString, BMStoreConfig, BMFileManager, BMBFSPruningDelegate;
@protocol BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream;

#import <Foundation/Foundation.h>

#import "BMStorePublisherManager.h"
#import "BMStoreSource.h"
#import "BMStoreValidator.h"
#import "BMStreamsAccessClient.h"

@interface BMStoreStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream>

 {
    BMStorePublisherManager *_publisherManager;
    NSString *_streamIdentifier;
    BMStoreConfig *_storeConfig;
    BMStoreSource *_source;
    BMStoreValidator *_validator;
    NSUInteger _streamType;
    BMStreamsAccessClient *_accessClient;
    BMFileManager *_fileManager;
}


@property (retain, nonatomic) BMBFSPruningDelegate *bfsPruningDelegate; // ivar: _bfsPruningDelegate
@property (readonly, nonatomic) NSString *identifier;


+(id)new;
-(BOOL)_requestReadAccess;
-(BOOL)_requestReadWriteAccess;
-(BOOL)pruneEventsWithError:(*id)arg0 predicateBlock:(id)arg1 ;
-(BOOL)pruneEventsWithReason:(NSUInteger)arg0 error:(*id)arg1 predicateBlock:(id)arg2 ;
-(id)init;
-(id)initWithPrivateStreamIdentifier:(id)arg0 storeConfig:(id)arg1 ;
-(id)initWithPublicStream:(NSInteger)arg0 ;
-(id)initWithPublicStream:(NSInteger)arg0 protectionClass:(NSUInteger)arg1 ;
-(id)initWithPublicStream:(NSInteger)arg0 storeConfig:(id)arg1 ;
-(id)initWithRestrictedStreamIdentifier:(id)arg0 ;
-(id)initWithRestrictedStreamIdentifier:(id)arg0 protectionClass:(NSUInteger)arg1 ;
-(id)initWithRestrictedStreamIdentifier:(id)arg0 storeConfig:(id)arg1 ;
-(id)initWithStreamIdentifier:(id)arg0 storeConfig:(id)arg1 ;
-(id)initWithStreamIdentifier:(id)arg0 storeConfig:(id)arg1 streamType:(NSUInteger)arg2 ;
-(id)publisher;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 lastN:(id)arg3 reversed:(BOOL)arg4 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 reversed:(BOOL)arg3 ;
-(id)publisherWithStartTime:(id)arg0 withEndTime:(id)arg1 withMaxEvents:(id)arg2 reversed:(BOOL)arg3 ;
-(id)publishersForRemoteDevices:(id)arg0 startTime:(CGFloat)arg1 includeLocal:(BOOL)arg2 pipeline:(id)arg3 ;
-(id)publishersForRemoteDevices:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(BOOL)arg5 includeLocal:(BOOL)arg6 pipeline:(id)arg7 ;
-(id)remoteDevices;
-(id)source;
-(id)validator;
-(void)_pruneWithStoreConfig:(id)arg0 expirationAge:(CGFloat)arg1 block:(id)arg2 ;
-(void)pruneExpiredEventsWithBlock:(id)arg0 ;
-(void)pruneLocalAndRemoteEventsWithPredicateBlock:(id)arg0 ;
-(void)pruneLocalAndRemoteEventsWithReason:(NSUInteger)arg0 usingPredicateBlock:(id)arg1 ;
-(void)pruneStreamByPruningPolicyMaxStreamSize;
-(void)pruneStreamBySize:(NSUInteger)arg0 ;
-(void)pruneTombstonesByAge:(CGFloat)arg0 ;
-(void)pruneWithPredicateBlock:(id)arg0 ;
-(void)pruneWithReason:(NSUInteger)arg0 usingPredicateBlock:(id)arg1 ;


@end


#endif