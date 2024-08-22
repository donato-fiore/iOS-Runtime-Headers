// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETEQUERYCACHEHELPER_H
#define CNAUTOCOMPLETEQUERYCACHEHELPER_H

@class CNCache, NSString, CNObservable;
@protocol CNSchedulerProvider;

#import <Foundation/Foundation.h>

#import "CNAutocompleteQueryCacheMissAuditor.h"

@interface CNAutocompleteQueryCacheHelper : NSObject

@property (readonly, nonatomic) CNCache *cache; // ivar: _cache
@property (readonly, nonatomic) CNAutocompleteQueryCacheMissAuditor *cacheMissAuditor; // ivar: _cacheMissAuditor
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly, copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, nonatomic) CNObservable *serverSearchObservable; // ivar: _serverSearchObservable


+(BOOL)shouldCacheResults:(id)arg0 ;
+(id)stringByRemovingLastCharacterFromString:(id)arg0 ;
-(id)cachedFutureForSearchString:(id)arg0 ;
-(id)initWithCache:(id)arg0 searchString:(id)arg1 serverSearchObservable:(id)arg2 ;
-(id)initWithCache:(id)arg0 searchString:(id)arg1 serverSearchObservable:(id)arg2 cacheMissAuditor:(id)arg3 schedulerProvider:(id)arg4 ;
-(id)observablesForSearchString:(id)arg0 withCachedResults:(id)arg1 ;
-(id)remoteResultsForSearchString:(id)arg0 ;
-(id)remoteResultsForSearchString:(id)arg0 andCompletePromise:(id)arg1 ;


@end


#endif