// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTPRESETRESOURCELOADER_H
#define AVTPRESETRESOURCELOADER_H

@protocol OS_dispatch_queue, AVTImageCache, AVTUILogger, AVTTaskScheduler;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"
#import "AVTInMemoryResourceCache.h"

@interface AVTPresetResourceLoader : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) NSObject<AVTImageCache> *inMemoryImageCache; // ivar: _inMemoryImageCache
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) AVTInMemoryResourceCache *presetCache; // ivar: _presetCache
@property (readonly, nonatomic) NSObject<AVTTaskScheduler> *renderingScheduler; // ivar: _renderingScheduler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithEnvironment:(id)arg0 renderingScheduler:(id)arg1 callbackQueue:(id)arg2 ;
-(id)initWithPresetCache:(id)arg0 renderingScheduler:(id)arg1 callbackQueue:(id)arg2 environment:(id)arg3 ;
-(id)preLoadResourcesForPresetResourcesProvider:(id)arg0 completionHandler:(id)arg1 ;
-(id)preLoadResourcesForSectionItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)performPresetLoadingForPresetResources:(id)arg0 task:(id)arg1 ;
-(void)performPresetResourcesPreloadingTask:(id)arg0 ;
-(void)performSectionItemPreloadingTask:(id)arg0 ;
-(void)startPresetPreloadingTask:(id)arg0 ;
-(void)startSectionItemPreloadingTask:(id)arg0 ;


@end


#endif