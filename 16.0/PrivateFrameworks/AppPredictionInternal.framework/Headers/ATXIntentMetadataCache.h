// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINTENTMETADATACACHE_H
#define ATXINTENTMETADATACACHE_H

@protocol ATXIntentMetadataCacheInvalidationDelegate;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"
#import "ATXIntentMetadataCacheInvalidationMonitor.h"

@interface ATXIntentMetadataCache : NSObject <ATXIntentMetadataCacheInvalidationDelegate>

 {
    _ATXDataStore *_dataStore;
    ATXIntentMetadataCacheInvalidationMonitor *_invalidationCriteria;
}




+(id)sharedInstance;
-(BOOL)isEligibleForWidgetsForIntent:(id)arg0 ;
-(BOOL)supportsBackgroundExecutionForIntent:(id)arg0 ;
-(id)_getCachedEligibleForWidgetsForIntent:(id)arg0 ;
-(id)_getCachedSubtitleForCacheKey:(id)arg0 ;
-(id)_getCachedSupportsBackgroundExecutionForIntent:(id)arg0 ;
-(id)_getCachedTitleForCacheKey:(id)arg0 ;
-(id)initInternal;
-(id)initWithDataStore:(id)arg0 cacheInvalidationCriteria:(id)arg1 startMonitoring:(BOOL)arg2 ;
-(id)subtitleForIntent:(id)arg0 localeIdentifier:(id)arg1 ;
-(id)titleForIntent:(id)arg0 localeIdentifier:(id)arg1 ;
-(id)validParameterCombinationsWithSchemaForIntent:(id)arg0 ;
-(void)_setEligibleForWidgets:(BOOL)arg0 intent:(id)arg1 ;
-(void)_setSubtitle:(id)arg0 cacheKey:(id)arg1 ;
-(void)_setSupportsBackgroundExecution:(BOOL)arg0 intent:(id)arg1 ;
-(void)_setTitle:(id)arg0 cacheKey:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)applicationsDidUpdate:(id)arg0 ;
-(void)setValidParameterCombinationsWithSchema:(id)arg0 intent:(id)arg1 ;
-(void)systemDidUpdate;


@end


#endif