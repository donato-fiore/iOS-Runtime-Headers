// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKICONDISKCACHE_H
#define _MKICONDISKCACHE_H

@class NSURL, NSLock, NSMutableArray, NSString;
@protocol GEOResourceManifestTileGroupObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _MKIconDiskCache : NSObject <GEOResourceManifestTileGroupObserver>

 {
    NSURL *_directoryURL;
    NSObject<OS_dispatch_queue> *_storingQueue;
    NSLock *_lock;
    NSMutableArray *_inProgressUUIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)imageForStyleAttributes:(id)arg0 size:(NSUInteger)arg1 scale:(CGFloat)arg2 drawingBlock:(id)arg3 ;
-(id)imageForStyleAttributes:(id)arg0 size:(NSUInteger)arg1 scale:(CGFloat)arg2 isCarplay:(BOOL)arg3 isTransit:(BOOL)arg4 isTransparent:(BOOL)arg5 isNightMode:(BOOL)arg6 drawingBlock:(id)arg7 ;
-(id)initWithDirectoryURL:(id)arg0 ;
-(void)_updateVersionsInfo;
-(void)dealloc;
-(void)resourceManifestManager:(id)arg0 didChangeActiveTileGroup:(id)arg1 fromOldTileGroup:(id)arg2 ;


@end


#endif