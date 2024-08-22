// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTILESERVERPROXY_H
#define GEOTILESERVERPROXY_H

@class NSLocale;
@protocol OS_dispatch_queue, GEOTileServerProxyDelegate;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestConfiguration.h"

@interface GEOTileServerProxy : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    int _resourceNotificationToken;
}


@property (readonly, weak, nonatomic) NSObject<GEOTileServerProxyDelegate> *delegate; // ivar: _delegate


-(NSUInteger)calculateFreeableSizeSync;
-(NSUInteger)shrinkDiskCacheToSizeSync:(NSUInteger)arg0 ;
-(id)initWithCacheLocation:(id)arg0 manifestConfiguration:(id)arg1 locale:(id)arg2 delegateQueue:(id)arg3 delegate:(id)arg4 ;
-(void)beginPreloadSessionOfSize:(NSUInteger)arg0 ;
-(void)calculateFreeableSize;
-(void)cancel:(struct _GEOTileKey *)arg0 batchID:(int)arg1 ;
-(void)close;
-(void)dealloc;
-(void)endPreloadSession;
-(void)flushPendingWrites;
-(void)generateRequestedFromTileLoaderBeginSignpost:(NSUInteger)arg0 tileKey:(struct _GEOTileKey *)arg1 options:(NSUInteger)arg2 ;
-(void)generateRequestedFromTileLoaderEndSignpost:(NSUInteger)arg0 ;
-(void)loadTiles:(id)arg0 batchID:(int)arg1 priorities:(*unsigned int)arg2 hasAdditionalInfos:(*BOOL)arg3 additionalInfos:(struct GEOTileLoaderAdditionalInfo *)arg4 signpostIDs:(*NSUInteger)arg5 createTimes:(*CGFloat)arg6 reason:(unsigned char)arg7 options:(NSUInteger)arg8 client:(id)arg9 ;
-(void)open;
-(void)reportCorruptTile:(struct _GEOTileKey *)arg0 ;
-(void)reprioritizeKey:(struct _GEOTileKey *)arg0 newPriority:(unsigned int)arg1 batchID:(int)arg2 ;
-(void)shrinkDiskCacheToSize:(NSUInteger)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif