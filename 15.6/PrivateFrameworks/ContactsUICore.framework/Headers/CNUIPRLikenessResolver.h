// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIPRLIKENESSRESOLVER_H
#define CNUIPRLIKENESSRESOLVER_H

@class CNContactStore, NSString, CNQueue, CNCache, CNSchedulerProvider;
@protocol CNUIPRLikenessResolver, CNSchedulerProvider, OS_dispatch_source, CNUIPlaceholderProviderFactory;

#import <Foundation/Foundation.h>


@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver>



@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNQueue *evictionQueue; // ivar: _evictionQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNCache *likenessCache; // ivar: _likenessCache
@property (retain, nonatomic) NSObject<CNUIPRLikenessResolver> *likenessResolver; // ivar: _likenessResolver
@property (retain, nonatomic) NSObject<CNSchedulerProvider> *mainThreadSchedulerProvider; // ivar: _mainThreadSchedulerProvider
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource; // ivar: _memoryMonitoringSource
@property (retain, nonatomic) NSObject<CNUIPlaceholderProviderFactory> *placeholderProviderFactory; // ivar: _placeholderProviderFactory
@property (nonatomic) NSInteger prohibitedSources;
@property (readonly, nonatomic) CNSchedulerProvider *schedulerProvider;
@property (readonly) Class superclass;


+(NSUInteger)maxContacts;
+(id)_cacheKeyForContact:(id)arg0 ;
+(id)descriptorForRequiredKeys;
-(id)badgeObservableWithLikenessBadge:(id)arg0 workScheduler:(id)arg1 ;
-(id)basicMonogramObservableFromString:(id)arg0 color:(id)arg1 ;
-(id)initWithContactStore:(id)arg0 scheduler:(id)arg1 ;
-(id)initWithContactStore:(id)arg0 scheduler:(id)arg1 meMonitor:(id)arg2 ;
-(id)initWithLikenessResolver:(id)arg0 ;
-(id)initWithLikenessResolver:(id)arg0 capacity:(NSUInteger)arg1 ;
-(id)initWithLikenessResolver:(id)arg0 capacity:(NSUInteger)arg1 schedulerProvider:(id)arg2 ;
-(id)likenessLookup;
-(id)likenessesForContact:(id)arg0 options:(id)arg1 workScheduler:(id)arg2 ;
-(id)likenessesForContact:(id)arg0 workScheduler:(id)arg1 ;
-(id)resolveLikenessesForContacts:(id)arg0 workScheduler:(id)arg1 withContentHandler:(id)arg2 ;
-(void)dealloc;
-(void)emptyCache:(id)arg0 ;
-(void)refreshCacheKey:(id)arg0 ;


@end


#endif