// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCLIENTMODELCACHEMANAGER_H
#define ATXCLIENTMODELCACHEMANAGER_H

@class _PASLock, NSString;
@protocol ATXClientModelCacheManagerProtocol;

#import <Foundation/Foundation.h>


@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol>

 {
    _PASLock *_clientModelCacheHandlersLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)cacheAgeForClientModel:(id)arg0 ;
-(id)cacheDirectory;
-(id)cacheFileHandlerForClientModel:(id)arg0 guardedData:(id)arg1 ;
-(id)cachedSuggestionsForAllClientModels;
-(id)cachedSuggestionsForClientModel:(id)arg0 ;
-(id)init;
-(id)lastCacheUpdateDateForClientModel:(id)arg0 ;
-(void)addCacheHandlersForExistingClientModelCaches;
-(void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)arg0 clientModelId:(id)arg1 ;
-(void)initGuardedData;
-(void)updateCachedSuggestions:(id)arg0 ;


@end


#endif