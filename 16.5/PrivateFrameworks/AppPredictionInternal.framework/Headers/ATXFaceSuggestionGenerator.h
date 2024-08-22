// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFACESUGGESTIONGENERATOR_H
#define ATXFACESUGGESTIONGENERATOR_H

@class _PASQueueLock, _PASSimpleCoalescingTimer, NSString, ATXFaceGalleryConfiguration;
@protocol ATXPosterDescriptorCacheObserver, ATXPosterConfigurationCacheObserver, ATXFaceGalleryLayoutGeneratorComplicationProviding, ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding, ATXFaceSuggestionParameters, OS_dispatch_queue, ATXFaceSuggestionGeneratorDelegate;

#import <Foundation/Foundation.h>

#import "ATXPosterDescriptorCache.h"
#import "ATXPosterConfigurationCache.h"

@interface ATXFaceSuggestionGenerator : NSObject <ATXPosterDescriptorCacheObserver, ATXPosterConfigurationCacheObserver>

 {
    ATXPosterDescriptorCache *_descriptorCache;
    ATXPosterConfigurationCache *_configurationCache;
    id<ATXFaceGalleryLayoutGeneratorComplicationProviding> *_complicationProvider;
    id<ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding> *_complicationDescriptorProvider;
    id<ATXFaceSuggestionParameters> *_parameters;
    _PASQueueLock *_lock;
    _PASSimpleCoalescingTimer *_regenerationCoalescingTimer;
    NSObject<OS_dispatch_queue> *_outputQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXFaceSuggestionGeneratorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ATXFaceGalleryConfiguration *faceGalleryConfiguration;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldUseDayZeroCuration;
@property (readonly) Class superclass;


-(id)_createLayoutGeneratorWithDayZero:(BOOL)arg0 locale:(id)arg1 ;
-(id)initWithDescriptorCache:(id)arg0 configurationCache:(id)arg1 complicationProvider:(id)arg2 complicationDescriptorProvider:(id)arg3 parameters:(id)arg4 ;
-(void)_generateFaceGalleryConfigurationNotifyingWithGuardedData:(id)arg0 ;
-(void)configurationCacheDidUpdateWithNewConfigurations:(id)arg0 oldConfigurations:(id)arg1 ;
-(void)descriptorCacheDidUpdateWithDescriptors:(id)arg0 ;
-(void)regenerateFaceGalleryConfigurationCoalescedWithReason:(id)arg0 ;
-(void)regenerateFaceGalleryConfigurationImmediatelyWithReason:(id)arg0 ;


@end


#endif