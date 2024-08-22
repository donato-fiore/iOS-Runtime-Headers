// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNUICACHINGLIKENESSRENDERER_H
#define _CNUICACHINGLIKENESSRENDERER_H

@class NSString, NSPointerArray, CNQueue, CNCache;
@protocol CNUILikenessRendering, CNUILikenessCachingRenderer, CNAvatarCacheChangeListenerDelegate, CNSchedulerProvider, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CNAvatarCacheChangeListener.h"
#import "_CNUILikenessRenderer.h"

@interface _CNUICachingLikenessRenderer : NSObject <CNUILikenessRendering, CNUILikenessCachingRenderer, CNAvatarCacheChangeListenerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) CNAvatarCacheChangeListener *changeHistoryListener; // ivar: _changeHistoryListener
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSPointerArray *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNQueue *evictionQueue; // ivar: _evictionQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) NSObject<CNSchedulerProvider> *mainThreadSchedulerProvider; // ivar: _mainThreadSchedulerProvider
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource; // ivar: _memoryMonitoringSource
@property (readonly, nonatomic) _CNUILikenessRenderer *renderer; // ivar: _renderer
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly, nonatomic) BOOL shouldRequireMainThread; // ivar: _shouldRequireMainThread
@property (readonly) Class superclass;


+(id)_cacheKeyForContacts:(id)arg0 scope:(id)arg1 ;
+(id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)arg0 ;
+(id)descriptorForRequiredKeys;
-(id)initWithLikenessRenderer:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)initWithLikenessRenderer:(id)arg0 schedulerProvider:(id)arg1 capacity:(NSUInteger)arg2 shouldRequireMainThread:(BOOL)arg3 ;
-(id)initWithLikenessRenderer:(id)arg0 schedulerProvider:(id)arg1 capacity:(NSUInteger)arg2 shouldRequireMainThread:(BOOL)arg3 contactStore:(id)arg4 ;
-(id)initialRenderedLikenessesForContacts:(id)arg0 withBadges:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3 ;
-(id)loadingPlaceholderForContactCount:(NSUInteger)arg0 scope:(id)arg1 ;
-(id)renderedBasicMonogramForString:(id)arg0 color:(id)arg1 scope:(id)arg2 prohibitedSources:(NSInteger)arg3 ;
-(id)renderedBasicMonogramFromString:(id)arg0 scope:(id)arg1 ;
-(id)renderedLikenessForBadge:(id)arg0 scope:(id)arg1 workScheduler:(id)arg2 ;
-(id)renderedLikenessesForContacts:(id)arg0 scope:(id)arg1 workScheduler:(id)arg2 ;
-(id)renderedLikenessesForContacts:(id)arg0 withBadges:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3 ;
-(id)resizeCacheEntry:(id)arg0 withScope:(id)arg1 workScheduler:(id)arg2 ;
-(id)startCacheEntryWithObservable:(id)arg0 contacts:(id)arg1 scope:(id)arg2 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)emptyCache:(id)arg0 ;
-(void)invalidateCacheEntriesContainingIdentifiers:(id)arg0 ;
-(void)refreshCacheKey:(id)arg0 ;
-(void)updateContactsWithIdentifiers:(id)arg0 ;


@end


#endif