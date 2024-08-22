// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAVOCADODESCRIPTORCACHE_H
#define ATXAVOCADODESCRIPTORCACHE_H

@class CHSAvocadoDescriptorProvider, NSString, _PASSimpleCoalescingTimer, NSSet, NSDictionary;
@protocol CHSAvocadoDescriptorProviderObserver, OS_dispatch_queue, ATXCategoricalHistogramProtocol;

#import <Foundation/Foundation.h>

#import "ATXDefaultHomeScreenItemUpdater.h"

@interface ATXAvocadoDescriptorCache : NSObject <CHSAvocadoDescriptorProviderObserver>

 {
    CHSAvocadoDescriptorProvider *_provider;
    NSString *_descriptorsWithAdditionalDataPath;
    _PASSimpleCoalescingTimer *_coalescedDescriptorUpdateOperation;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSSet *_descriptors;
    ATXDefaultHomeScreenItemUpdater *_defaultHomeScreenItemUpdater;
    id<ATXCategoricalHistogramProtocol> *_spotlightLaunchHistogram;
    NSDictionary *_intentToDescriptorDictionary;
    NSDictionary *_containerBundleIdAndKindToDescriptorDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSSet *descriptors;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<ATXCategoricalHistogramProtocol> *spotlightLaunchHistogram;
@property (readonly) Class superclass;


+(id)containerBundleIdForExtensionBundleId:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_writeAvocadoDescriptorsWithAdditionalDataOnInternalQueue:(id)arg0 withError:(*id)arg1 ;
-(id)_fetchAvocadoDescriptorsWithAdditionalDataOnInternalQueueWithError:(*id)arg0 ;
-(id)_mergeNewDescriptorsWithOldDescriptorsOnInternalQueue:(id)arg0 ;
-(id)_updateAvocadoDescriptorsWithAdditionalDataOnInternalQueue;
-(id)descriptorForContainerBundleId:(id)arg0 widgetKind:(id)arg1 ;
-(id)descriptorForIntent:(id)arg0 ;
-(id)fetchAvocadoDescriptorsWithAdditionalDataWithError:(*id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)initWithProvider:(id)arg0 path:(id)arg1 ;
-(void)_descriptorsDidUpdateOnInternalQueueWithReason:(id)arg0 ;
-(void)_markMissingAvocadoDescriptorsAsUninstalledOnInternalQueue:(id)arg0 ;
-(void)_updateDescriptorMappings;
-(void)_writeNewAvocadoDescriptorsOnInternalQueueIfNecessary:(id)arg0 oldAvocadoDescriptors:(id)arg1 ;
-(void)dealloc;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)removeDeletedItemsFromAdditionalDataCache;
-(void)updateDefaultsDueToRelevantHomeScreenConfigUpdate;
-(void)updateDefaultsIfNeededWithSystemDescriptorsAndInstallDatesCache:(id)arg0 reason:(id)arg1 ;
-(void)updateDefaultsWithSystemDescriptorsAndInstallDatesCache:(id)arg0 reason:(id)arg1 ;


@end


#endif