// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCACHEUSAGEMONITOR_H
#define GEOCACHEUSAGEMONITOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEOCacheUsageMonitor : NSObject {
    NSMutableDictionary *_typeToHits;
    NSMutableDictionary *_typeToMisses;
    NSMutableDictionary *_tileCacheHitData;
    NSMutableDictionary *_tileCacheMissData;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}




+(id)sharedMonitor;
-(id)init;
-(void)_flush;
-(void)_recordTileCacheEventWithKey:(id)arg0 cacheEventDict:(id)arg1 tileSizeInBytes:(unsigned int)arg2 error:(id)arg3 ;
-(void)_startTimerIfNecessary;
-(void)dealloc;
-(void)flush;
-(void)recordCacheHitForType:(int)arg0 ;
-(void)recordCacheMissForType:(int)arg0 ;
-(void)recordTileCacheHitForReason:(unsigned char)arg0 tileSource:(unsigned char)arg1 tileKey:(struct _GEOTileKey *)arg2 tileSizeInBytes:(unsigned int)arg3 ;
-(void)recordTileCacheMissForReason:(unsigned char)arg0 missType:(int)arg1 tileKey:(struct _GEOTileKey *)arg2 loadError:(id)arg3 ;
-(void)recordTileCacheMissForReason:(unsigned char)arg0 missType:(int)arg1 tileKey:(struct _GEOTileKey *)arg2 tileSizeInBytes:(unsigned int)arg3 httpStatus:(unsigned int)arg4 ;


@end


#endif