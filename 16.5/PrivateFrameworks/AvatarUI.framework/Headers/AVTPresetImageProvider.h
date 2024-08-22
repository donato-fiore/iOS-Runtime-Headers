// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTPRESETIMAGEPROVIDER_H
#define AVTPRESETIMAGEPROVIDER_H

@class NSString;
@protocol AVTDeviceResourceConsumer, AVTImageCache, OS_dispatch_queue, AVTDeviceResourceConsumerDelegate, AVTUILogger, AVTTaskScheduler;

#import <Foundation/Foundation.h>

#import "AVTRenderingScope.h"
#import "AVTAvatarConfigurationImageRenderer.h"

@interface AVTPresetImageProvider : NSObject <AVTDeviceResourceConsumer>



@property (readonly, nonatomic) NSObject<AVTImageCache> *cache; // ivar: _cache
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *colorQueue; // ivar: _colorQueue
@property (readonly, nonatomic) AVTRenderingScope *colorScope; // ivar: _colorScope
@property (weak, nonatomic) NSObject<AVTDeviceResourceConsumerDelegate> *consumerDelegate; // ivar: _consumerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AVTRenderingScope *defaultScope; // ivar: _defaultScope
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *presetQueue; // ivar: _presetQueue
@property (readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer; // ivar: _renderer
@property (readonly, nonatomic) NSObject<AVTTaskScheduler> *renderingScheduler; // ivar: _renderingScheduler
@property (readonly) Class superclass;


+(id)configurationToRenderForPreset:(id)arg0 overrides:(id)arg1 baseConfiguration:(id)arg2 ;
+(id)presetImageCacheWithEnvironment:(id)arg0 ;
-(id)initWithCache:(id)arg0 environment:(id)arg1 ;
-(id)initWithCache:(id)arg0 renderingScheduler:(id)arg1 environment:(id)arg2 ;
// -(id)initWithCache:(id)arg0 renderingScheduler:(id)arg1 renderingQueueProvider:(id)arg2 callbackQueue:(unk)arg3 renderer:(id)arg4 defaultScope:(id)arg5 environment:(id)arg6  ;
-(id)initWithRenderingScheduler:(id)arg0 environment:(id)arg1 ;
-(id)providerForImageForItem:(SEL)arg0 scope:(id)arg1 queue:(id)arg2 renderingHandler:(id)arg3 ;
-(id)providerForThumbnailForModelColor:(SEL)arg0 ;
-(id)providerForThumbnailForModelPreset:(SEL)arg0 presetOverrides:(id)arg1 poseOverride:(id)arg2 avatarConfiguration:(id)arg3 framingMode:(id)arg4 ;
-(id)renderThumbnailForModelColor:(id)arg0 ;
-(void)releaseRenderingResourceForEstimatedDuration:(CGFloat)arg0 ;


@end


#endif