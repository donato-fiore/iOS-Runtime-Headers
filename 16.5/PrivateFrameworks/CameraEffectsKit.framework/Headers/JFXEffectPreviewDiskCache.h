// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXEFFECTPREVIEWDISKCACHE_H
#define JFXEFFECTPREVIEWDISKCACHE_H

@class NSString, NSOperationQueue;

#import <Foundation/Foundation.h>


@interface JFXEffectPreviewDiskCache : NSObject

@property (readonly, nonatomic) NSString *cacheDirectoryPath; // ivar: _cacheDirectoryPath
@property (readonly, nonatomic) NSString *directoryName; // ivar: _directoryName
@property (readonly, nonatomic) NSOperationQueue *diskAccessQueue; // ivar: _diskAccessQueue


+(id)cachedPathForEffect:(id)arg0 version:(id)arg1 directoryPath:(id)arg2 ;
+(id)createCacheAtDirectory:(id)arg0 ;
-(id)cachedURLForEffect:(id)arg0 version:(id)arg1 ;
-(id)initWithDirectory:(id)arg0 ;
-(void)dealloc;
-(void)previewForEffectID:(id)arg0 version:(id)arg1 completion:(id)arg2 ;
-(void)removePreviewForEffectID:(id)arg0 excludingVersion:(id)arg1 completion:(id)arg2 ;
-(void)savePreviewForEffectID:(id)arg0 image:(id)arg1 version:(id)arg2 completion:(id)arg3 ;


@end


#endif