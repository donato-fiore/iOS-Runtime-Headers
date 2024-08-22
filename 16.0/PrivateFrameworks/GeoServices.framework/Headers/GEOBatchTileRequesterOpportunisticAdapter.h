// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOBATCHTILEREQUESTEROPPORTUNISTICADAPTER_H
#define GEOBATCHTILEREQUESTEROPPORTUNISTICADAPTER_H

@class NSString;
@protocol GEOBatchTileRequesterDelegate, GEOOpportunisticDataSource, GEOOpportunisticDataSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOBatchTileRequester.h"
#import "GEOResourceManifestManager.h"
#import "GEOTileDB.h"
#import "GEORequestCounter.h"

@interface GEOBatchTileRequesterOpportunisticAdapter : NSObject <GEOBatchTileRequesterDelegate, GEOOpportunisticDataSource>

 {
    NSString *_sessionIdentifier;
    GEOBatchTileRequester *_requester;
    GEOResourceManifestManager *_manifestManager;
    GEOTileDB *_diskCache;
    GEORequestCounter *_requestCounter;
    unsigned char _requestCounterPolicy;
    GEOOnce_s _started;
}


@property (readonly, nonatomic) NSUInteger bytesDownloaded;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEOOpportunisticDataSourceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)policy;
-(id)init;
-(id)initWithSessionIdentifier:(id)arg0 batchTileRequester:(id)arg1 manifestManager:(id)arg2 diskCache:(id)arg3 requestCounter:(id)arg4 requestCounterPolicy:(unsigned char)arg5 ;
-(void)batchTileRequester:(id)arg0 failedToLoadKey:(struct _GEOTileKey )arg1 error:(id)arg2 ;
// -(void)batchTileRequester:(id)arg0 receivedData:(id)arg1 tileEdition:(unsigned int)arg2 tileSet:(unk)arg3 etag:(unsigned int)arg4 forKey:(struct ? )arg5 userInfo:(id)arg6  ;
-(void)batchTileRequesterDidFinish:(id)arg0 ;
-(void)cancel;
-(void)pause;
-(void)resume;


@end


#endif