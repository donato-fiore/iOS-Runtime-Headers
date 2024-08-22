// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTUIIMAGERENDERSERVICE_H
#define AVTUIIMAGERENDERSERVICE_H

@class AVTAvatarRecord, NSLock;
@protocol AVTUIImageRenderServiceProtocol, AVTUILogger, AVTTaskScheduler, OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVTClippableImageStore.h"
#import "AVTUIStickerRenderer.h"
#import "AVTUIEnvironment.h"
#import "AVTUIStickerGeneratorPool.h"
#import "AVTImageStore.h"

@interface AVTUIImageRenderService : NSObject <AVTUIImageRenderServiceProtocol>



@property (nonatomic) NSInteger activeTransactionCount; // ivar: _activeTransactionCount
@property (weak, nonatomic) id *cleanupBlock; // ivar: _cleanupBlock
@property (readonly, nonatomic) AVTClippableImageStore *clippableImageStore; // ivar: _clippableImageStore
@property (retain, nonatomic) AVTAvatarRecord *currentAvatarRecord; // ivar: _currentAvatarRecord
@property (retain, nonatomic) AVTUIStickerRenderer *currentStickerRenderer; // ivar: _currentStickerRenderer
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool; // ivar: _generatorPool
@property (readonly, nonatomic) AVTImageStore *imageStore; // ivar: _imageStore
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<AVTTaskScheduler> *taskScheduler; // ivar: _taskScheduler
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction
@property (retain, nonatomic) NSLock *transactionCountLock; // ivar: _transactionCountLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(id)init;
-(void)_generateAndCacheImageForAvatarRecord:(id)arg0 scope:(id)arg1 withReply:(id)arg2 ;
-(void)_lock_beginCleanupTimer;
-(void)_lock_invalidateCleanupTimer;
-(void)_requestAnimojiStickerImageForAvatarRecord:(id)arg0 withStickerPackName:(id)arg1 stickerConfigurationName:(id)arg2 resource:(id)arg3 withReply:(id)arg4 ;
-(void)_requestImageForAvatar:(id)arg0 scope:(id)arg1 withModifications:(id)arg2 withReply:(id)arg3 ;
-(void)_requestImageForAvatar:(id)arg0 scope:(id)arg1 withReply:(id)arg2 ;
-(void)_requestStickerImageForAvatarRecord:(id)arg0 withStickerPackName:(id)arg1 stickerConfigurationName:(id)arg2 resource:(id)arg3 withReply:(id)arg4 ;
-(void)dealloc;
-(void)exit;
-(void)generateAndCacheImageForAvatarRecord:(id)arg0 scope:(id)arg1 withReply:(id)arg2 ;
-(void)requestAnimojiStickerImageForAvatarRecord:(id)arg0 withStickerPackName:(id)arg1 stickerConfigurationName:(id)arg2 resource:(id)arg3 withReply:(id)arg4 ;
-(void)requestImageForAvatar:(id)arg0 scope:(id)arg1 withModifications:(id)arg2 withReply:(id)arg3 ;
-(void)requestImageForAvatar:(id)arg0 scope:(id)arg1 withReply:(id)arg2 ;
-(void)requestStickerImageForAvatarRecord:(id)arg0 withStickerPackName:(id)arg1 stickerConfigurationName:(id)arg2 resource:(id)arg3 withReply:(id)arg4 ;


@end


#endif