// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOREGIONALRESOURCESTILELOADER_H
#define _GEOREGIONALRESOURCESTILELOADER_H


#import <Foundation/Foundation.h>

#import "GEORegionalResourceTileData.h"
#import "GEOResourceManifestConfiguration.h"
#import "GEOResourceLoader.h"

@interface _GEORegionalResourcesTileLoader : NSObject {
    GEORegionalResourceTileData *_tile;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOResourceLoader *_resourceLoader;
    os_unfair_lock_s _lock;
    _GEOTileKey _tileKey;
}


@property (readonly, nonatomic) *_GEOTileKey tileKeyPtr;


-(id)init;
-(void)cancel;
-(void)dealloc;
// -(void)loadResourcesForTileKey:(struct _GEOTileKey *)arg0 manifestConfiguration:(id)arg1 auditToken:(id)arg2 signpostID:(NSUInteger)arg3 finished:(id)arg4 error:(unk)arg5  ;


@end


#endif