// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFUIGUIDECACHEMANAGER_H
#define AFUIGUIDECACHEMANAGER_H

@class SAGuidanceGuideUpdate, SAGuidanceGuideSnippet, NSNumber, SAGuidanceSuggestedUtterances;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFUIGuideCacheManager : NSObject {
    SAGuidanceGuideUpdate *_cachedGuideUpdate;
    NSObject<OS_dispatch_queue> *_cacheFileQueue;
    BOOL _isCheckingGuideUpdate;
}


@property (readonly, nonatomic) SAGuidanceGuideSnippet *cachedGuideSnippet;
@property (readonly, nonatomic) NSNumber *cachedGuideTag;
@property (readonly, nonatomic) SAGuidanceSuggestedUtterances *cachedSuggestedUtterances;


+(id)sharedManager;
-(BOOL)_shouldCheckForUpdateAtDate:(id)arg0 lastAppUpdateTime:(id)arg1 ;
-(BOOL)shouldCheckForUpdateWithLastAppUpdateTime:(id)arg0 ;
-(id)_aceObjectDictionaryAtFilepath:(id)arg0 ;
-(id)_cachedGuideUpdate;
-(id)_pathForCachedGuideUpdate;
-(id)init;
-(void)_checkGuideUpdateUsingAFClientLiteWithTag:(id)arg0 ;
-(void)_clearCachedGuide;
-(void)_updateLastCheckedWithDate:(id)arg0 ;
-(void)checkGuideUpdate;
-(void)dealloc;
-(void)updateCacheWithGuideUpdate:(id)arg0 completion:(id)arg1 ;
-(void)updateLastCheckedDate;


@end


#endif