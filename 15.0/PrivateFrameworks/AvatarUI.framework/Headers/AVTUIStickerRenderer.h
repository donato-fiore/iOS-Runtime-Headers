// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTUISTICKERRENDERER_H
#define AVTUISTICKERRENDERER_H

@class AVTMemoji, AVTUILogger;
@protocol AVTAvatarRecord, AVTResourceCache, AVTCacheableResource, OS_dispatch_queue, AVTStickerTaskScheduler;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"
#import "AVTClippableImageStore.h"
#import "AVTUIStickerGeneratorPool.h"

@interface AVTUIStickerRenderer : NSObject

@property (readonly, nonatomic) AVTMemoji *avatar; // ivar: _avatar
@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (readonly, nonatomic) NSObject<AVTResourceCache> *cache; // ivar: _cache
@property (readonly, nonatomic) NSObject<AVTCacheableResource> *cacheableResourceItem; // ivar: _cacheableResourceItem
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue; // ivar: _encodingQueue
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) AVTClippableImageStore *imageStore; // ivar: _imageStore
@property (readonly, nonatomic) AVTUILogger *logger; // ivar: _logger
@property (nonatomic) BOOL parallelizeEncoding; // ivar: _parallelizeEncoding
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // ivar: _renderingQueue
@property (readonly, nonatomic) NSObject<AVTStickerTaskScheduler> *renderingScheduler; // ivar: _renderingScheduler
@property (readonly, nonatomic) AVTUIStickerGeneratorPool *stickerGeneratorPool; // ivar: _stickerGeneratorPool


+(BOOL)clearStickersForAvatarRecordIdentifier:(id)arg0 ;
+(BOOL)clearStickersForAvatarRecordIdentifier:(id)arg0 withEnvironment:(id)arg1 ;
+(id)imageEncoder;
+(id)stickerCacheWithEnvironment:(id)arg0 ;
-(id)initWithAvatarRecord:(id)arg0 avatar:(id)arg1 cache:(id)arg2 imageStore:(id)arg3 stickerGeneratorPool:(id)arg4 environment:(id)arg5 renderingScheduler:(id)arg6 renderingQueue:(id)arg7 encodingQueue:(id)arg8 callbackQueue:(id)arg9 ;
-(id)initWithAvatarRecord:(id)arg0 avatar:(id)arg1 stickerGeneratorPool:(id)arg2 scheduler:(id)arg3 imageStore:(id)arg4 environment:(id)arg5 ;
-(id)initWithAvatarRecord:(id)arg0 cache:(id)arg1 imageStore:(id)arg2 stickerGeneratorPool:(id)arg3 environment:(id)arg4 renderingScheduler:(id)arg5 renderingQueue:(id)arg6 encodingQueue:(id)arg7 callbackQueue:(id)arg8 ;
-(id)initWithAvatarRecord:(id)arg0 cache:(id)arg1 renderingScheduler:(id)arg2 renderingQueue:(id)arg3 encodingQueue:(id)arg4 stickerGeneratorPool:(id)arg5 environment:(id)arg6 ;
-(id)initWithAvatarRecord:(id)arg0 stickerGeneratorPool:(id)arg1 scheduler:(id)arg2 ;
-(id)initWithAvatarRecord:(id)arg0 stickerGeneratorPool:(id)arg1 scheduler:(id)arg2 imageStore:(id)arg3 ;
-(id)providerForResource:(SEL)arg0 forScope:(id)arg1 queue:(id)arg2 renderingHandler:(id)arg3 ;
-(id)providerForResourceForScope:(SEL)arg0 queue:(id)arg1 renderingHandler:(id)arg2 ;
-(id)providerForResourceWithAvatarConfiguration:(SEL)arg0 forScope:(id)arg1 queue:(id)arg2 renderingHandler:(id)arg3 ;
-(id)renderStickerResourceForItem:(id)arg0 scope:(id)arg1 configuration:(id)arg2 correctClipping:(BOOL)arg3 ;
-(id)renderStickerResourceForItem:(id)arg0 scope:(id)arg1 stickerConfiguration:(id)arg2 avatarConfiguration:(id)arg3 correctClipping:(BOOL)arg4 ;
-(id)scheduledStickerResourceProviderForStickerConfiguration:(SEL)arg0 ;
-(id)scheduledStickerResourceProviderForStickerConfiguration:(SEL)arg0 correctClipping:(id)arg1 ;
-(id)scheduledStickerResourceProviderForThumbnailForModelPreset:(SEL)arg0 presetOverrides:(id)arg1 avatarConfiguration:(id)arg2 stickerConfiguration:(id)arg3 ;
// -(id)scheduledTaskForItem:(SEL)arg0 scope:(id)arg1 queue:(id)arg2 renderingHandler:(id)arg3 resourceHandler:(id)arg4 synchronous:(unk)arg5  ;
-(void)saveImageForResource:(id)arg0 forScope:(id)arg1 synchronous:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)stopUsingResources;


@end


#endif