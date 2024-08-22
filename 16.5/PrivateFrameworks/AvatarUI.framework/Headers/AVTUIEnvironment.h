// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTUIENVIRONMENT_H
#define AVTUIENVIRONMENT_H

@class AVTMemoji, AVTCoreEnvironment, NSURL, NSNotificationCenter, NSUserDefaults;
@protocol AVTImageCache, AVTUsageTrackingSession, OS_dispatch_queue, AVTUILogger;

#import <Foundation/Foundation.h>

#import "AVTCoreModel.h"
#import "AVTAvatarConfigurationImageRenderer.h"
#import "AVTAvatarRemoteImageRenderer.h"
#import "AVTDeviceResourceManager.h"

@interface AVTUIEnvironment : NSObject {
    AVTCoreModel *_editorCoreModel;
    AVTAvatarConfigurationImageRenderer *_renderer;
    AVTAvatarRemoteImageRenderer *_remoteRenderer;
    AVTMemoji *_editorThumbnailAvatar;
    id<AVTImageCache> *_inMemoryImageCache;
    id<AVTUsageTrackingSession> *_usageTrackingSession;
}


@property (nonatomic) CGFloat actionAnimationsMultiplier; // ivar: _actionAnimationsMultiplier
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *backgroundEncodingQueue; // ivar: _backgroundEncodingQueue
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *backgroundRenderingQueue; // ivar: _backgroundRenderingQueue
@property (readonly, nonatomic) AVTCoreEnvironment *coreEnvironment; // ivar: _coreEnvironment
@property (readonly, nonatomic) BOOL deviceIsMac; // ivar: _deviceIsMac
@property (readonly, nonatomic) BOOL deviceIsPad; // ivar: _deviceIsPad
@property (readonly, nonatomic) AVTDeviceResourceManager *deviceResourceManager; // ivar: _deviceResourceManager
@property (readonly, nonatomic) AVTCoreModel *editorCoreModel;
@property (readonly, nonatomic) AVTMemoji *editorThumbnailAvatar;
@property (readonly, copy, nonatomic) NSURL *imageCacheStoreLocation;
@property (readonly, copy, nonatomic) NSURL *imageStoreLocation;
@property (readonly, nonatomic) NSObject<AVTImageCache> *inMemoryImageCache;
@property (readonly, copy, nonatomic) id *lockProvider;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger;
@property (readonly, nonatomic) CGFloat mainScreenScale; // ivar: _mainScreenScale
@property (readonly, nonatomic) CGSize mainScreenSize; // ivar: _mainScreenSize
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSUInteger platform; // ivar: _platform
@property (readonly, nonatomic) AVTAvatarRemoteImageRenderer *remoteRenderer;
@property (readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer;
@property (readonly, copy, nonatomic) id *serialQueueProvider;
@property (readonly, copy, nonatomic) NSURL *stickerImageStoreLocation;
@property (readonly, copy, nonatomic) NSURL *storeLocation;
@property (readonly, nonatomic) NSObject<AVTUsageTrackingSession> *usageTrackingSession;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSInteger userInterfaceLayoutDirection; // ivar: _userInterfaceLayoutDirection


+(id)createEditorCoreModelForPlatform:(NSUInteger)arg0 withLogger:(id)arg1 ;
+(id)createFunCamEnvironment;
+(id)createQueueWithQoSClass:(unsigned int)arg0 label:(char *)arg1 ;
// +(id)createUsageTrackingSessionWithCoreModel:(id)arg0 serialQueueProvider:(id)arg1 logger:(unk)arg2  ;
+(id)defaultEnvironment;
-(id)initWithCoreEnvironment:(id)arg0 ;
-(id)initWithCoreEnvironment:(id)arg0 platform:(NSUInteger)arg1 ;
-(void)flushResourcesForEnteringBackground;


@end


#endif