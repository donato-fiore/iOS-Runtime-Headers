// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCLOCKUPVIEWGROUP_H
#define ASCLOCKUPVIEWGROUP_H

@class NSMutableDictionary, NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "ASCLockupFetcher.h"

@interface ASCLockupViewGroup : NSObject

@property (readonly, nonatomic) NSMutableDictionary *deferredRequests; // ivar: _deferredRequests
@property (nonatomic) BOOL hasScheduledBatchRequest; // ivar: _hasScheduledBatchRequest
@property (readonly, nonatomic) ASCLockupFetcher *lockupFetcher; // ivar: _lockupFetcher
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSMutableArray *prefetchSpans;
@property (retain, nonatomic) NSMutableArray *prefetchSpansIfLoaded; // ivar: _prefetchSpansIfLoaded


+(id)log;
+(void)createConnectionWithCompletionBlock:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 lockupFetcher:(id)arg1 ;
-(id)lockupWithRequest:(id)arg0 ;
-(void)_cacheLockupsWithCollectionRequest:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_cacheLockupsWithRequests:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_lockupDictionaryForRequest:(id)arg0 includingKeys:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)_lockupRequestForBundleID:(id)arg0 withContext:(id)arg1 completionBlock:(id)arg2 ;
-(void)_prefetchLockupsWithRequests:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)performBatchRequests;
-(void)scheduleBatchRequestsIfNeeded;


@end


#endif