// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXWIDGETDESCRIPTORCACHE_H
#define ATXWIDGETDESCRIPTORCACHE_H

@class CHSWidgetDescriptorProvider, NSString, _PASSimpleCoalescingTimer, NSSet, NSHashTable, NSDictionary;
@protocol CHSWidgetDescriptorProviderObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXWidgetDescriptorCache : NSObject <CHSWidgetDescriptorProviderObserver>

 {
    CHSWidgetDescriptorProvider *_provider;
    NSString *_descriptorMetadataPath;
    _PASSimpleCoalescingTimer *_coalescedDescriptorUpdateOperation;
    NSUInteger _coalescedDescriptorUpdateOptions;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSSet *_allDescriptors;
    NSHashTable *_observers;
    NSDictionary *_intentToHomeScreenDescriptorDictionary;
    NSDictionary *_containerBundleIdAndKindToHomeScreenDescriptorDictionary;
}


@property (readonly, copy) NSSet *complicationWidgetDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSSet *homeScreenDescriptors;
@property (readonly, copy) NSSet *inlineComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *modularComplicationWidgetDescriptors;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_writeAllDescriptorMetadataOnInternalQueue:(id)arg0 withError:(*id)arg1 ;
-(id)_fetchAccessoryWidgetDescriptorMetadataOnInternalQueueWithError:(*id)arg0 ;
-(id)_fetchAllDescriptorMetadataOnInternalQueueWithError:(*id)arg0 ;
-(id)_fetchHomeScreenWidgetDescriptorMetadataOnInternalQueueWithError:(*id)arg0 ;
-(id)_mergeNewDescriptorsWithCachedMetadataOnInternalQueue:(id)arg0 descriptors:(id)arg1 ;
-(id)_queue_allVisibleDescriptors;
-(id)_queue_homeScreenWidgetDescriptors;
-(id)_updateAllDescriptorMetadataOnInternalQueue;
-(id)fetchAccessoryWidgetDescriptorMetadataWithError:(*id)arg0 ;
-(id)fetchHomeScreenWidgetDescriptorMetadataWithError:(*id)arg0 ;
-(id)homeScreenDescriptorForContainerBundleId:(id)arg0 widgetKind:(id)arg1 ;
-(id)homeScreenDescriptorForIntent:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)initWithProvider:(id)arg0 path:(id)arg1 ;
-(void)_queue_descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)_scheduleCoalescedDescriptorUpdateOperation;
-(void)_updateDescriptorMappings;
-(void)dealloc;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif