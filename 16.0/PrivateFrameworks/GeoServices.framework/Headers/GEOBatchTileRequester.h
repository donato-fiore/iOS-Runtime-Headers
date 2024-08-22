// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOBATCHTILEREQUESTER_H
#define GEOBATCHTILEREQUESTER_H

@class NSString, NSMutableDictionary, NSError;
@protocol GEOTileRequesterDelegate, OS_dispatch_queue, OS_os_log, OS_dispatch_group, GEOBatchTileRequesterDelegate;

#import <Foundation/Foundation.h>

#import "GEOTileKeyList.h"
#import "GEOApplicationAuditToken.h"
#import "GEOTileKeyMap.h"

@interface GEOBatchTileRequester : NSObject <GEOTileRequesterDelegate>

 {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_os_log> *_log;
    NSString *_logPrefix;
    NSObject<OS_dispatch_group> *_preparationGroup;
    BOOL _canceled;
    BOOL _paused;
    GEOOnce_s _finished;
    NSMutableDictionary *_activeRequesters;
    GEOTileKeyList *_remainingKeysForActiveRequesters;
    id *_tileRequesterCreationBlock;
    GEOApplicationAuditToken *_auditToken;
    GEOTileKeyMap *_currentStaleETags;
    GEOTileKeyMap *_currentStaleData;
    NSUInteger _requestOptions;
    NSError *_firstError;
}


@property (readonly, nonatomic) NSUInteger bytesDownloaded; // ivar: _bytesDownloaded
@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (weak, nonatomic) NSObject<GEOBatchTileRequesterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, nonatomic) NSUInteger failedTiles; // ivar: _failedTiles
@property (readonly, nonatomic) NSUInteger numberOfTilesAttempted; // ivar: _numberOfTilesAttempted
@property (readonly, nonatomic) NSUInteger numberOfTilesConsidered;
@property (readonly) unsigned char reason;
@property (readonly, nonatomic) NSString *region; // ivar: _regionCode
@property (readonly, nonatomic) NSUInteger successfulTiles; // ivar: _successfulTiles


-(BOOL)cancelKey:(struct _GEOTileKey *)arg0 ;
-(id)init;
-(id)initWithCountryCode:(id)arg0 region:(id)arg1 auditToken:(id)arg2 requestOptions:(NSUInteger)arg3 log:(id)arg4 logPrefix:(id)arg5 tileRequesterCreationBlock:(id)arg6 ;
-(void)_finish;
-(void)_requestNextBatch;
-(void)_startRequesterForKeys:(id)arg0 staleCachedETags:(id)arg1 staleCachedData:(id)arg2 ;
-(void)cancel;
-(void)determineNextBatchWithQueue:(id)arg0 callback:(id)arg1 ;
-(void)didFinishWithError:(id)arg0 ;
-(void)downloadDidFailForTile:(struct _GEOTileKey *)arg0 error:(id)arg1 ;
-(void)downloadDidSucceedForTile:(struct _GEOTileKey *)arg0 downloadSize:(NSUInteger)arg1 httpStatus:(unsigned int)arg2 ;
-(void)pause;
-(void)resume;
// -(void)tileRequester:(id)arg0 receivedData:(id)arg1 tileEdition:(unsigned int)arg2 tileSetDB:(unk)arg3 tileSet:(unsigned int)arg4 etag:(struct ? )arg5 forKey:(id)arg6 userInfo:(id)arg7  ;
-(void)tileRequester:(id)arg0 receivedError:(id)arg1 forKey:(struct _GEOTileKey )arg2 ;
-(void)tileRequesterFinished:(id)arg0 ;


@end


#endif