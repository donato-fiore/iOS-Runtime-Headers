// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AVTAVATARRECORDIMAGEPROVIDER_H
#define _AVTAVATARRECORDIMAGEPROVIDER_H

@protocol OS_dispatch_queue, AVTUILogger, AVTImageCache, AVTTaskScheduler;

#import <Foundation/Foundation.h>

#import "AVTAvatarImageRenderer.h"
#import "AVTAvatarConfigurationImageRenderer.h"
#import "AVTUIEnvironment.h"

@interface _AVTAvatarRecordImageProvider : NSObject

@property (readonly, nonatomic) BOOL allowPreFlight; // ivar: _allowPreFlight
@property (readonly, nonatomic) AVTAvatarImageRenderer *avatarRenderer; // ivar: _avatarRenderer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) AVTAvatarConfigurationImageRenderer *configurationRenderer; // ivar: _configurationRenderer
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<AVTImageCache> *peristentCache; // ivar: _peristentCache
@property (readonly, nonatomic) NSObject<AVTTaskScheduler> *renderingScheduler; // ivar: _renderingScheduler
@property (readonly, nonatomic) NSObject<AVTImageCache> *volatileCache; // ivar: _volatileCache
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(void)makePersistentImageCache:(*id)arg0 volatileImageCache:(*id)arg1 withEnvironment:(id)arg2 ;
-(id)_providerForAvatar:(SEL)arg0 forRecord:(id)arg1 scope:(id)arg2 usingCache:(id)arg3 ;
-(id)_providerForRecord:(SEL)arg0 scope:(id)arg1 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 taskScheduler:(id)arg1 ;
-(id)initWithPersistentCache:(id)arg0 volatileCache:(id)arg1 allowPreFlight:(BOOL)arg2 taskScheduler:(id)arg3 environment:(id)arg4 ;
-(id)initWithPersistentCache:(id)arg0 volatileCache:(id)arg1 renderingQueue:(id)arg2 callbackQueue:(id)arg3 configurationRenderer:(id)arg4 avatarRenderer:(id)arg5 taskScheduler:(id)arg6 allowPreFlight:(BOOL)arg7 environment:(id)arg8 ;
-(id)providerForAvatar:(SEL)arg0 forRecord:(id)arg1 scope:(id)arg2 usingCache:(id)arg3 ;
-(id)providerForRecord:(SEL)arg0 scope:(id)arg1 ;


@end


#endif