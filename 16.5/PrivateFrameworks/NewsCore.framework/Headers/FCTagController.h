// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTAGCONTROLLER_H
#define FCTAGCONTROLLER_H

@class NSMutableDictionary, NSString;
@protocol FCTagsFetchOperationDelegate, FCCoreConfigurationObserving, FCOperationThrottlerDelegate, FCJSONEncodableObjectProviding, FCCoreConfigurationManager;

#import <Foundation/Foundation.h>

#import "FCCKContentDatabase.h"
#import "FCAssetManager.h"
#import "FCTagRecordSource.h"
#import "FCThreadSafeMutableDictionary.h"
#import "FCOperationThrottler.h"

@interface FCTagController : NSObject <FCTagsFetchOperationDelegate, FCCoreConfigurationObserving, FCOperationThrottlerDelegate, FCJSONEncodableObjectProviding>

 {
    FCCKContentDatabase *_contentDatabase;
    FCAssetManager *_assetManager;
    FCTagRecordSource *_tagRecordSource;
    id<FCCoreConfigurationManager> *_configurationManager;
    FCThreadSafeMutableDictionary *_fastCache;
    FCOperationThrottler *_tagPrefetchThrottler;
    NSMutableDictionary *_prefetchedTags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldPrefetchGlobalTags;
@property (readonly) Class superclass;


+(BOOL)isTagAllowed:(id)arg0 ;
+(BOOL)isTagAllowedInContentStoreFront:(id)arg0 ;
-(id)channelsForTagRecords:(id)arg0 ;
-(id)expectedFastCachedTagForID:(id)arg0 ;
-(id)fastCachedTagForID:(id)arg0 ;
-(id)fastCachedTagsForIDs:(id)arg0 ;
-(id)fetchOperationForTagsIncludingChildrenWithIDs:(id)arg0 softMaxAge:(CGFloat)arg1 ;
-(id)fetchOperationForTagsWithIDs:(id)arg0 ;
-(id)fetchOperationForTagsWithIDs:(id)arg0 includeChildren:(BOOL)arg1 ;
-(id)fetchOperationForTagsWithIDs:(id)arg0 includeParents:(BOOL)arg1 ;
-(id)init;
-(id)initWithContentDatabase:(id)arg0 assetManager:(id)arg1 tagRecordSource:(id)arg2 configurationManager:(id)arg3 ;
-(id)jsonEncodableObject;
-(id)slowCachedTagForID:(id)arg0 ;
-(id)slowCachedTagsForIDs:(id)arg0 ;
-(id)tagsForTagIDs:(id)arg0 ;
-(id)tagsForTagIDs:(id)arg0 predicate:(id)arg1 ;
-(id)tagsForTagRecords:(id)arg0 ;
-(void)configurationManager:(id)arg0 configurationDidChange:(id)arg1 ;
-(void)dealloc;
-(void)fetchTagForTagID:(id)arg0 qualityOfService:(NSInteger)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchTagsForTagIDs:(id)arg0 cachePolicy:(id)arg1 qualityOfService:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchTagsForTagIDs:(id)arg0 includeParents:(BOOL)arg1 includeChildren:(BOOL)arg2 qualityOfService:(NSInteger)arg3 callbackQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)fetchTagsForTagIDs:(id)arg0 maximumCachedAge:(CGFloat)arg1 qualityOfService:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchTagsForTagIDs:(id)arg0 qualityOfService:(NSInteger)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)operationThrottler:(id)arg0 performAsyncOperationWithCompletion:(id)arg1 ;
-(void)saveTagsToCache:(id)arg0 ;
-(void)tagsFetchOperation:(id)arg0 didFetchTags:(id)arg1 ;


@end


#endif