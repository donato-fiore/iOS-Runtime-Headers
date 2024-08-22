// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXEFFECTPREVIEWMANAGER_H
#define JFXEFFECTPREVIEWMANAGER_H

@class NSValue, NSMapTable, NSSet, PVLivePlayer, NSString, NSMutableSet;
@protocol PVLivePlayerDelegate, OS_dispatch_queue, OS_dispatch_semaphore, JFXEffectPreviewManagerDelegate;

#import <Foundation/Foundation.h>

#import "JFXEffectContinousPreviewOptions.h"
#import "JTImage.h"
#import "JFXLRUCache.h"
#import "JFXEffectPreviewDiskCache.h"
#import "JFXEffectsPreviewGenerator.h"

@interface JFXEffectPreviewManager : NSObject <PVLivePlayerDelegate>

 {
    ? _delegateAvailability;
    BOOL _inDealloc;
}


@property (retain, nonatomic) NSValue *_defaultPreviewImageDisplayTransformValue_internal; // ivar: __defaultPreviewImageDisplayTransformValue_internal
@property (retain, nonatomic) NSMapTable *assetRequestsForPreviewEffects; // ivar: _assetRequestsForPreviewEffects
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *concurrentStaticPreviewSemaphore; // ivar: _concurrentStaticPreviewSemaphore
@property (copy, nonatomic) NSSet *continousPreviewEffects;
@property (retain, nonatomic) JFXEffectContinousPreviewOptions *continousPreviewOptions; // ivar: _continousPreviewOptions
@property (retain, nonatomic) PVLivePlayer *continousPreviewPlayer; // ivar: _continousPreviewPlayer
@property (nonatomic) CGSize continousPreviewSize; // ivar: _continousPreviewSize
@property (readonly, nonatomic, getter=isContinouslyPreviewing) BOOL continouslyPreviewing;
@property (nonatomic) BOOL continouslyPreviewing_internal; // ivar: _continouslyPreviewing_internal
@property (retain, nonatomic) NSSet *currentContinousPreviewEffects; // ivar: _currentContinousPreviewEffects
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) JTImage *defaultPreviewImage_internal; // ivar: _defaultPreviewImage_internal
@property (weak, nonatomic) NSObject<JFXEffectPreviewManagerDelegate> *delegate;
@property (weak, nonatomic) NSObject<JFXEffectPreviewManagerDelegate> *delegate_internal; // ivar: _delegate_internal
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *effectsPreparingForPreview; // ivar: _effectsPreparingForPreview
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSObject *pickerPreviewingToken; // ivar: _pickerPreviewingToken
@property (retain, nonatomic) NSMutableSet *preparedContinousPreviewEffects; // ivar: _preparedContinousPreviewEffects
@property (readonly, nonatomic) JFXLRUCache *previewCache; // ivar: _previewCache
@property (readonly, nonatomic) JFXEffectPreviewDiskCache *previewDiskCache; // ivar: _previewDiskCache
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *previewQueue; // ivar: _previewQueue
@property (retain, nonatomic) JFXEffectsPreviewGenerator *staticPreviewGenerator; // ivar: _staticPreviewGenerator
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // ivar: _synchronizationQueue


+(id)JFX_createTransparentEmptyImageForPreviewSize:(struct CGSize )arg0 ;
-(BOOL)JFX_lowPriorityScheduling;
-(BOOL)JFX_rendersDefaultContinousPreviewImage;
-(id)buildRenderRequest:(id)arg0 time:(struct ? )arg1 ;
-(id)defaultPreviewImage;
-(id)defaultPreviewImageDisplayTransformValue;
-(id)initWithName:(id)arg0 callbackQueue:(id)arg1 ;
-(void)JFX_cancelAssetRequestForAllEffects;
-(void)JFX_configureCommonRenderingPropertiesForEffect:(id)arg0 forPreviewSize:(struct CGSize )arg1 withPreviewOptions:(id)arg2 ;
-(void)JFX_delegateDidFinishDownloadingPreviewAssetsForEffect:(id)arg0 wasCancelled:(BOOL)arg1 error:(id)arg2 ;
-(void)JFX_delegateDownloadingPreviewAssetsForEffect:(id)arg0 progress:(CGFloat)arg1 ;
-(void)JFX_delegateUpdateContinousPreviewsForEffectIDs:(id)arg0 ;
-(void)JFX_delegateWillBeginDownloadingPreviewAssetsForEffect:(id)arg0 ;
-(void)JFX_dispatchBlockOnCallbackQueueImmediatelyWhenPossible:(id)arg0 ;
-(void)JFX_loadRenderingResourcesForEffect:(id)arg0 completion:(id)arg1 ;
-(void)JFX_prepareEffectForContinousPreview:(id)arg0 ;
-(void)JFX_renderPreviewForEffect:(id)arg0 previewSize:(struct CGSize )arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)JFX_requestPreviewAssetsForEffect:(id)arg0 withPriority:(NSInteger)arg1 onlyThumbnailAssetWhenAvailable:(BOOL)arg2 completion:(id)arg3 ;
-(void)JFX_startPreparingPreviewsContinuouslyAtSize:(struct CGSize )arg0 options:(id)arg1 ;
-(void)JFX_stopCachingPreviewsContinuously;
-(void)JFX_updateAssetRequestsPriorityAssociatedWithEffects:(id)arg0 toPriority:(NSInteger)arg1 ;
-(void)JFX_updateAssetRequestsPriorityNotAssociatedWithEffects:(id)arg0 toPriority:(NSInteger)arg1 ;
-(void)cachedPreviewForEffect:(id)arg0 completion:(id)arg1 ;
-(void)continousPreviewsForEffectIDs:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)preparePreviewForEffect:(id)arg0 atSize:(struct CGSize )arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)previewForEffect:(id)arg0 atSize:(struct CGSize )arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)purgeCachedPreviewForEffect:(id)arg0 ;
-(void)purgeCachedPreviewsForAllEffects;
-(void)renderRequestComplete:(id)arg0 results:(id)arg1 completedOutOfOrder:(BOOL)arg2 ;
-(void)setDefaultPreviewImage:(id)arg0 transformValue:(id)arg1 ;
-(void)startPreparingPreviewsContinuouslyAtSize:(struct CGSize )arg0 options:(id)arg1 ;
-(void)stopCachingPreviewsContinuously;


@end


#endif