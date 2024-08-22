// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMFMAPCACHE_H
#define FMFMAPCACHE_H

@class NSMutableDictionary, NSString, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMFMapCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheMetaData; // ivar: _cacheMetaData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheMetaQueue; // ivar: _cacheMetaQueue
@property (retain, nonatomic) NSString *cachePath; // ivar: _cachePath
@property (nonatomic) BOOL fileProtectionDeactivated; // ivar: _fileProtectionDeactivated
@property (retain, nonatomic) NSMutableDictionary *gridImageMetaData; // ivar: _gridImageMetaData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gridImageQueue; // ivar: _gridImageQueue
@property (retain, nonatomic) NSString *imageCachePath; // ivar: _imageCachePath
@property (retain, nonatomic) NSDate *lastPruneDate; // ivar: _lastPruneDate
@property (retain, nonatomic) NSMutableDictionary *mapImageMetaData; // ivar: _mapImageMetaData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mapImageQueue; // ivar: _mapImageQueue
@property (nonatomic) CGFloat mapLocationDistanceThreshold; // ivar: _mapLocationDistanceThreshold
@property (retain, nonatomic) NSMutableDictionary *noLocationImageMetaData; // ivar: _noLocationImageMetaData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *noLocationImageQueue; // ivar: _noLocationImageQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pendingImageQueue; // ivar: _pendingImageQueue
@property (retain, nonatomic) NSMutableDictionary *pendingMapImageMetaData; // ivar: _pendingMapImageMetaData


-(BOOL)pendingMapImageForLocation:(id)arg0 altitude:(CGFloat)arg1 pitch:(CGFloat)arg2 width:(CGFloat)arg3 andHeight:(CGFloat)arg4 ;
-(BOOL)pendingMapImageForRequest:(id)arg0 ;
-(CGFloat)cacheExpiryInSeconds;
-(CGFloat)pruneIntervalInSeconds;
-(id)cachedGridImageForWidth:(CGFloat)arg0 andHeight:(CGFloat)arg1 ;
-(id)cachedMapImageForLocation:(id)arg0 altitude:(CGFloat)arg1 pitch:(CGFloat)arg2 width:(CGFloat)arg3 andHeight:(CGFloat)arg4 ;
-(id)cachedMapImageForRequest:(id)arg0 ;
-(id)cachedNoLocationImageForWidth:(CGFloat)arg0 andHeight:(CGFloat)arg1 ;
-(id)gridKeyForWidth:(CGFloat)arg0 andHeight:(CGFloat)arg1 ;
-(id)init;
-(id)noLocationKeyForWidth:(CGFloat)arg0 andHeight:(CGFloat)arg1 ;
-(void)cacheGridImage:(id)arg0 forWidth:(CGFloat)arg1 andHeight:(CGFloat)arg2 ;
-(void)cacheMapImage:(id)arg0 forLocation:(id)arg1 altitude:(CGFloat)arg2 pitch:(CGFloat)arg3 width:(CGFloat)arg4 andHeight:(CGFloat)arg5 ;
-(void)cacheMapImage:(id)arg0 forRequest:(id)arg1 ;
-(void)cacheNoLocationImage:(id)arg0 forWidth:(CGFloat)arg1 andHeight:(CGFloat)arg2 ;
-(void)flushCache;
-(void)pruneCacheIfNeeded;
-(void)readMetaData;
-(void)saveMetaData;


@end


#endif